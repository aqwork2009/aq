#include <string>
#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
    std::string httpPost = "POST /device-api/site/querySiteInfoWithPage HTTP/1.1\n";
    httpPost += "Connection:close\n";
    httpPost += "Content-Length:178\n";
    httpPost += "content-type:application/json\n";
    httpPost += "Host: test.xhg.com\n\n";
    httpPost += "{\"requestBody\":{\"data\":{\"currentPage\":1,\"pageSize\":50}},\"requestHead\":{\"appVersion\":\"1.0\",\"requestId\":\"string\",\"sign\":\"b730a66c56163d7aa84c95086b636bd5\",\"validateTime\":\"string\"}}";
    std::cout << httpPost << std::endl;
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    if(-1 == sockfd)
    {
        std::cout << "socket error" << std::endl;
    }
    struct sockaddr_in address;
    struct hostent *server = NULL;
    server = gethostbyname("test.xhg.com");
    if(NULL == server)
    {
        herror("gethostbyname");
        return 0;
    }
    address.sin_family = AF_INET;
    address.sin_port = htons(8010);
    address.sin_addr.s_addr = (*((struct in_addr*)(server->h_addr))).s_addr;
    if(-1 == connect(sockfd, (struct sockaddr*)&address, sizeof(address)))
    {
        perror("connect");
        return 0;
    }
    if(-1 == send(sockfd, httpPost.c_str(), httpPost.size(), 0))
    {
        perror("send");
        return 0;
    }
    char buf[1024] = {0};
    int filefd = open("xhg.html", O_RDWR | O_CREAT | O_APPEND | O_TRUNC, 0644);
    if(-1 == filefd)
    {
        perror("open");
        return 0;
    }
    int res = 1;
    while(-1 != res && 0 != res)
    {
        memset(buf,0, 1024);
        res = recv(sockfd, buf, sizeof(buf) - 1, 0);
        std::string str_buf = buf;
        std::cout << str_buf;
        if(-1 != res && 0 != res)
        {
            if(-1 == write(filefd, buf, res))
            {
                perror("write");
                return 0;
            }
        }
    }
    close(sockfd);
    close(filefd);
    return 0;
}

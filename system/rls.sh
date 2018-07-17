#!/bin/sh  
  
bin="test_client" #发布的程序名称  
des="`pwd`/release"
  
deplist=$(ldd $bin | awk  '{if (match($3,"/")){ printf("%s "),$3 } }')  
cp $deplist $des  

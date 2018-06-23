#include <iostream>
using namespace std;
class I1
{
public:
    virtual void vf1()
    {
        cout << "I'm I1:vf1()" << endl;
    }
};
class I2
{
public:
    virtual void vf2()
    {
        cout << "I'm I2:vf2()" << endl;
    }
};

class C : public I1, public I2
{
private:
    int m_cache;
    int bbbb;
    int cdddd;
};

I1* CreateC()
{
    return new C();
}

int main()
{

    C* cccc = new C();
    I1* pI1 = cccc;
    pI1->vf1();

    I2* pI2_1 = (I2*)cccc;
    I2* pI2_2 = dynamic_cast<I2*>(cccc);
    pI2_1->vf2();
    pI2_2->vf2();

    cout << "cccc :"<<std::hex << cccc << endl;
    cout << "pI1 :"<<std::hex << pI1 << endl;
    cout << "pI2_1 (I2*):"<<std::hex << pI2_1 << endl;
    cout << "pI2_2:"<<std::hex << pI2_2 << endl;


    delete pI1;

    return 0;

}

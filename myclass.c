#include<iostream>
using namespace std;
class Shivam
{
    private:
    int a,b,c,d;
public:
    int p,q;
    void setData(int a1,int b1,int c1,int d1);
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of p is "<<p<<endl;
        cout<<"The value of q is "<<q<<endl;
    }
};
void Shivam:: setData(int a1,int b1,int c1,int d1)
{
    a=a1;
    b=b1;
    c=c1;
    d=d1;
}
int main()
{
    Shivam shiv;
    shiv.p=2;
    shiv.q=2;
    shiv.setData(1,2,3,4);
    shiv.getData();

}

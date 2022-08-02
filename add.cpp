#include<iostream>
using namespace std;
class addition
{
    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<a+b+c<<endl;
    }
};
int main()
{
    addition obj;
    obj.add(2,3);
    obj.add(2,3,4);
}
#include<iostream>
using namespace std;

class Int
{
    int num;
public:
    Int():num(0)
    {}
    Int(int n):num(n)
    {}
    void display()
    {
        cout<<"The interger number is "<<num<<endl;
    }
    void add(Int n1, Int n2)
    {
        num=n1.num+n2.num;
    }
};

int main()
{
    Int n1(5),n2(6),n3;
    n3.add(n1,n2);
    n3.display();
    return 0;
}

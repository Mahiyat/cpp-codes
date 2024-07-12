#include<iostream>
#include<string>
using namespace std;

class person
{
protected:
    string name;
    float salary;
public:
    void setData()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void printData()
    {
        cout<<name<<" "<<salary<<"\n";
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
};
void order1(person** p1,person** p2)
{
    if((*p1)->getName()>(*p2)->getName())
    {
        person* tmp=*p1;
        *p1=*p2;
        *p2=tmp;
    }
}
void order2(person** p1,person** p2)
{
    if((*p1)->getSalary()>(*p2)->getSalary())
    {
        person* tmp=*p1;
        *p1=*p2;
        *p2=tmp;
    }
}
void bsort1(person** p, int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            order1(p+i,p+j);
        }
    }
}
void bsort2(person** p, int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            order2(p+i,p+j);
        }
    }
}

int main()
{
    person* perPtr[100];
    int n=0,i;
    char ch;
    do
    {
       perPtr[n]=new person;
       perPtr[n]->setData();
       n++;
       cout<<"Enter another (y/n)? ";
       cin>>ch;
    }while(ch=='y');
    cout<<"\nUnsorted List:\n";
    for(i=0;i<n;i++)
    {
        perPtr[i]->printData();
    }
    bsort1(perPtr,n);
    cout<<"\nSorted by Name:\n";
    for(i=0;i<n;i++)
    {
        perPtr[i]->printData();
    }
    bsort2(perPtr,n);
    cout<<"\nSorted by Salary:\n";
    for(i=0;i<n;i++)
    {
        perPtr[i]->printData();
    }
    return 0;
}

#include<iostream>
using namespace std;

class publication
{
    string title;
    float price;
public:
    virtual void getdata()
    {
        cout<<"Enter the title: ";
        cin>>title;
        cout<<"Enter the price: ";
        cin>>price;
    }
    virtual void putdata()
    {
        cout<<"Title: "<<title<<"\n";
        cout<<"Price: "<<price<<"\n";
    }
    virtual bool isOversize()=0;
};

class book:public publication
{
    int page_count;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter the page count: ";
        cin>>page_count;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Page Count: "<<page_count<<"\n";
    }
    bool isOversize()
    {
        return (page_count>800);
    }
};

class tape:public publication
{
    float play_time;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter the play time in minutes: ";
        cin>>play_time;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Play Time: "<<play_time<<"\n";
    }
    bool isOversize()
    {
        return (play_time>90.0);
    }
};

int main()
{
    publication* pubarr[100];
    int i,n=0;
    char ch1,ch2;
    do
    {
        cout<<"Enter book or tape (b/t): ";
        cin>>ch1;
        if(ch1=='b')pubarr[n]=new book;
        else pubarr[n]=new tape;
        pubarr[n]->getdata();
        n++;
        cout<<"Enter another (y/n)? ";
        cin>>ch2;
    }while(ch2=='y');
    for(i=0;i<n;i++)
    {
        if(pubarr[i]->isOversize())cout<<"Oversize\n";
        pubarr[i]->putdata();
    }
    return 0;
}

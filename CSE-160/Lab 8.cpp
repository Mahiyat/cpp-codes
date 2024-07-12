#include<iostream>
using namespace std;

class Person
{
    string name;
    int NID;
public:
    void setData()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your NID number: ";
        cin>>NID;
    }
    void ShowData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"NID: "<<NID<<endl;
    }
};

class Student
{
    int roll,batchno;
public:
    void setData()
    {
        cout<<"Enter your roll number: ";
        cin>>roll;
        cout<<"Enter your batch number: ";
        cin>>batchno;
    }
    void ShowData()
    {
        cout<<"Roll: "<<roll<<endl;
        cout<<"Batch: "<<batchno<<endl;
    }
};

class Player:public Person, public Student
{
    int jerseyNo,Runs;
public:
    void setData()
    {
        Person::setData();
        Student::setData();
        cout<<"Enter your jersey number: ";
        cin>>jerseyNo;
        cout<<"Enter the number of runs: ";
        cin>>Runs;
    }
    void ShowData()
    {
        Person::ShowData();
        Student::ShowData();
        cout<<"Jersey Number: "<<jerseyNo<<endl;
        cout<<"Runs: "<<Runs<<endl;
    }
    void Setrun(int n)
    {
        Runs=n;
    }
    virtual void play()
    {

    }
    friend int friendGetRun(Player *);
};

class Bowler:public Player
{
public:
    void play()
    {
        Setrun(3);
    }
};

class Batsman:public Player
{
public:
    void play()
    {
        Setrun(5);
    }
};

int friendGetRun(Player *p)
{
    return p->Runs;
}

int main()
{
    int choice,Team1Sum=0,Team2Sum=0,i;
    Player *Team1[5], *Team2[5];
    cout<<"---Input of Team 1---\n";
    for(i=0;i<5;i++)
    {
        cout<<"Enter your choice:\n";
        cout<<"Press 1 for Batsman\n";
        cout<<"Press 2 for Bowler\n";
        cin>>choice;
        if(choice==1)Team1[i]=new Batsman;
        else Team1[i]=new Bowler;
    }
    cout<<"\n";
    cout<<"---Input of Team 2---\n";
    for(i=0;i<5;i++)
    {
        cout<<"Enter your choice:\n";
        cout<<"Press 1 for Batsman\n";
        cout<<"Press 2 for Bowler\n";
        cin>>choice;
        if(choice==1)Team2[i]=new Batsman;
        else Team2[i]=new Bowler;
    }
    cout<<"\n";
    for(i=0;i<5;i++)
    {
        Team1[i]->play();
        Team1Sum+=friendGetRun(Team1[i]);
    }
    for(i=0;i<5;i++)
    {
        Team2[i]->play();
        Team2Sum+=friendGetRun(Team2[i]);
    }
    cout<<"Total runs scored by Team 1 is "<<Team1Sum<<".\n";
    cout<<"Total runs scored by Team 2 is "<<Team2Sum<<".\n";
    if(Team1Sum>Team2Sum)cout<<"Team 1 won against Team 2 by "<<Team1Sum-Team2Sum<<" runs.\n";
    else if(Team1Sum<Team2Sum)cout<<"Team 2 won against Team 1 by "<<Team2Sum-Team1Sum<<" runs.\n";
    else cout<<"It's a draw!\n";
    return 0;
}


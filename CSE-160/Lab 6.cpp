#include<iostream>
#include<string>
using namespace std;

class Height
{
    double feet,inch;
public:
    Height():feet(0),inch(0){ }
    Height(double f, double i):feet(f),inch(i){ }
    void getdata()
    {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inch: ";
        cin>>inch;
    }
    void showdata()const
    {
        cout<<"Height: "<<feet<<"\' - "<<inch<<"\"\n";
    }
};

class Student
{
    string session,department,hall;
    int roll;
    Height h;
public:
    Student():session(""),department(""),hall(""),roll(0){ }
    Student(string s1, int r, string s2, string s3):session(s1),roll(r),department(s2),hall(s3){ }
    void getdata()
    {
        h.getdata();
        cin.ignore();
        cout<<"Enter the session: ";
        getline(cin,session);
        cout<<"Enter the roll: ";
        cin>>roll;
        cin.ignore();
        cout<<"Enter the department: ";
        getline(cin,department);
        cout<<"Enter the hall: ";
        getline(cin,hall);
    }
    void showdata()const
    {
        h.showdata();
        cout<<"Session: "<<session<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Hall: "<<hall<<endl;
    }
};

class Person
{
    string name;
    long long NID;
public:
    Person():name(""),NID(0){ }
    Person(string n, long long nd):name(n),NID(nd){ }
    void getdata()
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter NID number: ";
        cin>>NID;
    }
    void showdata()const
    {
        cout<<"Name: "<<name<<endl;
        cout<<"NID Number: "<<NID<<endl;
    }
};

class Player:public Student,Person
{
    int jerseyNO;
public:
    Player():jerseyNO(0),Student(),Person(){ }
    Player(int j, string n, long long nd):jerseyNO(j),Person(n,nd){ }
    void getdata()
    {
        Person::getdata();
        Student::getdata();
        cout<<"Enter the jersey number: ";
        cin>>jerseyNO;
    }
    void showdata()const
    {
        Person::showdata();
        Student::showdata();
        cout<<"Jersey Number: "<<jerseyNO<<endl;
    }
};

class Bowler:private Player
{
    int NoOfWicket;
public:
    Bowler():NoOfWicket(0),Player(){ }
    void getdata()
    {
        Player::getdata();
        cout<<"Enter the number of wickets: ";
        cin>>NoOfWicket;
    }
    void showdata()const
    {
        Player::showdata();
        cout<<"Number of Wickets: "<<NoOfWicket<<endl;
    }
};

class Batsman:private Player
{
    int RunScored;
public:
    Batsman():RunScored(0),Player(){ }
    void getdata()
    {
        Player::getdata();
        cout<<"Enter the number of runs scored: ";
        cin>>RunScored;
    }
    void showdata()const
    {
        Player::showdata();
        cout<<"Runs Scored: "<<RunScored<<endl;
    }
};

int main()
{
    Bowler Bo[2];
    Batsman Bt[3];
    int i;
    cout<<"Enter the data of 2 Bowlers\n\n";
    for(i=0;i<2;i++)
    {
        Bo[i].getdata();
        cout<<endl;
        cin.ignore();
    }
    cout<<"Enter the data of 3 Batsman\n\n";
    for(i=0;i<3;i++)
    {
        Bt[i].getdata();
        cout<<endl;
        cin.ignore();
    }
    cout<<"The data of 2 Bowlers:\n\n";
    for(i=0;i<2;i++)
    {
        Bo[i].showdata();
        cout<<endl;
    }
    cout<<"The data of 3 Batsman:\n\n";
    for(i=0;i<3;i++)
    {
        Bt[i].showdata();
        cout<<endl;
    }
    return 0;
}


#include<iostream>
#include<cstring>
#include<vector>
#include<map>
using namespace std;

class Event
{
protected:
    char event_name[105],event_type[105];
    int MaxNoofParticipants;
    double RewardAmount;
public:
    void setEventName(char n[])
    {
        strcpy(event_name,n);
    }
    void setEventType(char n[])
    {
        strcpy(event_type,n);
    }
    void setMaxNoofParticipants(int n)
    {
        MaxNoofParticipants=n;
    }
    void setRewardAmount(double d)
    {
        RewardAmount=d;
    }
    void setData(char n1[], char n2[], int n3, double n4)
    {
        setEventName(n1);
        setEventType(n2);
        setMaxNoofParticipants(n3);
        setRewardAmount(n4);
    }
    void displayData(int i)
    {
        cout<<"Event "<<i+1<<":\n";
        cout<<"Name: "<<event_name<<"\n";
        cout<<"Type: "<<event_type<<"\n";
        cout<<"Maximum Number of Participants: "<<MaxNoofParticipants<<"\n";
        cout<<"Reward Amount: "<<RewardAmount<<"\n";
        cout<<"\n";
    }
};

class Participant
{
protected:
    char Name[105],Pass[105];
public:
    void setName(char n[])
    {
        strcpy(Name,n);
    }
    void setPassword(char n[]);
    virtual void CreateAccount()=0;
    virtual void LoginAccount()=0;
};

class Faculty:public Participant
{
    char Position[105];
public:
    void setPosition(char n[])
    {
        strcpy(Position,n);
    }
    void CreateAccount()
    {
        char n[105];
        cout<<"Enter your information:\n";
        cout<<"Name: ";
        gets(n);
        setName(n);
        cout<<"Position: ";
        gets(n);
        setPosition(n);
        cout<<"Password: ";
        gets(n);
    }
    void LoginAccount()
    {
        char n1[105],n2[105];
        cout<<"Name: ";
        cout<<"Position: ";
    }
};

class Staff:public Participant
{
    char Position[105];
public:
    void setPosition(char n[])
    {
        strcpy(Position,n);
    }
    void CreateAccount()
    {
        char n[105];
        cout<<"Enter your information:\n";
        cout<<"Name: ";
        gets(n);
        setName(n);
        cout<<"Position: ";
        gets(n);
        setPosition(n);
    }
};

class Student:public Participant
{
    char Gender[10],Batch[105],Phone_number[105];
public:
    void setGender(char n[])
    {
        strcpy(Gender,n);
    }
    void setBatch(char n[])
    {
        strcpy(Batch,n);
    }
    void setPhonenumber(char n[])
    {
        strcpy(Phone_number,n);
    }
    void CreateAccount()
    {
        char n[105];
        cout<<"Enter your information:\n";
        cout<<"Name: ";
        gets(n);
        setName(n);
        cout<<"Gender: ";
        gets(n);
        setGender(n);
        cout<<"Batch: ";
        cin>>n;
        setBatch(n);
        cout<<"Phone Number: ";
        gets(n);
        setPhonenumber(n);
    }
};

struct EventINfo
{
    char EventName[105];
    char EventType[105];
    Participant* p[1005];
    int l;
};

class Admin
{
    char first_name[105],last_name[105],email[105],user_name[105],password[105];
    EventINfo ev[105];
    int el;
    //map<Event,Participant>mp;
public:
    Admin()
    {
        strcpy(first_name,"Mahiyat");
        strcpy(last_name,"Tanzim");
        strcpy(email,"jucse29.361@gmail.com");
        strcpy(user_name,"mthcse29");
        strcpy(password,"*Mth29361");
    }
    int Check(char n1[], char n2[])
    {
        if(strcmp(n1,user_name)!=0)
        {
            return 0;
        }
        else
        {
            if(strcmp(n2,password)!=0)
            {
                return 0;
            }
            else return 1;
        }
    }

    void AddEvent(Event ar[], int &n)
    {
        char n1[105],n2[105];
        int n3;
        double n4;
        cout<<"Enter the Event Information:\n";
        cout<<"Event Name: ";
        gets(n1);
        cout<<"Event Type: ";
        gets(n2);
        cout<<"Maximum Number of Participants: ";
        cin>>n3;
        cout<<"First Prize Money: ";
        cin>>n4;
        ar[n].setData(n1,n2,n3,n4);
        n++;
    }
    void EditEventInfo(Event ar[],int n)
    {
        char n1[105],n2[105];
        int n3;
        double n4;
        cout<<"Enter which information to edit: ";
        cout<<"Name\n";
        cout<<"Type\n";
        cout<<"Max Participants\n";
        cout<<"Prize\n";
        gets(n1);
        cout<<"\n";
        if(strcmp(n1,"Name")==0)
        {
            cout<<"Enter the changed event name: ";
            gets(n2);
            ar[n].setEventName(n2);
        }
        else if(strcmp(n1,"Type")==0)
        {
            cout<<"Enter the changed event type: ";
            gets(n2);
            ar[n].setEventType(n2);
        }
        else if(strcmp(n1,"Max Participants")==0)
        {
            cout<<"Enter the changed maximum number of participants: ";
            cin>>n3;
            ar[n].setMaxNoofParticipants(n3);
        }
        else if(strcmp(n1,"Prize")==0)
        {
            cout<<"Enter the changed prize amount: ";
            cin>>n4;
            ar[n].setRewardAmount(n4);
        }
    }
};

void LoginUI();
void AdminUI(Event arr[], int &ls);
void ParticipantUI();

void AdminUI(Event eve[], int &ln)
{
    Admin ad;
    int in;
    cout<<"Enter an option:\n";
    cout<<"Option 1: Add/Edit Event\n";
    cout<<"Option 2: Check the list of paticipants for an event\n";
    cout<<"Option 3: Return to Previous Interface\n";
    cin>>in;
    getchar();
    cout<<"\n\n";
//    Event eve[105];
//    int ln=0;
    if(in==1)
    {
        int in1;
        cout<<"Enter an option:\n";
        cout<<"1 for Add Event\n";
        cout<<"2 for Edit Event\n";
        cin>>in1;
        cout<<"\n";
        getchar();
        if(in1==1)
        {
            ad.AddEvent(eve,ln);
            for(int i=0;i<ln;i++)
            {
                eve[i].displayData(i);
            }
            AdminUI(eve,ln);
        }
        else if (in1==2)
        {
            for(int i=0;i<ln;i++)
            {
                eve[i].displayData(i);
            }
            int in2;
            cout<<"Enter the event number to edit: ";
            cin>>in2;
            getchar();
            ad.EditEventInfo(eve,in2-1);
            for(int i=0;i<ln;i++)
            {
                eve[i].displayData(i);
            }
            AdminUI(eve,ln);
        }
        else return;
    }
}

void ParticipantUI()
{
    int in;
    cout<<"1. Login\n";
    cout<<"2. Register\n";
    cin>>in;
}

void LoginUI()
{
    Event eve[105];
    int ln=0;
    int in;
    cout<<"1. Login as Admin\n";
    cout<<"2. Login/Register as Participant\n";
    cout<<"3. Exit\n";
    cin>>in;
    cout<<"\n";
    if(in==1)
    {
        getchar();
        Admin ad;
        char n1[105],n2[105];
        cout<<"Username: ";
        gets(n1);
        cout<<"Password: ";
        gets(n2);
        int ch;
        ch=ad.Check(n1,n2);
        if(ch)
        {
            cout<<"\n";
            AdminUI(eve,ln);
        }
        else
        {
            cout<<"Incorrect Login Credential!\n\n";
            LoginUI();
        }
    }
    else if(in==2)
    {
        ParticipantUI();
    }
    else return;
}

int main()
{
    LoginUI();
    return 0;
}

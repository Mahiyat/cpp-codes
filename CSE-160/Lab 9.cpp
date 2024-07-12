#include<iostream>
#include<fstream>
using namespace std;

class Account
{
    string Acc_number,name,phone,NID;
    double balance;
public:
    Account():Acc_number("\0"),name("\0"),phone("\0"),NID("\0"),balance(0.0)
    {

    }
    void input()
    {
        cout<<"Enter your account number: ";
        cin>>Acc_number;
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your current balance: ";
        cin>>balance;
        cout<<"Enter your phone number: ";
        cin>>phone;
        cout<<"Enter your NID number: ";
        cin>>NID;
    }
    void display()
    {
        cout<<"Account Number: "<<Acc_number<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Current Balance: "<<balance<<endl;
        cout<<"Phone: "<<phone<<endl;
        cout<<"NID Number: "<<NID<<endl;
    }
    void deposit(double n)
    {
        balance+=n;
    }
    void withdraw(double n)
    {
        balance-=n;
    }
    double getCurBalance()
    {
        return balance;
    }
    string getAcc_number()
    {
        return Acc_number;
    }
};

int main()
{
    Account *p[100];
    ifstream infile;
    infile.open("bankDB.dat",ios::binary);
    //infile.open("bankDB.dat",ios::out|ios::in|ios::binary);
    infile.seekg(0,ios::end);
    int n=(infile.tellg())/sizeof(Account);
    infile.seekg(0);
    //cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        p[i]=new Account;
        infile.read(reinterpret_cast<char *>(p[i]),sizeof(*p[i]));
    }
    infile.close();
    for(int i=0;i<n;i++)
    {
        p[i]->display();
    }
    int choice;
    char ch;
    do
    {
        cout<<"---Bank Console---\n";
        cout<<"1 to create account\n";
        cout<<"2 to display information\n";
        cout<<"3 to deposit money\n";
        cout<<"4 to withdraw money\n";
        cout<<"5 to check current balance\n";
        cin>>choice;
        if(choice==1)
        {
            p[n]=new Account;
            p[n]->input();
            n++;
        }
        else if(choice==2)
        {
            string s,tmp;
            cout<<"Enter your account number: ";
            cin>>s;
            int ind=-1;
            for(int i=0;i<n;i++)
            {
                //cout<<i<<endl;
                tmp=p[i]->getAcc_number();
                //cout<<tmp<<endl;
                if(s==tmp)
                {
                    ind=i;
                    break;
                }
            }
            if(ind!=-1)p[ind]->display();
            else cout<<"Account does not exist.\n";
        }
        else if(choice==3)
        {
            string s,tmp;
            cout<<"Enter your account number: ";
            cin>>s;
            int ind=-1;
            for(int i=0;i<n;i++)
            {
                tmp=p[i]->getAcc_number();
                if(s==tmp)
                {
                    ind=i;
                    break;
                }
            }
            if(ind!=-1)
            {
                double d;
                cout<<"Enter the amount to be deposited: ";
                cin>>d;
                p[ind]->deposit(d);
            }
            else cout<<"Account does not exist.\n";
        }
        else if(choice==4)
        {
            string s,tmp;
            cout<<"Enter your account number: ";
            cin>>s;
            int ind=-1;
            for(int i=0;i<n;i++)
            {
                tmp=p[i]->getAcc_number();
                if(s==tmp)
                {
                    ind=i;
                    break;
                }
            }
            if(ind!=-1)
            {
                double d;
                cout<<"Enter the amount to be withdrawn: ";
                cin>>d;
                p[ind]->withdraw(d);
            }
            else cout<<"Account does not exist.\n";
        }
        else if(choice==5)
        {
            string s,tmp;
            cout<<"Enter your account number: ";
            cin>>s;
            int ind=-1;
            for(int i=0;i<n;i++)
            {
                tmp=p[i]->getAcc_number();
                if(s==tmp)
                {
                    ind=i;
                    break;
                }
            }
            if(ind!=-1)
            {
                double d;
                d=p[ind]->getCurBalance();
                cout<<"Your current balance is "<<d<<endl;
            }
            else cout<<"Account does not exist.\n";
        }
        cout<<"Do you want to perform the operation again (y/n): ";
        cin>>ch;
    }while(ch!='n');
    ofstream outfile("bankDB.dat",ios::binary);
    //infile.seekg(0);
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        outfile.write(reinterpret_cast<char *>(p[i]),sizeof(*p[i]));
        //p[i]->display();
    }
//    infile.seekg(0,ios::end);
//    n=(infile.tellg())/sizeof(Account);
//    cout<<n<<endl;
    outfile.close();
    return 0;
}

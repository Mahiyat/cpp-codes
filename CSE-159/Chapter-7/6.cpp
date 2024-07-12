#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int jack=11;
const int queen=12;
const int king=13;
const int ace=14;

enum Suit{clubs,diamonds,hearts,spades};

class card
{
    int number;
    Suit suit;
public:
    card()
    { }
    void Set(int n, Suit s)
    {
        suit=s;
        number=n;
    }
    void display();
};

void card::display()
{
    if(number>=2&&number<=10)
    {
        cout<<number;
    }
    else
    {
        switch(number)
        {
        case jack:
            cout<<"J";
            break;
        case queen:
            cout<<"Q";
            break;
        case king:
            cout<<"K";
            break;
        case ace:
            cout<<"A";
            break;
        }
    }
    switch(suit)
    {
    case clubs:
        cout<<static_cast<char>(5);
        break;
    case diamonds:
        cout<<static_cast<char>(4);
        break;
    case hearts:
        cout<<static_cast<char>(3);
        break;
    case spades:
        cout<<static_cast<char>(6);
        break;
    }
}

int main()
{
    card deck[52];
    int i,j=1;
    cout<<endl;
    for(i=0;i<52;i++)
    {
        int num=(i%13)+2;
        Suit s=Suit (i/13);
        deck[i].Set(num,s);
    }
    cout<<"\nOrdered Deck:\n";
    for(i=0;i<52;i++)
    {
        deck[i].display();
        cout<<" ";
        if(!((i+1)%13))cout<<endl;
    }
    srand(time(NULL));
    for(i=0;i<52;i++)
    {
        int k=rand()%52;
        card tmp=deck[i];
        deck[i]=deck[k];
        deck[k]=tmp;
    }
    cout<<"\nShuffled Deck:\n";
    for(i=0;i<52;i++)
    {
        if((i+1)%13==1)
        {
            cout<<"Cards in player "<<j<<"\'s hand are:\n";
            j++;
        }
        deck[i].display();
        cout<<" ";
        if(!((i+1)%13))cout<<endl;
    }
    return 0;
}


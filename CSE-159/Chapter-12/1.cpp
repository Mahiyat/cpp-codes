#include<iostream>
#include<fstream>
using namespace std;

class Distance
{
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0.0){}
    Distance(int f, float i):feet(f),inches(i){}
    void getdist()
    {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
    }
    void showdist()
    {
        cout<<feet<<"\'-"<<inches<<"\"\n";
    }
};

int main()
{
    Distance dist;
    char ch;
    fstream file;
    file.open("Dist.DAT",ios::app | ios::out | ios::in | ios::binary);
    do
    {
        cout<<"Enter a distance:\n";
        dist.getdist();
        file.write(reinterpret_cast<char*>(&dist),sizeof(Distance));
        cout<<"Enter another distance (y/n)? ";
        cin>>ch;
    }while(ch=='y');
    cout<<"\n";
    file.seekg(0);
    file.read(reinterpret_cast<char*>(&dist),sizeof(Distance));
    while(!file.eof())
    {
        cout<<"Distance: ";
        dist.showdist();
        file.read(reinterpret_cast<char*>(&dist),sizeof(Distance));
    }
    cout<<"\n";
    return 0;
}

#include<iostream>
using namespace std;

class date
{
    int month,day,year;
    char ch;
public:
    void getdate()
    {
        cout<<"Enter the date in the format MM/DD/YYYY: ";
        cin>>month>>ch>>day>>ch>>year;
    }
    void showdate()
    {
        cout<<"The date is "<<month<<"/"<<day<<"/"<<year<<endl;
    }
};

int main()
{
    date d;
    d.getdate();
    d.showdate();
    return 0;
}

#include<iostream>
#include<fstream>
#include<process.h>
using namespace std;

int main(int argc,char* argv[])
{
    if(argc!=2)
    {
        cerr<<"\nFormat: filename\n";
        exit(-1);
    }
    ifstream infile;
    infile.open(argv[1]);
    if(!infile)
    {
        cerr<<"\nCannot open "<<argv[1];
        exit(-1);
    }
    infile.seekg(0,ios::end);
    cout<<"Size of "<<argv[1]<<" is "<<infile.tellg();
    cout<<endl;
    return 0;
}

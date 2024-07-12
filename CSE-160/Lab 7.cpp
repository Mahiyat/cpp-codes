#include<iostream>
using namespace std;

class Electronic_Device
{
public:
    string model_name,model_no,serial_no,software_version,capacity;
    Electronic_Device() {}
    ~Electronic_Device() {}
    void set_model_name(string s)
    {
        model_name=s;
    }
    void set_model_no(string s)
    {
        model_no=s;
    }
    void set_serial_no(string s)
    {
        serial_no=s;
    }
    void set_software_version(string s)
    {
        software_version=s;
    }
    void set_capacity(string c)
    {
        capacity=c;
    }
    string get_model_name()
    {
        return model_name;
    }
    string get_model_no()
    {
        return model_no;
    }
    string get_serial_no()
    {
        return serial_no;
    }
    string get_software_version()
    {
        return software_version;
    }
    string get_capacity()
    {
        return capacity;
    }
};

int main()
{
    Electronic_Device mobile1;
    mobile1.set_model_name("iPhone SE");
    mobile1.set_model_no("MLMH2LL/A");
    mobile1.set_serial_no("DX3S8A1HH2XN");
    mobile1.set_software_version("iOS 15.1");
    mobile1.set_capacity("64 GB");
    cout<<"Specification of device "<<1<<":\n";
    cout<<"Model Name: "<<mobile1.get_model_name()<<endl;
    cout<<"Model Number: "<<mobile1.get_model_no()<<endl;
    cout<<"Serial Number: "<<mobile1.get_serial_no()<<endl;
    cout<<"Software Version: "<<mobile1.get_software_version()<<endl;
    cout<<"Capacity: "<<mobile1.get_capacity()<<endl;
    return 0;
}


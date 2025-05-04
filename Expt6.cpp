#include <iostream>
using namespace std;

class Basic_info
{
public:
    char name[30];
    int empid;
public:
    void getbasic_info(void)
    {
        cout<<"Enter employee id:"<<endl;
        cin>>empid;
        cout<<"Enter employee name:"<<endl;
        cin>>name;
    }
};

class Dept_info
{
public:
    char dept_name[20];
public:
    void getdept_info(void)
    {
        cout<<"Enter Dept name:"<<endl;
        cin>>dept_name;
    }
};

class Employee:private
Basic_info,private Dept_info
{
public:
    void getEmployeeinfo(void)
    {
        cout<<"Enter employee basic info"<<endl;
        getbasic_info();
        cout<<"Enter employee dept info"<<endl;
        getdept_info();
    }
    void display_info()
    {
        cout<<".................."<<endl;
        cout<<"Employee id;"<<empid<<endl;
        cout<<"Employee name:"<<name<<endl;
        cout<<"Dept name:"<<dept_name<<endl;
        cout<<".....................";
    }
};

int main()
{
    Employee e;
    e.getEmployeeinfo();
    cout<<"you have enter the following info"<<endl;
    e.display_info();
    return 0;
}


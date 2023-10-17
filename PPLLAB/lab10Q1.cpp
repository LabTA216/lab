#include<bits/stdc++.h>
using namespace std;

class Employee{
    int salary;
    int hours;
    public:
    void AddInfo(){
        cout<<"\nEnter salary ";
        cin>>salary;
        cout<<"\nEnter hours ";
        cin>>hours;
    }
    void AddSal(){
        if (salary<500)
        {
            salary+=10;
            // display();
        }
        
    }
    void AddWork(){
        if (hours>6)
        {
            salary+=6;
            // display();
        }
    }
    void display(){
        cout<<"\nsalary is "<<salary;
        // cout<<"\nhours are "<<hours;
    }
    
};

int main()
{
    cout<<"Akshat Jain\n";
    cout<<"2211201215\n";
    Employee a;   
    a.AddInfo();
    a.AddSal();
    a.AddWork();
    a.display();
    return 0;
}
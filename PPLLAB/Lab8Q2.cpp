#include<bits/stdc++.h>
using namespace std;

class Chronology{
    string s;
    public:
    Chronology(string k){
        s=k;
        cout<<"\nEntered string "<<k;
    }
    void cSort(){
        
        sort(s.begin(),s.end());
        
        cout<<"\nSorted string "<<s;
    }
};

int main()
{
    string s="Rahul";
    Chronology c1(s);
    c1.cSort();  

    return 0;
}
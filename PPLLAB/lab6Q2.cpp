#include<bits/stdc++.h>
using namespace std;
float S_intrest(int p,float r,int t){
    cout<<"By Default Rate of 0.075 "<<p*0.075*t;
    return (p*r*t)/100.0;
}
int main(int argc, char const *argv[])
{
    cout<<"enter the principle rate and time ";
    int n,r,t;
    cin >> n >> r >> t ;
    cout<<"\nBy given rate "<<S_intrest(n,r,t);
    return 0;
}

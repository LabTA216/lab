#include<bits/stdc++.h>
using namespace std;
float s_Root(int n,int i){
    
    return pow(n,0.5);
}
int main(int argc, char const *argv[])
{
    cout<<"enter the number ";
    int n;
    cin >> n;
    cout<<s_Root(n,5);
    return 0;
}

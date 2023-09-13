#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev=0;
    for (int i = 0; n>0; i++)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    
    return rev;
}
int main(int argc, char const *argv[])
{
    cout<<"enter the number ";
    int n;
    cin >> n ;
    cout<<reverse(n);
    return 0;
}

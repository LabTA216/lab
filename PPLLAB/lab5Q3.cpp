#include<bits/stdc++.h>
using namespace std;
int power(int n,int i){
    
    if (i==0)
    {
        return 1;
    }
    
    return n*power(n,i-1);
}
int main(int argc, char const *argv[])
{
    cout<<"enter the number and pow ";
    int n,i;
    cin >> n >> i ;
    cout<<power(n,i);
    return 0;
}

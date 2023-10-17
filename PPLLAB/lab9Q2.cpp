#include<bits/stdc++.h>
using namespace std;

class checkPrime{
    public:
    checkPrime(){
        int n;
        cout<<"Enter the number\n";
        cin>>n;
       cout<< (Prime(n) ? "Prime":"Not Prime"); 
    }
    checkPrime(int n){
        cout<< (Prime(n) ? "Prime":"Not Prime");
    }
    bool Prime(int n){
        if((n%2==0 && n>2) || n<=1){return 0;}
        for (int i = 2; i < n; i++)
        {
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
};

int main()
{
    cout<<"Akshat Jain\n";
    cout<<"2211201215\n";
    checkPrime a;   

    return 0;
}
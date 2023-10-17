#include<bits/stdc++.h>
using namespace std;

class checkSunny{
    public:
    int n;
    checkSunny(){
        cout<<"Enter the number\n";
        cin>>n;

    }
    ~checkSunny(){
        cout<< (floor(sqrt(n+1)==ceil(sqrt(n+1))) ? "Sunny":"No"); 
    }
};

int main()
{
    cout<<"Akshat Jain\n";
    cout<<"2211201215\n";
    checkSunny a;   

    return 0;
}
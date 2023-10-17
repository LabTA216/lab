#include<bits/stdc++.h>
using namespace std;

class factorialCalc{
    int n;
    public:
    factorialCalc(int x){
      n=x;  
        cout<<n<<endl;
    }
    factorialCalc(factorialCalc &d){
        n=d.n;
        cout<<"Copied no "<<n<<endl;
        cout<<factorial();
    }
    int factorial(){
        if(n>=0){
            int fac=1;
            for (int i = 1; i <= n; i++)
            {
                fac*=i;
            }
            return fac;
        }
        return -1;
    }
};

int main()
{
    cout<<"Akshat Jain\n";
    cout<<"2211201215\n";
    factorialCalc a(5);   
    factorialCalc B(a);   
    return 0;
}
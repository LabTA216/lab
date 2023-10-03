#include<bits/stdc++.h>
using namespace std;

class Calculation{
    int a,b;
    public:
    Calculation(int x,int y)
    {
        a=x;
        b=y;
        cout<<"\nValues of a and b are "<<x <<" and "<< y;
    }
    void classSum(){
        cout<<"\nSum is "<<a+b;
    }
    void classSub(){
        cout<<"\nDifference is is "<<a-b;
    }
    void classMul(){
        cout<<"\nMultiplication is "<<a*b;
    }
    void allCalc(){
        classSum();
        classSub();
        classMul();
    }
};

int main()
{
    Calculation a1(1,4);
    a1.allCalc();
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void Is_Perfect(int n){
        for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i/2; j++)
        {
            if (i%j==0)
            {
                sum+=j;
            }
            
        }
        if (sum==i)
        {
            cout<<i<<" ";
        }
        
        
    }
    
}
int main(int argc, char const *argv[])
{
    Is_Perfect(1000);
    return 0;
}

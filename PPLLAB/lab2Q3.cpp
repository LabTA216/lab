#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Akshat Jain\n";
    cout<<"2211201215\n";
    cin>>n;
    char a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"\nUpper triangular matrix is \n";
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            if(i<=j){
            cout<<a[i][j]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}

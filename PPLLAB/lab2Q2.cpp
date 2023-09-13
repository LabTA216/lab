#include<iostream>
using namespace std;
void sortptr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(*(arr+i) < *(arr+j)){
                swap(*(arr+i) , *(arr+j));
            }
        }
        
        
    }
    
}
int main(int argc, char const *argv[])
{
    int n,count=1;
    cout<<"Akshat Jain\n";
    cout<<"2211201215\n";
    cin>>n;
    int a[n];
 
     for (int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    sortptr(a,n);
    for (int i = 1; i < n; i++)
    {
        if (a[i]==a[i-1])
        {
            count++;
        }
        else{
            cout<<"The frequency of "<<a[i-1]<<" is "<<count<<endl;
            count=1;
        }
        
    }
    cout<<"The frequency of "<<a[n-1]<<" is "<<count<<endl;
    
    return 0;
}

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
    int n;
    cout<<"Akshat Jain\n";
    cout<<"2211201215\n";
    cin>>n;
    int a[n];
 
     for (int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    sortptr(a,n);
    int max=a[n-1];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i]+a[j] < max)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
          }
            
    }
        
    
    

    return 0;
}


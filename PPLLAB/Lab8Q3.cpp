#include<bits/stdc++.h>
using namespace std;

class arrSort{
    int s;
    int *a;
    public:
    arrSort(int k){
        s=k;
        a[k];
        cout<<"\nEnter the elements ";
        getArray();
    }
    void getArray(){
        int arr[s];
        for (int i = 0; i < s; i++)
        {
            cin>>arr[i];
        }
        a=arr;
        sort(a,a+s);
        
    }
    void aSort(){
        
        
        cout<<"\nSorted array ";
        for (int i = 0; i < s; i++)
        {
           cout<<*(a+i)<<" ";
        }
    
        
    }
};

int main()
{

    arrSort c1(8);
    c1.aSort();  

    return 0;
}
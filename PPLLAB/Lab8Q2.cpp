#include<bits/stdc++.h>
using namespace std;

class ChronologySamajhiye{
    string s;
    public:
    ChronologySamajhiye(string k){
        s=k;
        cout<<"\nEntered string "<<k;
    }
    void ModiSort(){
        string k=s;
        sort(k.begin(),k.end());
        s=k;
        cout<<"\nSorted string "<<s;
    }
};

int main()
{

    ChronologySamajhiye c1("Rahul");
    c1.ModiSort();  

    return 0;
}
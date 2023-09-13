#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Akshat Jain\n";
    cout<<"2211201215\n";
    cin>>n;
    char a[n];
    int count=0;
    cout<<"Enter "<<n<<" characters of string ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||  a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' )
        {
            count++;
        }
        

    }
    cout<<"\nThe number of vowels are "<<count;
    cout<<"\nThe number of consonants are "<<n-count;
    
    return 0;
}

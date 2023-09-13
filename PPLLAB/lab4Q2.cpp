#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Sch No 2211201215\n";
    cout<<"Name Akshat Jain\n";
    string s;
    getline(cin,s);
    int i=0,start=0,end,count=0;
    for(i=0;s[i]!='\0';i++ )
    {
        if(s[i]== ' ' || s[i+1]=='\0' ){
            if(s[i]== ' '){
            end=i;
                
            }
            else{
                end=i+1;
            }
            
            int flag=1;
            for(int j=start, k=0;j<(end+start)/2;j++,k++){
                swap(s[j],s[end-k-1]);
                 
                
            }
           start=i+1;
        }
        
    }
        cout<<"\n"<<s;

    return 0;
}
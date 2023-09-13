#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int arr[n],ans;
    for (int i = 0; i < n; i++)
    {
        arr[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d",&t);
        arr[t-1]++;
        if(arr[t]==2){
            ans=t;
        }
    }
    printf("\nRepeted Element is %d",ans);
    return 0;
}

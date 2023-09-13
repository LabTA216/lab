#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,ans=0;
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter n numbers between 0 and %d only one should be repeated ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        ans=ans^i;
    }
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    printf("Repeated number is %d ",ans);
    return 0;
}

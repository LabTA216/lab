#include<stdio.h>
int sumarr(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return arr[n-1]+sumarr(arr,n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d entries for array ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nSum is %d",sumarr(arr,n));
    return 0;
}

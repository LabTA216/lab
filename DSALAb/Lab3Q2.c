#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,m,min;
    printf("Enter both numbers ");
    scanf("%d %d",&n,&m);
    min=fmin(n,m);
    for (int i = min; i > 0; i--)
    {
        if(n%i==0 && m%i==0){
            printf("The greatest common divisor is %d",i);
            break;
        }
    }
    
    return 0;
}

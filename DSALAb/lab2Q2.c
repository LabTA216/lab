#include<stdio.h>
int main(){
    int m,n,p;
    printf("Enter m ");
    scanf("%d",&m);
    printf("Enter n ");
    scanf("%d",&n);
    printf("Enter p ");
    scanf("%d",&p);
    int a[m][n],b[n][p],product[m][p],t;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a%d%d ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
             printf("Enter b%d%d ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }  
    }
     printf("Product is\n");
     for (int i = 0; i < m; i++)
    {
    
     for (int k = 0; k < m; k++)
     { 
         t=0;
        for (int j = 0; j < p; j++)
      {
         t=t+a[i][j]*b[j][k];
      }
     printf("%d ",t);
     }
    printf("\n");
     }  
}

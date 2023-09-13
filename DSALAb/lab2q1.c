#include<stdio.h>
int main(){
	int a[100],b[100],n,m,count1[10000]={0},count2[10000]={0};
	printf("No. of entries in 1st array ");
	scanf("%d",&n);
	printf("input first array elements ");
	for (int i = 0; i < n; i++)
	 {
		scanf("%d",&a[i]);
		count1[a[i]]++;
	}
	printf("No. of entries in 2nd array ");
	scanf("%d",&m);
	printf("input second array elements ");
	for (int i = 0; i < m; i++)
	{
	scanf("%d",&b[i]);
	count2[b[i]]++;
	}
	printf("\nUnion is ");
for (int i = 0; i < 1000; i++){
	for (int j = 0; j < ((count1[i]>count2[i])?count1[i]:count2[i]); j++){
		 printf("%d ",i);
	}
	}
	printf("\nIntersection is ");
for (int i = 0; i < 1000; i++){
 for (int j = 0; j < ((count1[i]<count2[i])?count1[i]:count2[i]); j++){
		 printf("%d ",i);
		} 
	}
	return 0;
}

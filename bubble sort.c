#include<stdio.h>
int main()
{ int t,n,a[100];
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("eneter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				//awapping
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
		
		
	}
	printf("the sorted array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

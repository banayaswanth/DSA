// to insert an element in an array
#include<stdio.h>
int main()
{
	int arr[100],i,n,pos,num;
	printf("ENter the size : ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("elements of array :\n");
     	for(i=0;i<n;i++)
	{
		printf("%d   \n",arr[i]);
	}
	printf("Enter the element to insert: \n");
	scanf("%d",&num);
	printf("Enter the position : \n");
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
	{
		arr[i]=arr[i-1];
				
	}
	arr[pos-1]=num;

	
	printf("after insertion :\n");
		for(i=0;i<n+1;i++)
	{
		printf("%d  \n",arr[i]);
	}
	
	
}

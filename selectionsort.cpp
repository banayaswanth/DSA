#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
	int min;
	for(int i=0;i<n;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}
		}
		swap(arr[i],arr[min]);
	}
}
int main()
{
	int arr[] = {12,45,1,34,98,67};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

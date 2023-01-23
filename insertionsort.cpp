#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int val = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>val)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1] = val;
	}
}
int main()
{
	int arr[] = {12,56,3,89,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
	int n1 = m-l+1, n2 = r-m;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++)
	{
		left[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++)
	{
		right[i] = arr[m+i+1];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			arr[k++] = left[i++];
		}
		else
		{
			arr[k++] = right[j++];
		}
		
	}
	while(i<n1)
	{
		arr[k++]  = left[i++];
	}
	while(j<n2)
	{
		arr[k++] = right[j++];
	}
}
void mergesort(int arr[],int l,int r)
{
	if(r>l)
	{
		int m = l + (r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main()
{
	int arr[] = {12,56,3,898,11,21};
	int l=0;
	int n = sizeof(arr)/sizeof(arr[0]);
	int r = n-1;
	mergesort(arr,l,r);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

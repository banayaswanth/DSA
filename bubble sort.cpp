#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
	bool swapp;
	for(int i=0;i<n;i++)
	{
		swapp = false;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				swapp = true;
			}
		}
		if(swapp==false)
		{
			break;
		}
	}
}
int main()
{
	int arr[100],n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubblesort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

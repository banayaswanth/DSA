#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[] = {45,23,1,98,21,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"ascending order "<<endl;
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<"\n";
	cout<<"descending order"<<endl;;
	sort(arr,arr+n,greater<int>());
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

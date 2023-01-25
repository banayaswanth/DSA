#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v={12,56,1,98,10,3};
	sort(v.begin(),v.end());
	cout<<"ascending order "<<endl;
	for(int x:v)
	{
		cout<<x<<" ";
	}cout<<"\n";
	cout<<"desceding order"<<endl;
	sort(v.begin(),v.end(),greater<int>());
	for(int x:v)
	{
	    cout<<x<<" ";
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int min=arr[0];
	int count=0;
	for(int i=0;i<n;i++)
	
	{
		if(min>=arr[i])
		{
			min=arr[i];
			count++;
		}
	}
	cout<<"Discount is:"<<min;
	cout<<"Count is:"<<count;
	
}

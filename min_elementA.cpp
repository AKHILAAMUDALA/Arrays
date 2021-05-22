#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//length of the array
	cin>>n;//read the length
	int arr[n];//declare the array of n length
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//logic to find min element
	int max=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<max)
		{
			max=arr[i];
		}
	}
	cout<<max;
	
}

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
	//logic to find max element
	int max=INT_MIN;//int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<max;
	
}

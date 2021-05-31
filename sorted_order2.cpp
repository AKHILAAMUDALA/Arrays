//SORTED ORDER 2ND METHOD
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,f=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i+1]<arr[i])
		{
			f=1;
			break;
		}
	}
	if(f==0)
		cout<<"Sorted Order";
	else
		cout<<"Not in Sorted Order";
}

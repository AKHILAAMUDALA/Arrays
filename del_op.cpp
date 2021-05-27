#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=-1;
	cin>>n;
	int arr[n];//array size of n
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int val;
	cin>>val;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			for(int j=i;j<n-1;j++)
			{
				arr[j]=arr[j+1];
			}
			flag=0;
			n--;
			break;
		}
	}
	if(flag==-1)
	{
		cout<<"not found";
	}
	else
	{
		{
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
	
		}	
	}
	
}

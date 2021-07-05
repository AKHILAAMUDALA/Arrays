#include<iostream>
using namespace std;
int equilibriumPoint(int n,int a[])
{
	if(n==1)
	{
		return 1;
	}
	for(int i=1;i<n-1;i++)
	{
		int leftsum=0,rightsum=0;
		for(int j=0;j<i;j++)
		{
			leftsum+=a[j];
		}
		for(int k=i+1;k<n;k++)
		{
			rightsum=a[k];
		}
		if(leftsum==rightsum)
		{
			return i+1;
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<equilibriumPoint(n,a);
	return 0;
}

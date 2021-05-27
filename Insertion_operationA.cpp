#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cap;
	cin>>cap;//5
	int a[cap];//a[5];
	int n;
	cin>>n;//3
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//{10,20,30,__,__}
	int pos,x;
	cin>>pos>>x;//2,40
	if(n==cap)
	{
		cout<<"array has no space to insert"<<endl;
	}
	else
	{
		int ind=pos-1;
		for(int i=n-1;i>=ind;i--)
		{
			a[i+1]=a[i];
		}
		//for(int i=0;i<=n;i++) or
		a[ind]=x;
		n++;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}

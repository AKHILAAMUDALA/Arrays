//BUBBLE SORT OPTIMIZED CODE USING ARRAYS
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;//5
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];//2,1,3,4,6
	}
	//bubble sort  logic
	int swaped=0;
	for(int i=0;i<n-1;i++)//i=0 i=1
	{
		for(int j=0;j<n-i-1;j++)// 0 1 2 3 j=0,j=1,j=2,j=3
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				swaped=1;
			}
		}
		if(swaped==0)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

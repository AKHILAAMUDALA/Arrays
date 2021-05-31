//MAX_ELEMENT OF AN ARRAY 1ST METHOD(2ND LARGEST)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int max1=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max1)
		{
			max1=arr[i];
		}
	}
	int max2=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=max1)
		{
			if(max2==-1)
			{
				max2=arr[i];
			}
			else
			{
				if(arr[i]>max2);
				{
					max2=arr[i];
				}
			}
		}
	}
	if(max2==-1)
		cout<<"same values"<<max1;
	else
		cout<<"2nd Largest Element is"<<max2;
}

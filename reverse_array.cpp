//REVERSE_ARRAY
#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int l=0,r=n-1,temp;
	while(l<r)
	{
		temp=arr[l];
		arr[l]=arr[r];
		arr[r]=temp;
		l++;
		r--;
	}
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	
}

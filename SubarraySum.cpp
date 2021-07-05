#include <iostream> 
using namespace std;
int SubArraySums(int n,int k,int a[])
 { 
 	int count=0;
	for(int i=0;i<n;i++)//start point of subarray 
	{ 
		for(int j=i;j<n;j++)//end point of subarray
		{ 
			int sum=0;
			for(int k=i;k<=j;k++)//to get all the elements b/w start and end 
			{ 
				sum+=a[k];
			} 
			if(sum==k)
			{ 
				count++;
			}
		}
	}
	return count;
}
int main() 
{
	int n,k; 
	cin>>n>>k;
	int a[n]; 
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
	}
	cout<<SubArraySums(n,k,a); 
	return 0;
}

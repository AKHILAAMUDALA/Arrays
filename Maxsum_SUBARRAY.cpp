#include <iostream>
using namespace std;
int MaxsumSubarray(int n,int a[])
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)//0
    {
        for(int j=i;j<n;j++)//j-->0
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
                maxi=max(maxi,sum);
            }
        }
    }
    return maxi;
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	cout<<MaxsumSubarray(n,a);
	return 0;
}

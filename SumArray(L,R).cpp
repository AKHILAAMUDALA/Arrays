#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int Q;
	cin>>Q;
	while(Q--)
	{
		int L,R;
		cin>>L>>R;
		int sum=0;
		for(int i=L;i<=R;i++)
		{
			sum+=a[i];
			
		}
		cout<<sum<<endl;
	}
	return 0;
}

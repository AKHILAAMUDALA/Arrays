//SORT FUNCTION  IN ARRAYS
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={2,6,4,3,1};
	//SORT FUNCTION
	sort(a,a+5);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";

	}
	return 0;
}
//USING VECTORS
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={2,6,4,3,1};
	//SORT FUNCTION
	sort(a,a+5);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";

	}
	cout<<"\n";
	vector<int>ve={2,6,4,3,1};
	sort(ve.begin(),ve.end());
	for(auto it:ve)
	{
		cout<<it<<" ";
	}
	return 0;
*/

#include <iostream> 
#include<bits/stdc++.h>
 using namespace std;
  int SubArraySums(int n,int k,int a[])
   { 
   int count=0;
	map<int,int>dic;
	dic.insert({0,1}); 
	int presum=0;
	for(int i=0;i<n;i++)//4 -2 -1 1 -2 3 -3
	{
	    presum+=a[i];//0
		 if(dic.find(presum-k)!=dic.end())//0-0=0
		  { 
		  count+=dic[presum-k];//dic[0]
		  }
		    dic[presum]+=1;//{0:2,4:1,2:2,1:1,3:1
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

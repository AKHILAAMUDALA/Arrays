#include <iostream>
using namespace std;
string s;
int n;
void PrintPermutations(string ss,int vis[])
{
    if(s.size()==ss.size())
    {
        cout<<ss<<"\n";
        return;
    }
    for(int i=0;i<n;i++)//0 1 2 0--> a 1-->b 2-->c
    {
        //check it is already taken or not
        if(vis[i]==0)
        {
            //if not make it as 1 and add to ss
            vis[i]=1;
            PrintPermutations(ss+s[i],vis);
            vis[i]=0;
        }
    }
}

int main() {
    //string s;
    cin>>s;
    n=s.size();
    int vis[n]={0};
    string ss="";
    PrintPermutations(ss,vis);
    return 0;
	 

}

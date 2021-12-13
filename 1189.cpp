#include<iostream>
using namespace std;
int sum[1000002];
int main()
{
	int i,j,n,a1,a=1,b=1;
	sum[1]=1;
	sum[2]=2;
	cin>>n;
	for(i=3;i<=1000001;i++) sum[i]=(sum[i-1]*2+sum[i-2])%32767;
	for(i=1;i<=n;i++)
	{
		cin>>a1;
		cout<<sum[a1]<<endl;
	}
	return 0;
}

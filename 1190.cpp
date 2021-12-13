#include<iostream>
using namespace std;
long long sum[72];
int main()
{
	int i,a1;
	sum[1]=1;
	sum[2]=2;
	sum[3]=4;
	for(i=4;i<=71;i++) sum[i]=sum[i-3]+sum[i-2]+sum[i-1];
	while(i)
	{
		cin>>a1;
		if(a1==0)break;
		cout<<sum[a1]<<endl;
	}
	return 0;
}

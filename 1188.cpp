#include<iostream>
using namespace std;
int sum[1000002];
int main()
{
	int i,j,n,a1,a=1,b=1;
	cin>>n;
	for(i=3;i<=1000001;i++)
	{
		if(a>=1000)a%=1000;
		if(b>=1000)b%=1000;
		sum[i]=(a+b)%1000;
		a=b;
		b=sum[i];
	}
	for(i=1;i<=n;i++)
	{
		cin>>a1;
		if(a1>2) cout<<sum[a1]<<endl;
		else cout<<1<<endl;
	}
	return 0;
}

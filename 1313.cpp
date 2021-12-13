#include<iostream>
using namespace std;
int x[1002][2];
int main()
{
	int n,i,sum;
	cin>>n;
	x[1][1]=1; x[1][0]=9;
	for(i=2;i<=n;i++)
	{
		sum=x[1][0];
		if(i==n)sum--;
		x[i][0]=(x[i-1][0]*sum+x[i-1][1])%12345;
		x[i][1]=(x[i-1][1]*sum+x[i-1][0])%12345;
	}
	cout<<x[n][0]<<endl;
	return 0;
}

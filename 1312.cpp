#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
long long a[52]={0},b[52]={0};
int main()
{
	int i,j,x,y,z;
	cin>>x>>y>>z;
	for(i=1;i<=x;i++)a[i]=1;
	for(i=x+1;i<=z+1;i++)
	{
		b[i]=y*a[i-x];
		a[i]=a[i-1]+b[i-2];
	}
	cout<<a[z+1]<<endl;
	return 0;
}

#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int i,a[10001],b[10001],c[10001],s=0,t=0,lx,ly,l,j;
string x,y,z;
int main()
{
	cin>>x>>y;
	memset(a,0,10001);memset(b,0,10001);memset(c,0,10001);
	lx=x.size();ly=y.size();
	for(i=0;i<lx;i++)a[lx-i]=x[i]-'0';
	for(i=0;i<ly;i++)b[ly-i]=y[i]-'0';
	for(i=1;i<=lx;i++)
	{
		s=0;
		for(j=1;j<=ly;j++)
		{
			c[i+j-1]+=a[i]*b[j]+s;
			s=c[i+j-1]/10;
			c[i+j-1]%=10;
		}
		c[i+ly]=s;
	}
	l=lx+ly;
	while(c[l]==0&&l>1)l--;
	for(i=l;i>=1;i--)cout<<c[i];
	return 0;
} 

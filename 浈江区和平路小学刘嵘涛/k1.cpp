#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int i,j,s=0,t=0,ln,lx,ly,sum=0,a[100001],b[100001],c[100001],jw=0;
string x,y,z="";
int main()
{
	cin>>x>>y;
	lx=x.size();
	ly=y.size();
	memset(a,0,100001);
	memset(b,0,100001);
	memset(c,0,100001);
	for(i=0;i<lx;i++)a[lx-i]=x[i]-'0';
	for(i=0;i<ly;i++)b[ly-i]=y[i]-'0';
	ln=max(lx,ly);
	for(i=1;i<=ln;i++)
	{
		c[i]=a[i]+b[i]+jw;
		jw=c[i]/10;
		c[i]%=10;
	}
	if(jw>0)
	{
		ln++;
		c[ln]=jw;
	}
	while(c[ln]==0&&ln>1)ln--;
	for(i=ln;i>=1;i--)cout<<c[i];
	return 0;
}

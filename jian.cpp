#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int i,a[10001],b[10001],c[10001],s=0,t=0,lx,ly,l;
string x,y,z;
int main()
{
	cin>>x>>y;
	memset(a,0,10001);memset(b,0,10001);memset(c,0,10001);
	lx=x.size();ly=y.size();
	while(x[0]=='0'&&lx>1){x.erase(0.1);lx--;}
	while(y[0]=='0'&&ly>1){y.erase(0.1);ly--;}
	if(lx<ly||(lx==ly)&&(x<y)){swap(x,y);swap(lx,ly);cout<<"-";}
	for(i=0;i<lx;i++)a[lx-i]=x[i]-'0';
	for(i=0;i<ly;i++)b[ly-i]=y[i]-'0';
	l=max(lx,ly);
	for(i=1;i<=l;i++)
	{
		if(a[i]<b[i]){a[i+1]--;a[i]+=10;}
		c[i]=a[i]-b[i];
	}
	while(c[l]==0&&l>1)l--;
	for(i=l;i>=1;i--)
	cout<<c[i];
	return 0;
} 

#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int i,j,s=0,t=0,lx,c[10001],a[10001];
string x,y,z="";
int lax(int s)
{
	int num=0,k=1;
	while(k<=lx)
	{
		num*=10;
		num+=a[k];
		num%=s;
		k++;
	}
	if(num==0)
	{
		cout<<i<<" ";
		t=1;
	}
	return 0;
}
int main()
{
	cin>>x;
	lx=x.size();
	memset(a,0,10001);
	for(i=0;i<lx;i++)a[i+1]=x[i]-'0';
	for(i=2;i<=100;i++)lax(i);
	if(t==0)cout<<"none"<<endl;
	return 0;
}

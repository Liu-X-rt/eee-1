#include<iostream>
using namespace std;
char a[101][101];
bool b[101][101];
int main()
{
	int i,j,h,n,m,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		cin>>a[i][j];
		if(a[i][j]=='@')sum++;
	}
	cin>>m;
	for(h=2;h<=m;h++)
	{
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		if(a[i][j]=='@')
		{
			if(a[i][j+1]=='.'&&b[i][j+1]==0){b[i][j+1]=1;sum++;}
			if(a[i][j-1]=='.'&&b[i][j-1]==0){b[i][j-1]=1;sum++;}
			if(a[i+1][j]=='.'&&b[i+1][j]==0){b[i+1][j]=1;sum++;}
			if(a[i-1][j]=='.'&&b[i-1][j]==0){b[i-1][j]=1;sum++;}
		}
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		if(b[i][j]==1)a[i][j]='@';
	}
	cout<<sum<<endl;
	return 0;
}

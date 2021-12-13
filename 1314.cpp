#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
long long f[25][25];
bool g[25][25];
int main()
{
	int i,j,n,m,c1,c2;
	cin>>n>>m>>c1>>c2;
	g[c1][c2]=1;
	if(c1>1 && c2 != 0)   g[c1 - 2][c2 - 1] = 1;
	if(c1<19 && c2 != 0)  g[c1 + 2][c2 - 1] = 1;
	if(c1>1 && c2 != 20)  g[c1 - 2][c2 + 1] = 1;
	if(c1<19 && c2 != 20) g[c1 + 2][c2 + 1] = 1;
	if(c1!=0 && c2 > 1)   g[c1 - 1][c2 - 2] = 1;
	if(c1!=0 && c2 < 19)  g[c1 - 1][c2 + 2] = 1;
	if(c1!=20 && c2 > 1)  g[c1 + 1][c2 - 2] = 1;
	if(c1!=20 && c2 < 19) g[c1 + 1][c2 + 2] = 1;
	for(i=0;i<=n;i++)
	for(j=0;j<=m;j++)
	{
		if(g[i][j]==false)
		{
			if(i==0&&j==0)f[0][0]=1;
			else if(i==0&&j>0)f[0][j]=f[0][j-1];
			else if(i>0&&j==0)f[i][0]=f[i-1][0];
			else f[i][j]=f[i-1][j]+f[i][j-1];
		}
	}
	cout<<f[n][m]<<endl;
	return 0;
}

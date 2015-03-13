#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;

bool list[100000];
int peo[10000];
int main()
{
	int T,N,P,i,j,ans;
	scanf("%d",&T);
	while(T--)
	{
		ans=0;
		memset(list,false,sizeof(list));
		memset(peo,0,sizeof(peo));
		scanf("%d%d",&N,&P);
		for(i=0;i<P;i++)
			scanf("%d",&peo[i]);
		for(j=0;j<P;j++)
		{
			for(i=1;i<=N;i++)
			{
				if(!list[i])
				{
					if(i%7==0 || (i+1)%7==0)
						continue;
					if(!(i%peo[j]))
						list[i]=true;
				}
			}
		}
		for(i=1;i<=N;i++)
		{
			if(list[i])
				ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
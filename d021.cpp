#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

char list[250];
char ans[15][25];
int main()
{
	int n,i,j,k;
	bool toRight=true;
	while(scanf("%d",&n)&&n!=0)
	{
		memset(list,'\0',sizeof(list));
		memset(ans,'\0',sizeof(ans));
		scanf("%s",list);
		for(i=0,j=0,k=0,toRight=true;list[j]!='\0';j++)
		{
			if(toRight)
			{
				ans[i][k++]=list[j];
				if(k>=n)
				{
					toRight=false;
					i++;
					k--;
				}
			}
			else
			{
				ans[i][k--]=list[j];
				if(k<0)
				{
					toRight=true;
					k++;
					i++;
				}
			}
		}
		for(k=0;k<n;k++)
		{
			for(j=0;j<i;j++)
			{
				printf("%c",ans[j][k]);
			}
		}
		printf("\n");
	}
	return 0;
}
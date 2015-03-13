#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;

struct people
{
	char name[17];
	int A,B,cost;
}list[110];
int cal(int N,int M,int A,int B)
{
	int half,sum=N-M,cost=0;
	half=N/2;
	if(N%2)
		half++;
	while(half<=sum && B/half < A)
	{
		cost+=B;
		sum-=half;
		N-=half;
		half=N/2;
		if(N%2)
			half++;
	}
	if(sum!=0)
	{
		cost+=sum*A;
	}
	return cost;
}
bool cmp(people a,people b)
{
	string an=a.name;
	string bn=b.name;
	if(a.cost<b.cost)
		return true;
	else if(a.cost==b.cost && an<bn)
		return true;
	else
		return false;
}
int main()
{
	int test,N,M,L,i,cases=1;
	char s[30],num[10];
	char *str;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d%d%d",&N,&M,&L);
		for(i=0;i<L;i++)
		{
			scanf("%s",&s);
			str=strtok(s,":");
			strcpy(list[i].name,str);
			str=strtok(NULL,",");
			strcpy(num,str);
			list[i].A=atoi(num);
			str=strtok(NULL,",");
			strcpy(num,str);
			list[i].B=atoi(num);
			list[i].cost=cal(N,M,list[i].A,list[i].B);
			//printf("%d\n",list[i].cost);
			//printf("%s:%d,%d\n",list[i].name,list[i].A,list[i].B);
		}
		sort(list,list+L,cmp);
		printf("Case %d\n",cases++);
		for(i=0;i<L;i++)
		{
			printf("%s %d\n",list[i].name,list[i].cost);
		}
	}
	return 0;
}
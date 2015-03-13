#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;

map<int,int> list;
map<int,int>::iterator it;
int cal(int N,int K)
{
	int a,left,right;
	a=(N-K)/2;
	if((N-K)%2)
		return 1;
	if(list.find(N)!=list.end())
		return list[N];
	if(a<=0)
		return 1;
	else
	{
		left=cal(a,K);
		right=cal(a+K,K);
		if(list.find(a)==list.end())
			list[a]=left;
		if(list.find(a+K)==list.end())
			list[a+K]=right;
		return left+right;
	}
}
int main()
{
	int N,K,ans;
	while(scanf("%d%d",&N,&K)!=EOF)
	{
		ans=cal(N,K);
		printf("%d\n",ans);
		list.clear();
	}
	return 0;
}
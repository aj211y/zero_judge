//uva10127 poj2551 p017
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int x,sum,result;
	while(scanf("%d",&x)!=EOF){
		result=1%x;//�ξl�ƨӧP�_
		sum=1;
		while(result){//���@�I���������k�A�S���ɴN�N�U�@��ƪ�1�S��i���~��
			result=(result*10+1)%x;
			sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
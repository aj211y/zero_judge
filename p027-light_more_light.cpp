//uva10110  p027 �}���O ��n���O�w�N��n��
//i                 f
//o o o o o o o o o o
//1 2 3 4 5 6 7 8 9 10
//(��k�몺�ɭ�)�C���qi->f�ɡA�O�w�ǦC�i�Qk�㰣�̫K���@�U�}��(�G�O�Ϋ��O)
//�O�w�|�G�����p���`�@���F�_�ƤU�A�B�u�Pk<=��������Ʀ���(��ۤv�j�H��N���A�ܰ�)
//�]���u����������Ƥ~�|���_�ƭӦ]��
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	unsigned int input,tmp;
	while(scanf("%d",&input)!=EOF){
		if(!input)
			break;
		tmp=sqrt(input);
		if(tmp*tmp==input)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
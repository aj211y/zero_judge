//uva10041  p012 �@��Ʀr ��X�ѥ���@�I��Ҧ��I���Z���̤p�M
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int kk(vector<int> vito,int sum);
int main()
{
	int test,rela,street,sum=0,tmp;
	vector<int> vito;
	scanf("%d",&test);
	while(test--){
		sum=0;//��l��
		scanf("%d",&rela);//���X��˱�
		tmp=rela;
		while(tmp--){
			scanf("%d",&street);//���
			vito.push_back(street);
			sum=sum+street;
		}
		sum=sum/rela;//������
		tmp=kk(vito,sum);//tmp�Ȧs ���ᰵ���
		if(tmp < kk(vito,sum+1)){ //���e��
			while(tmp > kk(vito,sum-1))
				tmp=kk(vito,--sum);
		}
		else{
			while(tmp > kk(vito,sum+1))//�����
				tmp=kk(vito,++sum);
		}
		printf("%d\n",tmp);
		vito.clear();//�M��
	}
	return 0;
}
int kk(vector<int> vito,int sum)
{
	int c=-1,result=0;
	while(++c<vito.size()){
		if(vito[c]<sum)//�Z���O����ȡA�ҥH�n����֤j�֤p�A�ݽִ��
			result=result+sum-vito[c];
		else
			result=result+vito[c]-sum;
	}
	return result;
}
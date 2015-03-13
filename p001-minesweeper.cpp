#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

bool check(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
		return false;
	else
		return true;
}
int main()
{
	int n,m,field=1,i,j,k,ni,nj;
	int farm[100][100]={0};
	string str;
	int step[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
	while(scanf("%d %d",&n,&m)!=EOF){
		if(n==0&&m==0)
			break;
		scanf("\n");
		for(i=0;i<n;i++){//������lfarm�}�C
			getline(cin,str);
			for(j=0;j<m;j++){
				if(str[j]=='*')
					farm[i][j]=9;//�����������q���a��A��9�O�]�������|���@�Ӧa��[�`�ᬰ9�A�[�`��̦h��8
				else
					farm[i][j]=0;//�Ū��a��
			}
		}
		for(i=0;i<n;i++){//�p��̫�n��X���ˤl
			for(j=0;j<m;j++){
				if(farm[i][j]==9){//���q����m
					for(k=0;k<8;k++){//�L���P�D
						ni=i+step[k][0];
						nj=j+step[k][1];
						if(check(ni,nj,n,m)){
							if(farm[ni][nj]!=9)//�������q
								farm[ni][nj]+=1;
						}
					}
				}
			}
		}
		if(field!=1)
			printf("\n");
		printf("Field #%d:\n",field);
		field++;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(farm[i][j]==9)
					printf("*");
				else
					printf("%d",farm[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
//�p���Ƭۥ[�ɦ��X���i��
#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
	string str1,str2;//����Q��Ƥ��j�A�ӥB�n�@��@��ۥ[�ҥH��string�s
	vector<int> vec1,vec2;
	int i,count,j,carry;
	while(cin >> str1 >> str2){
		count=0;
		if(str1==str2 && str2=="0")
			break;
		i=-1;
		while(++i<str1.size())
			vec1.push_back((str1[i]-48));
		i=-1;
		while(++i<str2.size())
			vec2.push_back((str2[i]-48));
		i=vec1.size()-1;
		j=vec2.size()-1;
		carry=0;
		while(i>=0 || j >=0){
			if(i<0)
				carry=(vec2[j--]+carry)/10;//�@�ƥH�����t�@�ƶ��P�i��ۥ[�ݬO�_�|�S�i��
			else if(j<0)
				carry=(vec1[i--]+carry)/10;
			else
				carry=(vec1[i--]+vec2[j--]+carry)/10;//���Ƭۥ[�A�[�i��
			if(carry)
				count++;
		}
		if(count){
			if(count==1)
				printf("1 carry operation.\n");
			else
				printf("%d carry operations.\n",count);
		}
		else
			printf("No carry operation.\n");
		vec1.clear();
		vec2.clear();
	}
	return 0;
}
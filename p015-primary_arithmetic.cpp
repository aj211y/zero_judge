//璸衡ㄢ计Τ碭Ω秈
#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
	string str1,str2;//Τ计ぇτ璶┮ノstring
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
				carry=(vec2[j--]+carry)/10;//计Ч计斗籔秈琌穦秈
			else if(j<0)
				carry=(vec1[i--]+carry)/10;
			else
				carry=(vec1[i--]+vec2[j--]+carry)/10;//ㄢ计秈
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
#include<iostream>
#include<cstdio>
#include<string>
#include<map>
using namespace std;

int main()
{
	map<char,char> cha;
	cha['1']='`';cha['2']='1';cha['3']='2';cha['4']='3';cha['5']='4';
	cha['6']='5';cha['7']='6';cha['8']='7';cha['9']='8';cha['0']='9';
	cha['-']='0';cha['=']='-';
	cha['W']='Q';cha['E']='W';cha['R']='E';cha['T']='R';cha['Y']='T';cha['U']='Y';
	cha['I']='U';cha['O']='I';cha['P']='O';cha['[']='P';cha[']']='[';cha['\\']=']';
	cha['S']='A';cha['D']='S';cha['F']='D';cha['G']='F';cha['H']='G';cha['J']='H';
	cha['K']='J';cha['L']='K';cha[';']='L';cha['\'']=';';
	cha['X']='Z';cha['C']='X';cha['V']='C';cha['B']='V';cha['N']='B';cha['M']='N';
	cha[',']='M';cha['.']=',';cha['/']='.';cha[' ']=' ';
	string str;
	int i;
	while(getline(cin,str)){
		i=-1;
		while(++i<str.size()){
			printf("%c",cha[str[i]]);
		}
		printf("\n");
	}
	return 0;
}
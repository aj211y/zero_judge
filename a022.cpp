//°j¤å
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	string tmp,str;
	int middle;
	while(cin >> str){
		if(str=="0")
			break;
		middle=str.size()/2;
		for(int a=0,b=str.size()-1;a<=middle,b>=middle;a++,b--){
			if(a==b)
				cout << "yes" << endl;
			if(str[a]!=str[b]){
				cout << "no" << endl;
				break;
			}
			else{
				if(!(str.size()%2)){
					if(b==middle)
						cout << "yes" << endl;
				}
			}
		}
	}
	return 0;
}
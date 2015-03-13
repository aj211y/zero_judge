//看清楚題目!! 一串數字 連續兩個數的絕對值 可以組成 1到n-1 則為jolly jumper
#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int num,value,ans;
	vector<int> jolly,length;
	while(scanf("%d",&num)!=EOF){
		ans=1;
		while(num--){
			scanf("%d",&value);
			jolly.push_back(value);
		}
		value=-1;
		while(++value<(jolly.size()-1))
			length.push_back(abs(jolly[value]-jolly[value+1]));
		sort(length.begin(),length.end());
		for(value=0;value<length.size();value++){
			if(length[value]!=value+1){
				ans=0;
				break;
			}
		}
		if(ans)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
		jolly.clear();
		length.clear();
	}
	return 0;
}
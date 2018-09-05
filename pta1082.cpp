#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main(){
	int t;
	cin>>t;
	int min=1000;
	int min_name;
	int max=-1;
	int max_name;
	for(int i=0;i<=t-1;i++){
		int num;
		int x;
		int y;
		double temp;
		cin>>num>>x>>y;
		temp=sqrt(x*x+y*y);
		if(temp>max){
			max=temp;
			max_name=num;
		}
		if(temp<min){
			min=temp;
			min_name=num;
		}
	}
	printf("%04d %04d\n",min_name,max_name);
	return 0;
}
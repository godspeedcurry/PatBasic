#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;
struct people
{
	char name[10];
	int year;
	int month;
	int day;
}man[100005];
int cmp(struct people a1,struct people a2){
	if(a1.year!=a2.year){
		return a2.year>a1.year;
	}
	else{
		if(a1.month!=a2.month) return a1.month<a2.month;
		else{
			if(a1.day!=a2.day) return a1.day<a2.day;
			else return 0;
		} 
	}

}
int main(){
	int t;
	char name[10];

	scanf("%d",&t);
	int count=0;
	int year,month,day;
	int flag;
	int aaa=0;
	for(int i=0;i<=t-1;i++){
		scanf("%s %d/%d/%d",name,&year,&month,&day);
		flag=0;
		if(year>=1814&&year<=2014){
			if(year==1814){
				if(month>9)flag=1;
				else if(month==9){
					if(day>=6)flag=1;
				}
			}
			else if(year==2014){
				if(month<9)flag=1;
				else if(month==9){
					if(day<=6)flag=1;
				}
			}
			else{
				flag=1;
			}
		}
		if(flag) count++;
		if(flag){
			strcpy(man[aaa].name,name);
			man[aaa].year=year;
			man[aaa].month=month;
			man[aaa].day=day;
			aaa++;

		}

	}
	sort(man,man+count,cmp);
	if(count!=0){
		printf("%d %s %s\n",count,man[0].name,man[count-1].name);
	}
	else printf("0\n");
	
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;
struct stu
{
	int yi,jia,ding,total,num;
	string name;
}item[100033];
int cmp(const void *a,const void *b){
	if((*(stu *)a).total!=(*(stu *)b).total){
		return (*(stu *)b).total-(*(stu *)a).total;
	}
	else if((*(stu *)a).num!=(*(stu *)b).num){
		return (*(stu *)a).num-(*(stu *)b).num;
	}
	else return ((*(stu *)b).name)<(*(stu *)a).name;
}
int main(){
	int t;
	cin>>t;
	map<string,int>mapSchool;
	int count=0;
	for (int i = 0; i < t; ++i)
	{
		string stuname;
		int grade;
		string school;
		cin>>stuname>>grade>>school;
		transform(school.begin(), school.end(),school.begin(), ::tolower);//学校转小写 #include <algorithm>
		if(mapSchool[school]==0){
			mapSchool[school]=++count;//学校不存在则记录学校个数，并作为序号
			item[count].name=school;
			item[count].num++;
			if(stuname[0] =='T'){
				item[count].ding+=grade;
			}
			else if(stuname[0]=='B'){
				item[count].yi+=grade;
			}
			else if(stuname[0]=='A'){
				item[count].jia+=grade;
			}

		}
		else{
			item[mapSchool[school]].name=school;
			item[mapSchool[school]].num++;
			if(stuname[0] =='T'){
				item[mapSchool[school]].ding+=grade;
			}
			else if(stuname[0]=='B'){
				item[mapSchool[school]].yi+=grade;
			}
			else if(stuname[0]=='A'){
				item[mapSchool[school]].jia+=grade;
			}
		}
	}
	for(int i=1;i<=mapSchool.size();i++){
		item[i].total=(int) (item[i].yi*1.0/1.5+item[i].jia*1.0+item[i].ding*1.5);
	}
	qsort(item+1,mapSchool.size(),sizeof(item[0]),cmp);//排序
	printf("%d\n",mapSchool.size());
	int totalgrade=0;
	int rank=2;
	for(int i=1;i<=mapSchool.size();i++){
		if(item[i].total!=totalgrade){
			totalgrade=item[i].total;
			rank=i+1;
			printf("%d %s %d %d\n",i,item[i].name.c_str(),item[i].total,item[i].num);  
		}
		else{
			printf("%d %s %d %d\n",rank-1,item[i].name.c_str(),item[i].total,item[i].num);  
		}
	}
	return 0;
}
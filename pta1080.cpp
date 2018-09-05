#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct test
{
	char name[30];
	int code;
	int qz;
	int final;
	double total;
	int tt;
}student[10010],student_1[10010],student_2[10010];
int cmp(const void *a,const void *b){
	if((*(test *)a).tt!=(*(test *)b).tt) return (*(test *)b).tt-(*(test *)a).tt;
	else return strcmp((*(test *)a).name,(*(test *)b).name);
}
int cmp1(const void *a,const void *b){
	return strcmp((*(test *)a).name,(*(test *)b).name);
}
int main(){
	clock_t start, end;
	start=clock();
	int p,m,n;
	scanf("%d %d %d",&p,&m,&n);
	int max=p;
	if(m>max)max=m;
	if(n>max)max=n;
	for(int j=1;j<=max;j++){
		student_2[j].code=-1;
		student_2[j].qz=-1;
		student_2[j].final=-1;
	}
	for(int i=1;i<=p;i++){
		scanf("%s %d",student[i].name,&student[i].code);
	}
	qsort(student+1,p,sizeof(student[0]),cmp1);

	for(int i=1;i<=m;i++){
		scanf("%s %d",student_1[i].name,&student_1[i].qz);
	}
	qsort(student_1+1,m,sizeof(student_1[0]),cmp1);

	for(int i=1;i<=n;i++){
		scanf("%s %d",student_2[i].name,&student_2[i].final);
	}
	qsort(student_2+1,n,sizeof(student_2[0]),cmp1);
	int temp=0;
	for(int i=1;i<=p;i++){
		for(int j=temp+1;j<=max;j++){
			if(strcmp(student_2[j].name,student[i].name)==0){
				temp=j;
				student_2[j].code=student[i].code;
				break;
			}
		}
	}
	temp=0;
	for(int i=1;i<=m;i++){
		for(int j=temp+1;j<=max;j++){
			if(strcmp(student_2[j].name,student_1[i].name)==0){
				temp=j;
				student_2[j].qz=student_1[i].qz;
				break;
			}
		}
	}
	for(int j=1;j<=max;j++){
		if(student_2[j].qz>student_2[j].final)
			student_2[j].total=0.4*student_2[j].qz+0.6*student_2[j].final;
		else student_2[j].total=1.0*student_2[j].final;
		student_2[j].tt=student_2[j].total+0.5;
	}

	qsort(student_2+1,max,sizeof(student_2[0]),cmp);
	for(int j=1;j<=max;j++){
		if(student_2[j].total>=60&&student_2[j].code>=200)
			printf("%s %d %d %d %d\n",student_2[j].name,student_2[j].code,student_2[j].qz,student_2[j].final,student_2[j].tt );
	}
	




	end = clock();
	printf("%d\n",end-start );
	return 0;
}
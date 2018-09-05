#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu
{
	char name[10];
	int height;
}student[10004];
int cmp(const void *a,const void *b){
	if((*(stu *)b).height!=(*(stu *)a).height)return (*(stu *)b).height-(*(stu *)a).height;
	else return strcmp((*(stu *)a).name,(*(stu *)b).name);
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%s %d",student[i].name,&student[i].height);
	}
	qsort(student+1,n,sizeof(student[0]),cmp);

	int num;
	int sum=0;
	for(int i=1;i<=k;i++){
		if(i==1) num=n-n/k*(k-1);
		else num=n/k;
		int flag=0;
		int start=sum+num/2*2;
		for(int j=1;j<=num/2;j++){
			if(flag==0) {
				printf("%s", student[start].name); 
				flag=1;
			}
			else printf(" %s", student[start].name );
			start-=2;
		}
		start = sum+1;
		for(int j=1;j<=num-num/2;j++){
			if(flag==0) {
				printf("%s", student[start].name); 
				flag=1;
			}
			else printf(" %s", student[start].name );
			start+=2;
		}
		printf("\n");
		sum+=num;
	}
	return 0;
}
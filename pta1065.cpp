#include <stdio.h>
#include <stdlib.h>
struct couple
{
	int another;
	int flag;
}Cp[100010];
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<=t-1;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		Cp[a].another=b;
		Cp[b].another=a;
	}
	int people;
	scanf("%d",&people);
	int present[100010];
	for(int i=0;i<=people-1;i++){
		
		scanf("%d",&present[i]);
		Cp[present[i]].flag=1;
	}
	int dan[100004];
	int count=0;
	qsort(present,people,sizeof(present[0]),cmp);
	for(int i=0;i<=people-1;i++){
		int temp=present[i];
		if(Cp[temp].flag==1&&Cp[Cp[temp].another].flag==1){
			continue;
		}
		else{
			dan[count++]=temp;

		}
	}
	printf("%d\n",count);
	int f=0;
	for(int i=0;i<=count-1;i++){
		if(f==0){
			printf("%05d",dan[i]);
			f=1;
		}
		else{
			printf(" %05d",dan[i]);
		}
	}

	return 0;
}
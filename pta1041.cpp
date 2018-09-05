#include <stdio.h>
#include <stdlib.h>
struct student
{
	char s[15];
	int shiji;
	int kaoshi;

}people[1005];
int cmp(const void *a,const void *b){
	return (*(student *)a).shiji-(*(student *)b).shiji;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<=t-1;i++){
		scanf("%s %d %d",people[i].s,&people[i].shiji,&people[i].kaoshi);
	}
	qsort(people,t,sizeof(people[0]),cmp);
	int n;
	scanf("%d",&n);
	int temp;
	for(int i=0;i<=n-1;i++){
		scanf("%d",&temp);
		printf("%s %d\n",people[temp-1].s,people[temp-1].kaoshi);
	}
	return 0;
}
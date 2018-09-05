#include <stdio.h>
#include <stdlib.h>
struct group
{
	int number;
	int score;

}G[10004];
int cmp(const void *a,const void *b){
	return (*(group *)b).score-(*(group *)a).score;
}
int main(){
	int t;
	scanf("%d",&t);
	int a,b,c;
	for(int i=0;i<=t-1;i++){
		scanf("%d-%d %d",&a,&b,&c);
		G[a].number=a;
		G[a].score+=c;
	}
	qsort(G,10004,sizeof(G[0]),cmp);
	printf("%d %d\n",G[0].number,G[0].score);
	return 0;
}
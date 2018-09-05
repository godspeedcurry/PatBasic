#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int main(){
	int t,p;
	scanf("%d %d",&t,&p);
	int emm[t];
	for (int i = 0; i < t; ++i)
	{
		/* code */
		scanf("%d",&emm[i]);
	}
	qsort(emm,t,sizeof(emm[0]),cmp);
	int count=1;
	for(int i=0;i<=t-1;i++){
		double begin=emm[i];
		for(int j=i+count;j<t;j++){
			double end=emm[j];
			if(begin*p<end)break;
			if(j-i+1>count){
				count=j-i+1;
			}
		}
	}
	printf("%d\n",count);
	// int temp=t;
	// int count;
	// int  flag=0;
	// for(int i=t-1;i>=0;i--){
	// 	temp=t-i;
	// 	count=0;
	// 	while(temp--){
	// 		long long int a=emm[t-1-i-count]*p;
	// 		if(emm[t-1-count]<=a){
	// 			printf("%d\n",i+1);
	// 			flag=1;
	// 			break;
	// 		}	
	// 		count++;
	// 	}
	// 	if(flag==1) break;
	// }

	return 0;
}
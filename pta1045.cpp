#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int main(){
	int t;
	scanf("%d",&t);
	int a[t];
	int max=-100;
	int max_a[t];
	max_a[0]=0;
	for(int i=0;i<=t-1;i++){
		scanf("%d",&a[i]);
		if(a[i]>max) max=a[i];
		max_a[i+1]=max;
	}
	int b[t];
	for(int i=0;i<=t-1;i++){
		b[i]=a[i];
	}
	int c[t];
	int count=0;
	qsort(b,t,sizeof(b[0]),cmp);
	for(int i=0;i<=t-1;i++){
		if(b[i]==a[i]&&b[i]>max_a[i]){
			c[count++]=b[i];
		}
	}
	printf("%d\n",count);
	int flag=0;
	for(int i=0;i<=count-1;i++){
		if(flag==0) {
			printf("%d",c[i]);
			flag=1;
		}
		else {
			printf(" %d",c[i]);
		}
	}
	printf("\n");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmp(const void *a,const void *b){
	return *(double *)a-*(double *)b;
}
int main(){
	int t;
	scanf("%d",&t);
	double a[t];

	for(int i=0;i<=t-1;i++){
		scanf("%lf",&a[i]);
	}
	int temp=0;
	qsort(a,t,sizeof(a[0]),cmp);
	for(int i=0;i<=t-1;i++){
		temp=(a[i]+a[i+1])/2;
		a[i+1]=temp;
	}
	// int result=a[t-1];
	printf("%d\n",(int)a[t-1]);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>0
int comp(const void*a,const void*b){
    return *(int *)b-*(int *)a;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	int a[t+1];
	a[0]=0;
	for(int i=1;i<=t;i++){
		scanf("%d",&a[i]);
	}
	// int temp=0;
	// for(int i=1;i<=t-1;i++){
	// 	int k=i;
	// 	for(int j=i+1;j<=t;j++){
	// 		if(a[k]<a[j]){
	// 			k=j;
	// 		}
	// 	}
	// 	if(k!=i){
	// 		temp=a[k];
	// 		a[k]=a[i];
	// 		a[i]=temp;
	// 	}
	// }
	qsort(&a[1],t,4,comp);

	int ai=0;
	int count=0;
	int max=0;
	for(int i=1;i<=t;i++){
		if(a[i]>i){
			count++;
		}
		else if(a[i]>i) break;
	}
	printf("%d\n",count);
	
	return 0;
}
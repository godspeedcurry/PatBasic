#include <stdio.h>
#include <stdlib.h>

#define size 10100
int cmp(const void *a,const void *b){
	return *(int *)b-*(int *)a;
}
int t;
int a[size][size]={0};
int main(){
	scanf("%d",&t);
	int emm[t];
	for(int i=0;i<=t-1;i++){
		scanf("%d",&emm[i]);
	}
	qsort(emm,t,sizeof(emm[0]),cmp);
	//divide
	//12 3 4
	int min=10100;
	int m,n;
	for(int i=1;i*i<=t;i++){
		if(t%i==0){
			if(t/i-i<min){
				min=t/i-i;
			n=i;
			}
		}
	}
	m=t/n;
	int count=0;
	int r=0,c=0;
	a[0][0]=emm[0];

	while(count<=t-2){
		while(c<n-1&&a[r][c+1]==0){
			a[r][++c]=emm[++count];
		}
		while(r<m-1&&a[r+1][c]==0){
			a[++r][c]=emm[++count];
		}
		while(c>0&&a[r][c-1]==0){
			a[r][--c]=emm[++count];
		}
		while(r>0&&a[r-1][c]==0){
			a[--r][c]=emm[++count];
		}

	}
	for(int i=0;i<=m-1;i++){
		printf("%d",a[i][0]);
		for(int j=1;j<=n-1;j++){		
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
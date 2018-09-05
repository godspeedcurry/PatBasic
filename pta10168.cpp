#include <stdio.h>
#include <math.h>
int tol;
int judge(int x,int y){
	if(abs(x-y)>tol) return 1;
	return 0;
}
int main(){
	int m,n;
	scanf("%d %d %d",&m,&n,&tol);
	int a[n][m];
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			scanf("%d",&a[i][j]);
		}
	}

	int count=0;
	int x=-1,y=-1;
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=m-1;j++){
			int ge=0;
			int temp=a[i][j];
			if(judge(temp,a[i-1][j-1])==1) ge++;
			if(judge(temp,a[i-1][j])==1) ge++;
			if(judge(temp,a[i-1][j+1])==1) ge++;
			if(judge(temp,a[i][j-1])==1) ge++;
			if(judge(temp,a[i][j+1])==1) ge++;
			if(judge(temp,a[i+1][j-1])==1) ge++;
			if(judge(temp,a[i+1][j])==1) ge++;
			if(judge(temp,a[i+1][j+1])==1) ge++;
			if(ge==8){
				x=j+1;
				y=i+1;
				count++;
			}
			if(count==2)break;
		}
		if(count==2) break;
	}
	if(count==0)printf("Not Exist\n");
	else if(count==1)printf("(%d, %d): %d\n",x,y,a[y-1][x-1] );
	else{
		printf("Not Unique\n");
	}

	return 0;
}
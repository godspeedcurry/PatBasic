#include <stdio.h>

#include <stdlib.h>
int tol;
int m,n;
int a[1000][1000];
int judge(int x,int y){
	if(abs(x-y)>tol) return 1;
	return 0;
}
int check(int i,int j){
	int temp=a[i][j];
	if(i>=1){
		if(judge(temp,a[i-1][j-1])==0) return 0;
		if(judge(temp,a[i-1][j])==0) return 0;
		if(judge(temp,a[i-1][j+1])==0) return 0;
	}
	if(j>=1){
		if(judge(temp,a[i+1][j-1])==0) return 0;
		if(judge(temp,a[i][j-1])==0) return 0;
	}
	if(judge(temp,a[i][j+1])==0) return 0;
	if(judge(temp,a[i+1][j])==0) return 0;
	if(judge(temp,a[i+1][j+1])==0) return 0;
	return 1;
}
int unique(int x,int y){
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			if(x==i&&y==j) continue;
			else if(a[x][y]==a[i][j]) return 0;
		}
	}
	return 1;
}
int main(){
	scanf("%d %d %d",&m,&n,&tol);
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int count=0;
	int x=-1,y=-1;
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			if(unique(i,j)==1&&check(i,j)==1){
				x=j+1;
				y=i+1;
				count++;
			}
			if(count==2)break;
		}
		if(count==2) break;
	}
	if(count==0)printf("Not Exist\n");
	else if(count==1){
		printf("(%d, %d): %d\n",x,y,a[y-1][x-1] );
	} 
	else{
		printf("Not Unique\n");
	}
	return 0;
}
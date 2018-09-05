#include <stdio.h>
int main(){
	int m,n,a,b,ti;
	scanf("%d %d %d %d %d",&m,&n,&a,&b,&ti);
	int xiang[m][n];
	for(int i=0;i<=m-1;i++){
		for(int j=0;j<=n-1;j++){
			scanf("%d",&xiang[i][j]);
			if(xiang[i][j]>=a&&xiang[i][j]<=b)xiang[i][j]=ti;
		}
	}
	int flag;
	for(int i=0;i<=m-1;i++){
		flag=0;
		for(int j=0;j<=n-1;j++){
			if(flag==0) {
				printf("%03d",xiang[i][j]);
				flag=1;
			}
			else printf(" %03d", xiang[i][j]);
		}
		printf("\n");
	}


	return 0;
}
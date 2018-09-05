#include <stdio.h>
#include <stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	int emm[t];
	int num[101]={0};
	for(int i=0;i<=t-1;i++){
		scanf("%d",&emm[i]);
		num[emm[i]]++;
	}

	int s;
	scanf("%d",&s);
	int haha;
	int flag=0;
	int count=0;
	for(int i=0;i<=s-1;i++){
		scanf("%d",&haha);
		// count=0;
		// for(int j=0;j<=t-1;j++){
		// 	if(haha==emm[j]){
		// 		count++;
		// 		if(haha!=emm[j]) break;
		// 	} 
			

		// }
		if(flag==0){
			printf("%d",num[haha]);
			flag++;
		}
		else{
			printf(" %d",num[haha]);
		}

	}

	return 0;
}
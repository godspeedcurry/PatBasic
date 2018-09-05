#include <stdio.h>
#include <string.h>
int main(){
	char laoban[1004];
	char xiaohong[1004];
	scanf("%s",laoban);
	int k=strlen(laoban);
	getchar();
	scanf("%s",xiaohong);
	int m=strlen(xiaohong);
	getchar();
	int flag=1;
	int count=0;
	for(int i=0;i<=m-1;i++){
		char ch=xiaohong[i];
		int haha=0;
		for(int j=0;j<=k-1;j++){
			if(ch==laoban[j]){
				laoban[j]='*';
				haha=1;
				break;
			}
		}
		if(haha==0){
			count++;
			flag=0;
		}
	}
	if(flag)printf("Yes %d\n",k-m);
	else printf("No %d\n",count);
	return 0;
}
#include <stdio.h>
#include <string.h>
char win[1000][25];
int main(){
	int m,n,s;
	scanf("%d %d %d",&m,&n,&s);
	char name[30];
	int count=0;
	int flag=1;
	int shun=0;
	for(int i=1;i<=m;i++){
		scanf("%s",name);
		flag=1;
		if((i-shun)==count*n+s){
			for(int i=0;i<=count-1;i++){
				if(strcmp(win[i],name)==0){
					flag=0;
					shun++;
					break;
				}
			}
			if(flag==1){
				strcpy(win[count],name);
				count++;
				printf("%s\n",name);
			} 
		}
	}
	if(count==0)printf("Keep going...\n");
	return 0;
}
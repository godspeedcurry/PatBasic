#include <stdio.h>
#include <string.h>
int main(){
	int n,m;
	char wei[6][5];
	scanf("%d %d",&n,&m);
	for(int i=0;i<=m-1;i++){
		scanf("%s",wei[i]);
	}
	getchar();
	int count=0;
	int wu_count=0;
	char name[5];
	char ch;
	for(int i=0;i<=n-1;i++){
		char mything[10][5];
		int ge=0;
		scanf("%s",name);
		int flag=0;
		// printf("name=%s\n",name);
		while ((ch = getchar()) != '\n') {
			if (ch == ' ') {
				scanf("%s", mything[ge++]);
				for(int j=0;j<=m-1;j++){
					if(strcmp(mything[ge-1],wei[j])==0){
						if(flag==0){
							printf("%s: %s",name,mything[ge-1]);
							count++;
							wu_count++;
							flag=1;
						}
						else{
							printf(" %s",mything[ge-1]);
							wu_count++;
						}
					}
				}
				
			}
		}
		if(flag==1)printf("\n");
	}
	printf("%d %d\n",count,wu_count);
	return 0;
}
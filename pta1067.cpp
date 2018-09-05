#include <stdio.h>
#include <string.h>
int main(){
	int a;
	char str[32];
	scanf("%s %d",str,&a);
	getchar();
	for(int i=0;;i++){
		char sb[32];
		gets(sb);
		// scanf("%s",sb);
		// getchar();	
		if(strcmp(sb,str)==0){
			printf("Welcome in\n");
			break;
		}
		else if(strcmp(sb,"#")==0){
			break;
		}
		else if(strcmp(sb,str)!=0){
			printf("Wrong password: %s\n",sb);
			if(i==a-1){
				printf("Account locked\n");
				break;
			}
		}
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
	char shou[1004][5];
	char yan[1004][5];
	char kou[1004][5];
	char ch;
	int hand_num=0;
	while ((ch = getchar()) != '\n') {
		if (ch == '[') {
			scanf("%[^]]", shou[++hand_num]);
		}
	}

	int yan_num=0;
	while ((ch = getchar()) != '\n') {
		if (ch == '[') {
			scanf("%[^]]", yan[++yan_num]);
		}
	}

	int kou_num=0;
	while ((ch = getchar()) != '\n') {
		if (ch == '[') {
			scanf("%[^]]", kou[++kou_num]);
		}
	}

	int t;
	scanf("%d",&t);
	int exp[6];
	for(int i=0;i<=t-1;i++){
		scanf("%d %d %d %d %d",&exp[1],&exp[2],&exp[3],&exp[4],&exp[5]);
		if(exp[1]>=1&&exp[1]<=hand_num&&
			exp[2]>=1&&exp[2]<=yan_num&&
			exp[3]>=1&&exp[3]<=kou_num&&
			exp[4]>=1&&exp[4]<=yan_num&&
			exp[5]>=1&&exp[5]<=kou_num
			){
			printf("%s(%s%s%s)%s\n",shou[exp[1]],yan[exp[2]],kou[exp[3]],yan[exp[4]],shou[exp[5]]);
		}
	else{
		printf("Are you kidding me? @\\/@\n");
	}
}






return 0;
}
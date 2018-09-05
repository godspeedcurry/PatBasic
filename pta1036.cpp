#include <stdio.h>
int main(){
	int t;
	char c;
	scanf("%d %c",&t,&c);

	getchar();
	int row=1.0*t/2+0.5;
	int max=row;
	while(row--){
		if(row==max-1){
			for(int i=0;i<=t-1;i++){
				printf("%c",c);
			}
			printf("\n");	
		}
		else if(row>=1&&row<=max-2){
			printf("%c",c);
			for(int i=1;i<=t-2;i++){
				printf(" ");
			}
			printf("%c\n",c);
		}
		else if(row==0){
			for(int i=0;i<=t-1;i++){
				printf("%c",c);
			}
			printf("\n");	
		}
	}

	return 0;
}
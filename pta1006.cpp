#include <stdio.h>
#include <string.h>
int main(){
	char str[4];
	scanf("%s",str);
	int k=strlen(str);
	int temp;
	temp=k;
	for(int i=0;i<=k-1;i++){
		if(temp==3){
			temp--;
			for(int j=1;j<=str[i]-'0';j++){
				printf("B");
			}
		}
		else if(temp==2){
			temp--;
			for(int j=1;j<=str[i]-'0';j++){
				printf("S");
			}
		}
		else if(temp==1){
			for(int t=1;t<=str[i]-'0';t++){
				printf("%d",t);
			}
		}

	}


return 0;
}
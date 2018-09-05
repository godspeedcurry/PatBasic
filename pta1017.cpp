#include <stdio.h>
#include <string.h>
int main(){
	char s[1001];
	int a;
	scanf("%s %d",s,&a);
	int k=strlen(s);
	int flag=0;
	int temp=0;
	for(int i=0;i<=k-1;i++){
		temp=10*temp+s[i]-'0';
		if(temp>=a){
			printf("%d",temp/a);
			flag=1;
		}
		else if(flag==1){
			printf("%d",temp/a);
		}
		temp%=a;
	}if(flag==0)printf("0");
	printf(" %d\n",temp);
	return 0;
}
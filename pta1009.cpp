#include <stdio.h>
#include <string.h>
int main(){
	char a[90];
	gets(a);
	int k=strlen(a);
	int temp=0;
	temp=k;
	for(int i=k-1;i>=0;i--){
		if(i==0){
			for(int j=0;j<=temp-1;j++){
				printf("%c",a[j]);
			}
		}
		if(a[i]==' '){
			for(int j=i+1;j<=temp-1;j++){
				printf("%c",a[j]);
			}
			temp=i;
			printf(" ");
		}
	}
	return 0;
}
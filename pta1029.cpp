#include <stdio.h>
#include <string.h>
int main(){
	char emm[100];
	char haha[100];
	scanf("%s",emm);
	int e=strlen(emm);
	getchar();
	scanf("%s",haha);
	int h=strlen(haha);
	for(int i=0;i<=h-1;i++){
		char ch=haha[i];
		for(int j=0;j<=e-1;j++){
			if(ch==emm[j])emm[j]='*';
		}
	}
	for(int j=0;j<=e-1;j++){
		if(emm[j]!='*'){
			if(emm[j]>='a'&&emm[j]<='z')emm[j]-=32;
		}
	}

	for(int j=0;j<=e-2;j++){
		for(int i=j+1;i<=e-1;i++){
			if(emm[j]==emm[i])emm[i]='*';
		}
	}
	for(int j=0;j<=e-1;j++){
		if(emm[j]!='*')printf("%c",emm[j]);
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
char first[1004];
int ni(char e[]){
	int m=strlen(e);
	for(int i=0;i<m/2;i++){
		char ch;
		ch=e[i];
		e[i]=e[m-i-1];
		e[m-i-1]=ch;
	}
	for(int i=0;i<=m-1;i++)
	return 0;
}
int check(char e[]){
	int m=strlen(e);
	for(int i=0;i<m/2;i++){
		if(e[i]!=e[m-i-1]) return 0;
	}
	return 1;
}
int add(char h[],char f[],char neww[]){
	int hh=strlen(h);
	char aaaa[1006];
	int count=0;
	int jin=0;
	for(int i=1;i<=hh;i++){
		if((h[hh-i]-'0'+f[hh-i]-'0'+jin)>=10){
			aaaa[count++]=(h[hh-i]-'0'+f[hh-i]-'0'+jin)%10+'0';
			jin=(h[hh-i]-'0'+f[hh-i]-'0'+jin)/10;
		}
		else{
			aaaa[count++]=(h[hh-i]-'0'+f[hh-i]-'0'+jin)+'0';
			jin=0;
		}
	}
	if(jin>=1)aaaa[count++]=jin+'0';
	aaaa[count]=0;
	ni(aaaa);
	strcpy(neww,aaaa);
	return 0;
}
int main(int argc, char const *argv[])
{
	int flag=0;
	scanf("%s",first);
	int k=strlen(first);
	char hui[1004];
	char newone[1500];
	int count=0;
	if(check(first)==1)printf("%s is a palindromic number.\n",first);
	else{
		while(!flag){
			strcpy(hui,first);
			ni(hui);
			add(hui,first,newone);
			printf("%s + %s = %s\n",first,hui,newone );
			strcpy(first,newone);
			count++;
			if(check(newone)==1){
				printf("%s is a palindromic number.\n",newone);
				flag=1;
			} 
			else if(count==10){
				printf("Not found in 10 iterations.\n");
				break;
			}
		}
	}
	return 0;
}

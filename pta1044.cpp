#include <stdio.h>
#include <string.h>
char *di[]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
char *gao[]={"tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main(){
	int t;
	scanf("%d",&t);
	char str[10];
	int sum=0;
	int flag=0;
	getchar();
	for(int i=0;i<=t-1;i++){
		gets(str);//attention: space can't be ignored
		int k=strlen(str);
		sum=0;
		flag=0;
		int kong=0;
		if(str[0]>='0'&&str[0]<='9'){//number
			for(int j=0;j<=k-1;j++){
				sum=sum*10+str[j]-'0';
			}
			if(sum==0)printf("%s\n",di[0] );
			else if(sum%13==0)printf("%s\n",gao[sum/13] );
			else if(sum>=13){
				printf("%s %s\n", gao[sum/13],di[sum%13]); 
			}
			else{
				printf("%s\n", di[sum]); 
			}
		}
		else{//mars language
			for(int j=0;j<=k-1;j++){
				if(str[j]==' '){
					flag=1;
					kong=j;
					break;
				}
			}
			if(flag==0){// one word
				for(int j=0;j<=12;j++){
					if(strcmp(di[j],str)==0){
						printf("%d\n",j);
					}
				}
				for(int j=1;j<=12;j++){
					if(strcmp(gao[j],str)==0){
						printf("%d\n",j*13);
					}
				}
			}
			else{ //two words
				int suum=0;
				char haha[5];
				char baga[5];
				int s=0;
				for(s=0;s<=kong-1;s++){//the first word     attention: zero's lenth is 4(tret) 
					haha[s]=str[s];
				}
				haha[s]='\0';
				
				for(int j=0;j<=12;j++){
					if(strcmp(gao[j],haha)==0){
						suum=j;
						break;
					}
				}
				// int h=0;
				// int aaaa=0;
				// for(h=kong+1;h<=k-1;h++){
				// 	baga[aaaa++]=str[h];
				// }
				// baga[aaaa]='\0';
				for(int j=0;j<=12;j++){//the second word
					if(strcmp(di[j],str+kong+1)==0){
						suum=suum*13+j;
					}
				}
				printf("%d\n",suum);
			}
		}
	}
	return 0;
}
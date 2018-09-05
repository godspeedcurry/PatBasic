#include <stdio.h>
#include <string.h>
int main(){
	char ch;
	ch=getchar();
	getchar();
	char str[1004];
	if(ch=='C'){
		gets(str);
		int k=strlen(str);
		// printf("%c\n",str[k-1] );
		char t=str[0];
		int count=1;
		for(int i=1;i<=k;i++){
			if(str[i]==t){
				count++;
			}
			else{
				if(count==1){
					printf("%c",t );
				}
				else{
					printf("%d%c",count,t);
				}
				
				t=str[i];
				count=1;
			}
			

		}

	}
	else if(ch=='D'){
		gets(str);
		int m=strlen(str);
		// printf("%d\n", m);
		char aa=str[0];
		int count_D=0;
		for(int i=0;i<=m-1;i++){
			if(aa>='0'&&aa<='9'){
				count_D=count_D*10+aa-'0';
				// printf("%d\n", count_D);
			}
			else{
				if(count_D==0)printf("%c",aa);
				else{
					for(int j=0;j<=count_D-1;j++){
					printf("%c",str[i]);
				}
				}
				
				count_D=0;
				
			}aa=str[i+1];
		}
	}


	return 0;
}
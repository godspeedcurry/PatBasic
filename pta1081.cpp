#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	getchar();
	char s[321];
	for(int i=1;i<=n;i++){
		gets(s);
		if(strlen(s)<6){
			printf("Your password is tai duan le.\n");
		}
		else{
			int digit_num=0;
			int char_num=0;
			int other_num=0;
			int k=strlen(s);
			for(int i=0;i<=k-1;i++){
				if(s[i]=='.'){
				}
				else if(s[i]>='0'&&s[i]<='9'){
					digit_num++;
				}
				else if(s[i]>='a'&&s[i]<='z'){
					char_num++;
				}
				else if(s[i]>='A'&&s[i]<='Z'){
					char_num++;
				}
				else{
					other_num++;
				}
			}
			if(other_num != 0 )	printf("Your password is tai luan le.\n");
			else if(char_num == 0)	printf("Your password needs zi mu.\n");
			else if(digit_num == 0)	printf("Your password needs shu zi.\n" ); 
			else	printf("Your password is wan mei.\n" );

		}
	}
	return 0;
}
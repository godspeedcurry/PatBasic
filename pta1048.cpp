#include <stdio.h>
#include <string.h>
int main(){
	char a[105];
	char b[105];
	char one[105];
	char s[]="0123456789JQK";
	scanf("%s %s",a,b);
	int k=strlen(a);
	int m=strlen(b);
	int ge=1;
	int min;
	if(k<m)min=m-k;
	else min=0;
	for(int i=m-1;i>=min;i--){
		if(ge%2==1){
			one[ge-1]=s[(a[k-ge]-'0'+b[m-ge]-'0')%13];
			// printf("%c\n",one[ge-1]);
		}
		else{
			one[ge-1]=s[(b[m-ge]-a[k-ge]+10)%10];
			// printf("%c\n",one[ge-1] );
		}
		ge++;
		
	}
	one[ge-1]='\0';
	if(min>0){
		for(int ss=0;ss<=min-1;ss++){
			printf("%c",b[ss]);
		}
	}
	if(k>m){
		for(int ss=0;ss<=k-m-1;ss++){
			if(ge%2==1){
				one[ge-1]=s[(a[k-ge]-'0'+0)%13];
			}
			else{
				one[ge-1]=s[('0'-a[k-ge]+10)%10];
			}
			ge++;
		}
	}
	for(int q=ge-2;q>=0;q--){
		printf("%c",one[q]);
	}
	return 0;
}
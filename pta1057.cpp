#include <stdio.h>
#include <string.h>
int main(){
	char str[100005];
	gets(str);
	int k=strlen(str);
	int sum=0;
	for(int i=0;i<=k-1;i++){
		if(str[i]>='A'&&str[i]<='Z'){
			sum+=str[i]-'A'+1;
		}
		else if(str[i]>='a'&&str[i]<='z'){
			sum+=str[i]-'a'+1;
		}
	}

	int num_1=0;
	int num_0=0;
	int temp=0;
	while(sum){
		temp=sum%2;
		if(temp==0){
			num_0++;
		}
		else num_1++;
		sum/=2;
	}
	printf("%d %d\n",num_0,num_1);
	return 0;
}
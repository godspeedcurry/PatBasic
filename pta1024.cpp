#include <stdio.h>
#include <string.h>
int main(){
	char emm[22000]={0};
	char one[22000];
	scanf("%s",emm);
	int temp=0;
	int k=strlen(emm);
	int lala=0;
	for(int j=0;j<=k-1;j++){
		if(emm[j]=='.'){
			lala=j;
			continue;
		}
		if(emm[j]=='E'){
			temp=j;
			break;
		}	
	}
	//sum of exponent 
	//number of move the decimal
	int sum=0;
	for(int j=temp+2;j<=k-1;j++){
		sum=10*sum+emm[j]-'0';
	}
	//put into one array
	if(sum==0){
		for(int t=1;t<=temp-1;t++){
			printf("%c",emm[t]);
		}
	}
	else{
		if(emm[temp+1]=='-'){
			for(int s=0;s<=sum;s++){
				if(s==0){
					one[s]='0';	
				}
				else if(s==1){
					one[s]='.';

				}
				else{
					one[s]='0';
				}
			}
			sum+=1;
			for(int t=1;t<=temp-1;t++){
				if(emm[t]!='.'){
					one[sum++]=emm[t];
				}

			}
		}
		int count=0;
		if(emm[temp+1]=='+'){
			if(temp-lala-1==sum){
				for(int t=1;t<=temp-1;t++){
					if(emm[t]!='.'){
						one[count++]=emm[t];
					}
				}
			}
			else if(temp-lala-1<sum){
				for(int t=1;t<=temp-1;t++){
					if(emm[t]!='.'){
						one[count++]=emm[t];
					}

				}
				for(int qq=1;qq<=sum-temp+lala+1;qq++){
					one[count++]='0';
				}
				
			}
			
			else if(temp-lala-1>sum){
				int xxy=0;
				char ch;
				for(int t=1;t<=temp-1;t++){
					one[xxy++]=emm[t];
				}
				for(int t=1;t<=sum;t++){
					ch=one[t];
					one[t]=one[t+1];
					one[t+1]=ch;
				}
			}

			
		}
		if(emm[0]=='+'){
			printf("%s\n",one);
		}
		else{
			printf("-%s\n",one);
		}
	}
	return 0;
}
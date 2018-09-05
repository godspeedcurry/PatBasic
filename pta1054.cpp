#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double fun(char s[]){
	return atof(s);
}
int main(){
	double sum=0;
	int count=0;
	int t;
	scanf("%d",&t);
	char str[1003];
	int dian_count=0;
	int zheng_count=0;
	int jian_count=0;
	double temp=0;
	int wei=0;
	for(int i=0;i<=t-1;i++){
		scanf("%s",str);
		int k=strlen(str);
		int flag=1;
		jian_count=0;
		dian_count=0;
		zheng_count=0;
		wei=0;
		for(int j=0;j<=k-1;j++){
			if(!((str[j]>='0'&&str[j]<='9')||str[j]=='.'||str[j]=='-'||str[j]=='+')){

				flag=0;
				break;
			}
			else if(str[j]=='.'){

				dian_count++;
				wei=j;
				if(dian_count>=2){
					flag=0;
					break;
				}
			}
			else if(str[j]=='-'){
				jian_count++;
				if(!(str[j+1]=='.'||str[j+1]>='0'&&str[j+1]<='9')){
					flag=0;
					break;
				}
				if(jian_count>=2){
					flag=0;
					break;
				}
			}
			else if(str[j]=='+'){
				if(!(str[j+1]=='.'||str[j+1]>='0'&&str[j+1]<='9')){
					flag=0;
					break;
				}
				zheng_count++;
				if(zheng_count>=2){
					flag=0;
					break;
				}
			}
		}
		if(k-wei-1>=3&&(dian_count==1))flag=0;
		if(flag==0)printf("ERROR: %s is not a legal number\n",str);
		else{
			temp=fun(str);
			if(temp>=-1000&&temp<=1000){
				sum+=fun(str);
				count++;
			}
			else{
				printf("ERROR: %s is not a legal number\n",str);
			}
			
		}
	}
	if(count==0)printf("The average of 0 numbers is Undefined\n");
	else if(count==1)printf("The average of 1 number is %.2lf\n",sum);
	else{
		printf("The average of %d numbers is %.2lf\n",count,sum/count);
	}

	return 0;
}
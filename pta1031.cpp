#include <stdio.h>
#include <string.h>
int main(){
	int quan[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char M[]={'1','0','X','9','8','7','6','5','4','3','2'};
	int t;
	scanf("%d",&t);
	char str[20];
	int flag=1;
	int count=0;
	for(int i=0;i<=t-1;i++){
		scanf("%s",str);
		getchar();
		
		flag=1;
		int k=strlen(str);
		if(k!=18)flag=0;
		for(int j=0;j<=16;j++){
			if(!(str[j]>='0'&&str[j]<='9')){
				flag=0;
				break;
			}
		}
		int sum=0;
		if(flag==1){
			//calculate
			for(int j=0;j<=16;j++){
				sum+=(str[j]-'0')*quan[j];
			}
			sum%=11;
			if(str[17]==M[sum]){
				flag=1;
			}
			else flag=0;
		}
		if(flag==0)printf("%s\n",str);
		else if(flag){
			count++;
		}
		

	}
	if(count==t)printf("All passed\n");
	return 0;
}
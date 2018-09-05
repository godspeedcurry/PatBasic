#include <stdio.h>
int judge(int a,int b){
	while(a!=1){
		if(a%2==0){
			a/=2;
			if(a==b)return 0;
		}
		else{
			a=(a*3+1)/2;
			if(a==b)return 0;
		}
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	getchar();
	int emm[t];
	for(int i=0;i<=t-1;i++){
		scanf("%d",&emm[i]);
	}
	getchar();
	int temp=0;
	int k=0;
	for(int i=0;i<=t-2;i++){
		k=i;
		for(int j=i+1;j<=t-1;j++){
			if(emm[j]<emm[k]){
				k=j;
			}
		}
		if(k!=i){
			temp=emm[i];
			emm[i]=emm[k];
			emm[k]=temp;
		}
	}
	int flag=0;
	int count=0;
	int a=0;
	int b=0;
	for(int i=t-1;i>=0;i--){
		b=emm[i];
		count=0;
		for(int j=0;j<=t-1;j++){
			if(j==i)continue;
			a=emm[j];	
			if(judge(a,b)==1){
				count++;
			}
		}
		if(count==t-1){
			if(flag==0){
				printf("%d",b);
				flag=1;
			}
			else{
				printf(" %d",b);
			}
		}
		
		
	}
	return 0;
}

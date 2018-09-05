#include <stdio.h>
int main(){
	int emm[100]={0};
	int temp=0;
	int end=0;
	int a=0;
	for(int i=0;i<=9;i++){
		scanf("%d",&a);
		end+=a;
		for(int j=temp;j<=end-1;j++){
			emm[j]=i;
		}
		temp=end;
	}
	int k=0;
	temp=0;
	for(int j=0;j<=end-2;j++){
		k=j;
		for(int i=j+1;i<=end-1;i++){
			if(emm[i]<emm[k]){
				k=i;
			}
		}
		if(k!=j){
			temp=emm[k];
			emm[k]=emm[j];
			emm[j]=temp;
		}
	}
	
		if(emm[0]==0){
			for(int j=1;j<=end-1;j++){
				if(emm[j]!=0){
					temp=emm[0];
					emm[0]=emm[j];
					emm[j]=temp;
					break;
				}
			}
		}
	
	for(int j=0;j<=end-1;j++){
		printf("%d",emm[j]);
	}
	

	
	return 0;
}
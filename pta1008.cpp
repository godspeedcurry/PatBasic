#include <stdio.h>
int main(){
	int t,n;
	scanf("%d%d",&t,&n);
	int a[t];
	for(int i=0;i<=t-1;i++){
		scanf("%d",&a[i]);
	}

	int temp=0;
	for(int j=0;j<=n-1;j++){
		for(int s=t-1;s>=1;s--){
			temp=a[s];
			a[s]=a[s-1];
			a[s-1]=temp;
		}
		
	}
	int flag=1;
	for(int i=0;i<=t-1;i++){
		if(flag==1){
			printf("%d",a[i]);
			flag=0;
		}
		else{
			printf(" %d",a[i]);
		}
	}
	return 0;
}

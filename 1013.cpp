#include <stdio.h>
int main(){
	int i,j,m,n,p=1,t=3,a[10090];
	scanf("%d%d",&m,&n);
	a[0]=2;a[1]=3;a[2]=5;
	for(i=6;i<=999999;i++){
		p=1;
		for(j=2;j*j<=i;j++){
			if(i%j==0){
				p=0;
				break;
			}
		}
		if(p!=0){
			a[t]=i;
			t++;
		}
		if(t==10010)break;
	}

	for(t=m;t<=n;t++){
		if((t-m)%10==0) printf("%d",a[t-1]);
		else{
			if((t-m)%10==9){
				printf(" %d\n",a[t-1]);	
			}
			else{
				printf(" %d",a[t-1]);
			}
		} 
	}
	return 0;
} 

#include <stdio.h>
int prime(int n){
	if (n<=1) return 0;
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
	
}
int main(){
	int a;
	scanf("%d",&a);
	int count=0;
	for(int i=1;i<=a;i++){
		if(prime(i)==1&&prime(i-2)==1){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
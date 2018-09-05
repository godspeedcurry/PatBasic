#include <stdio.h>
int main(){
	int a,b,d;
	scanf("%d %d %d",&a,&b,&d);
	long long int c=a+b;
	int e[100];
	int i=0;
	while(c){
		e[i]=c%d;
		c/=d;
		i++;
	}
	for(int j=i;j>=0;j--){
		printf("%d",a[j]);
	}

	return 0;
}

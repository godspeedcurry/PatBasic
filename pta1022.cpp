#include <stdio.h>
int main(){
	int a,b,d;
	scanf("%d %d %d",&a,&b,&d);
	long long int c=a+b;
	int e[1000]={0};
	int i=0;

	while(c){
		e[i]=c%d;
		c/=d;
		printf("%d\n",c);
		i++;
	}
	for(int j=i-1;j>=0;j--){
		printf("%d",e[j]);
	}
	if(i==0)printf("0\n");
	return 0;
}
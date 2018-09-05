#include <stdio.h>
int main(int argc, char const *argv[])
{
	long long a,b,c,d;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	int temp=0;
	int count1=0;
	int count2=0;
	while(a){
		temp=a%10;
		a/=10;
		if(temp==b)count1++;
	}

	while(c){
		temp=c%10;
		c/=10;
		if(temp==d)count2++;
	}
	a=0;
	for(int i=0;i<=count1-1;i++){
		a=a*10+b;
	}

	c=0;
	for(int i=0;i<=count2-1;i++){
		c=c*10+d;
	}
	printf("%lld\n",c+a);
	return 0;
}
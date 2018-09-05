#include <stdio.h>
long long int gcd(long long int a,long int b){
	long long int temp;
	if(b>a){
		temp=b;
		b=a;
		a=temp;
	}
	long long int r;
	if((r=a%b)==0)return b;
	return gcd(b,r);
}
void show(long long int a,long long int b){
	long long int k;
	int flag=1;
	long long int g=1;
	if(a<0&&b>0){
		flag=-1;
		a=-a;
	}
	else if(a>0&&b<0){
		flag=-1;
		b=-b;
	}
	if(a==0)printf("0");
	else if(b==0)printf("Inf");
	else if(a%b==0){
		if(flag==-1)printf("(-%lld)",a/b);
		else printf("%lld",a/b);
	}
	else if(a>b){
		k=a/b;
		a-=k*b;
		g=gcd(a,b);
		if(flag==-1){
			printf("(-%lld %lld/%lld)",k,a/g,b/g);
		}
		else{
			printf("%lld %lld/%lld",k,a/g,b/g);
		}
	}
	else if(a<b){
		g=gcd(a,b);
		if(flag==-1){
			printf("(-%lld/%lld)",a/g,b/g);
		}
		else{
			printf("%lld/%lld",a/g,b/g);
		}
	}
}
int main(){
	long long int a1,b1,a2,b2;
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
	//add
	show(a1,b1);
	printf(" + ");
	show(a2,b2);
	printf(" = ");
	show((a1*b2+a2*b1),b1*b2);
	printf("\n");
	//reduce
	show(a1,b1);
	printf(" - ");
	show(a2,b2);
	printf(" = ");
	show((a1*b2-a2*b1),b1*b2);
	printf("\n");
	//multiply
	show(a1,b1);
	printf(" * ");
	show(a2,b2);
	printf(" = ");
	show((a1*a2),b1*b2);
	printf("\n");
	//division
	show(a1,b1);
	printf(" / ");
	show(a2,b2);
	printf(" = ");
	if(a2==0)printf("Inf");
	else{
		show((a1*b2),a2*b1);
	}
	printf("\n");
	return 0;
}
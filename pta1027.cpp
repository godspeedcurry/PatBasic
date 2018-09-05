#include <stdio.h>
int emm(int n){
	for(int i=1;i<=25;i++){
		int xixi=(i+1)*(i+1)*2-1;
		int haha=i*i*2-1;
		if(n==haha||(n>haha&&n<xixi)){
			return i;
		}
	}
	return 0;
}
int yu(int n){
	for(int i=1;i<=25;i++){
		int xixi=(i+1)*(i+1)*2-1;
		int haha=i*i*2-1;
		if(n==haha||(n>haha&&n<xixi)){
			return n-haha;
		}
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	int a;
	char ch;
	scanf("%d %c",&a,&ch);
	int e=emm(a);
	//row
	for(int i=1;i<=e;i++){
		for(int j=1;j<=i-1;j++){
			printf(" ");
		}
		for(int j=1;j<=2*e-1-2*(i-1);j++){
			printf("%c",ch);
		}
		printf("\n");
	}
	for(int i=2;i<=e;i++){
		for(int j=1;j<=e-i;j++){
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++){
			printf("%c",ch);
		}
		printf("\n");
	}
	int sheng=yu(a);
	printf("%d\n",sheng);
	return 0;
}
#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a=0;
	int sum=0;
	for(int i=0;i<=t-1;i++){
		scanf("%d",&a);
		sum+=a;
	}
	printf("%d\n",sum*11*(t-1));
	return 0;
}
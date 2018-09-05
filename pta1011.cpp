#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int count=0;
	while(t--){
		long long a,b,c;
		count++;
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%d: true\n",count);
		}
		else{
			printf("Case #%d: false\n",count);
		}
	}
	return 0;
}
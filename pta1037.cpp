#include <stdio.h>
int main(){
	int a,b,c;
	int m,n,q;
	scanf("%d.%d.%d %d.%d.%d",&a,&b,&c,&m,&n,&q);
	long long int wu,zhang;
	wu=17*29*a+b*29+c;
	zhang=17*29*m+n*29+q;
	if(wu<=zhang){
		printf("%lld.%lld.%lld\n",(zhang-wu)/(29*17),((zhang-wu)%(29*17))/29,(zhang-wu)%(29*17)%29);
	}
	else{
		printf("-%lld.%lld.%lld\n",(wu-zhang)/(29*17),((wu-zhang)%(29*17))/29,(wu-zhang)%(29*17)%29);
	}
	return 0;
}
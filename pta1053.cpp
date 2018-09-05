#include <stdio.h>
int main(){
	int n,d;
	double e;
	scanf("%d %lf %d",&n,&e,&d);
	int possible=0;
	int sure=0;
	for(int i=0;i<=n-1;i++){
		int t;
		scanf("%d",&t);
		double dian;
		int day=0;
		for(int j=0;j<=t-1;j++){
			scanf("%lf",&dian);
			if(dian<e)day++;
		}
		if(day>t*1.0/2){
			if(t>d) sure++;
			else possible++;
		}
	}
	printf("%.1lf%% %.1lf%%\n",possible*1.0*100/n,sure*1.0*100/n );


	return 0;
}
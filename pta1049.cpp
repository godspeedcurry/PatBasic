#include <stdio.h>
double s[100005];
// double total(int m,int n){
// 	double he=0;
// 	for(int i=m;i<=n;i++){
// 		he+=s[i];
// 	}
// 	return he;
// }
// 
int t;
int main(){
	scanf("%d",&t);
	double sum=0;
	for(int i=0;i<=t-1;i++){
		scanf("%lf",&s[i]);
	}
	// double cc[100005]={0};
	// int count=0;
	// for(int i=0;i<=t-1;i++){
	
	// 	for(int j=i;j<=t-1;j++){
	// 		for(int emm=count;emm<=count+i;emm++){
	// 			cc[emm]++;
	// 		}
	// 		// cc[count]++;
	// 		// if(count!=coun
	// 		// t+i)
	// 		// cc[count+i]++;
	// 		// sum+=total(count,count+i);
	// 		count++;
	// 	}
	// 	count=0;
		
	// }
	// for(int i=1;i<=t;i++){
	// 	cc[i]=i*t-i*(i-1);
	// }
	for(int i=1;i<=t;i++){
		// printf("%d\n",cc[i]);
		// long long int aaa=i*(t-i+1);
			sum+=1.0*s[i-1]*i*(t-i+1);
	}
		
	printf("%.2lf\n",sum);


	return 0;
}
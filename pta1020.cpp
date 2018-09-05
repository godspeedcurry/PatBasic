#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
struct mooncake
{
	double kucun;
	double sum;
	double per;
}cake[100005];

double cmp(struct mooncake a1,struct mooncake a2){
	return a1.per>a2.per;

}
int main(){
	// char *a;
	// int k=sizeof(int *);
	// printf("%d\n",k);
	int a;
	double b;
	scanf("%d %lf",&a,&b);
	double data1;
	for(int i=0;i<=a-1;i++){
		scanf("%lf",&data1);
		cake[i].kucun=data1;
	}
	for(int i=0;i<=a-1;i++){
		scanf("%lf",&data1);
		cake[i].sum=data1;
	}
	for(int i=0;i<=a-1;i++){
		cake[i].per=cake[i].sum/cake[i].kucun;
	}
	sort(cake,cake+a,cmp);

	double price=0;
	int j=0;
	double all=0;
	double all_price=0;
	int flag=1;
	for(int i=0;i<=a-1;i++){
		all+=cake[i].kucun;
		all_price+=cake[i].sum;
	}
	if(all<b){
		flag=0;
		printf("%.2lf\n",all_price);
	}
	while(b&&flag){
		if(b>=cake[j].kucun){
			b-=cake[j].kucun;
			price+=cake[j].sum*1.0;
		}
		else if(b<cake[j].kucun){
			price+=b*1.0/cake[j].kucun*cake[j].sum;
			b=0;
		}
		j++;
	}
	// for(int i=0;i<=a-1;i++){
	// 	printf("%lf\n",cake[i].per); 
	// }
	if(flag==1)
	printf("%.2lf\n",price);
	return 0;
}

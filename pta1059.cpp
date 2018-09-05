#include <stdio.h>
struct student
{
	int number;
	int rank;
	int flag;
}a[10004];
int prime(int n){
	if(n==1)return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&a[i].number);
		a[i].rank=i;
		a[i].flag=0;
	}
	int who;
	scanf("%d",&who);
	int number;
	for(int i=0;i<=who-1;i++){
		int hmm=0;
		scanf("%d",&number);
		for(int j=1;j<=t;j++){
			if(number==a[j].number){
				hmm=1;
				if(a[j].flag==1){
					printf("%04d: Checked\n",number);
				}
				else{
					if(a[j].rank==1){
						printf("%04d: Mystery Award\n",number );
					}
					else if(prime(a[j].rank)==1){
						printf("%04d: Minion\n",number );
					}
					else{
						printf("%04d: Chocolate\n",number );
					}
					a[j].flag=1;
				}
				break;
			}
		}
		if(hmm==0)printf("%04d: Are you kidding?\n",number );
	}
	return 0;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	int count=0;
	while(t!=1){
		if(t%2==1){
			t=(3*t+1)/2;
			count++;
		} 
		else if(t%2==0){
			t/=2;
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
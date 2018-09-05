#include <stdio.h>
#include <time.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int result=1.0*(b-a)/100+0.5;
	printf("%02d:%02d:%02d\n",result/3600,(result%3600)/60,(result%60));
	return 0;
}
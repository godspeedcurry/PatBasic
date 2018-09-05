#include <stdio.h>
int main(){
	int a=sizeof(double *);
	int b=sizeof(int *);
	int c=sizeof(char *);
	printf("%d %d %d\n",a,b,c );
}
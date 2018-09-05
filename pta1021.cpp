#include <stdio.h>
#include <string.h>
int main(){
	char a[1002];
	scanf("%s",a);
	int k=strlen(a);
	int digit0=0;
	int digit1=0;
	int digit2=0;
	int digit3=0;
	int digit4=0;
	int digit5=0;
	int digit6=0;
	int digit7=0;
	int digit8=0;
	int digit9=0;
	for(int i=0;i<=k-1;i++){
		switch(a[i]){
			case '0':digit0++;break;
			case '1':digit1++;break;
			case '2':digit2++;break;
			case '3':digit3++;break;
			case '4':digit4++;break;
			case '5':digit5++;break;
			case '6':digit6++;break;
			case '7':digit7++;break;
			case '8':digit8++;break;
			case '9':digit9++;break;

		}
	}
	if(digit0>0)printf("0:%d\n",digit0);
	if(digit1>0)printf("1:%d\n",digit1);
	if(digit2>0)printf("2:%d\n",digit2);
	if(digit3>0)printf("3:%d\n",digit3);
	if(digit4>0)printf("4:%d\n",digit4);
	if(digit5>0)printf("5:%d\n",digit5);
	if(digit6>0)printf("6:%d\n",digit6);
	if(digit7>0)printf("7:%d\n",digit7);
	if(digit8>0)printf("8:%d\n",digit8);
	if(digit9>0)printf("9:%d\n",digit9);
	
	return 0;
}
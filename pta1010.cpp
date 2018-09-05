#include <stdio.h>
int main(){
	int a=0,b=0;
	int flag=0;
	while(scanf("%d %d",&a,&b)!=EOF){
		char ch=getchar();
		if(b==0){
			if(flag==0){
				printf("0 0");
				flag=1;
			}
		}
		else{
			if(flag==0){
				printf("%d %d",a*b,b-1);
				flag=1;
			}
			else{
				printf(" %d %d",a*b,b-1);
			}

		}
		
		if(ch=='\n')break;
	}



	return 0;

}
#include <stdio.h>
int main(){
	int a=0;
	int flag=1;
	int A1=0;
	int A2=0;
	int A3=0;
	int A5=0;
	int count_A4=0;
	int sum_A4=0;
	int max=-1;
	int cc=0;
	int t=0;
	scanf("%d",&t);
	getchar();
	while(t--){
		scanf("%d",&a);
		if(a%5==0&&a%2==0){
			A1+=a;
		}
		else if(a%5==1){
			A2+=flag*a;
			flag=-flag;
			cc++;
		}
		else if(a%5==2){
			A3++;
		}
		else if(a%5==3){
			sum_A4+=a;
			count_A4++;
		} 
		else if(a%5==4){
			if(a>max){
				max=a;
			}
		}
		
		
	}
	if(A1==0){
		printf("N");
	}
	else if(A1>0){
		printf("%d",A1);
	}
	if(cc==0){
		printf(" N");
	}
	else if(cc>0){
		printf(" %d",A2);
	}
	if(A3==0){
		printf(" N");
	}
	else if(A3>0){
		printf(" %d",A3);
	}
	if(count_A4==0){
		printf(" N");
	}
	else if(count_A4>0){
		printf(" %.1lf",sum_A4*1.0/count_A4);
	}
	if(max==-1){
		printf(" N");
	}
	else if(max>0){
		printf(" %d",max);
	}


	return 0;

}
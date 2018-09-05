#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[4];
	a[0]=n/1000;
	a[1]=n/100%10;
	a[2]=n/10%10;
	a[3]=n%10;
	int temp=0;
	int index=0;
	int result=100000;
	int big=0,small=0;
	int wo=a[0];
	int flag=1;
	for(int q=0;q<=3;q++){
		if(wo!=a[q]) flag=0;
	}
	if(flag==1){
		printf("%d%d%d%d - %d%d%d%d = 0000\n",a[0],a[1],a[2],a[3],a[0],a[1],a[2],a[3]);
	}
	while(result!=6174&&flag==0){
		//big to small
		for(int i=0;i<=2;i++){
			index=i;
			for(int j=i+1;j<=3;j++){
				if(a[j]>a[index]){
					index=j;
				}
			}
			if(i!=index){
				temp=a[index];
				a[index]=a[i];
				a[i]=temp;
			}
		}
		
		big=0;
		for(int i=0;i<=3;++i){
			big=big*10+a[i];
		}
	
		//small to big
		small=0;
		for(int i=3;i>=0;--i){
			small=small*10+a[i];
		}
		result=0;
		result=big-small;
		printf("%.4d - %.4d = %.4d\n",big,small,result);
		int sb=result;
		//put result into a
		for(int i=3;i>=0;i--){
			a[i]=sb%10;
			sb=sb/10;
		}
	}

	

	return 0;
}
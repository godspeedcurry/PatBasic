#include <stdio.h>
int lcd(int m,int n);
int main(){
	int n1=0,m1=0,n2=0,m2=0,k=0;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	int flag=0;
	int temp=0;
	if(n1*m2>m1*n2){
		temp=n1;
		n1=n2;
		n2=temp;
		temp=m1;
		m1=m2;
		m2=temp;
	}
	int result1=k*n1/m1+1;
	
	for(int i=result1;i*m2<k*n2;i++){
		if (lcd(i,k)==1){
				if(flag==0){
					printf("%d/%d",i,k);
					flag=1;
				}
				else{
					printf(" %d/%d",i,k);
				}
		}
	}
	return 0;
}
int lcd(int m,int n){
	int remainder;
	int temp;
	if(m>n){
		temp=m;
		m=n;
		n=temp;
	}
	while(m){
		remainder = n % m;
		n = m;
		m = remainder;
	}
    if(n == 1){ //最大公约数是1，则互质
    	return 1;
    }
    else{
    	return 0;
    }

}
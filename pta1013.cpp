#include <stdio.h>
int main(){
	int i,j,m,n,p=1,t=3,s;
	static int a[10000];
	scanf("%d%d",&m,&n);
	a[0]=2;a[1]=3;a[2]=5;
	for(i=6;i<=1000000;i++){
		p=1;
		for(j=2;j*j<=i;j++){
			if(i%j==0){
				p=0;
				break;
			}
		}
		if(p!=0){
		    a[t]=i;
		    t++;
	    }
	    if(a[9999]!=0) break;
	}
	if(m<=n&&n<=10000&&m>0){
	    for(t=m,s=0;t<=n;t++){
		    if((t-m)%(10*s+9)==0&&t!=m){
		        printf("%d\n",a[t-1]);
		        s++;
		    }
		    else printf("%d ",a[t-1]); 
	    }
	}
	return 0;
}

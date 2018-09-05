#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>
using namespace std;

void copy(int a[],int b[]){
	for(int i=0;i<=499999;i++){
		a[i]=b[i];
	}
}
void init(int a[]){
	for(int i=0;i<=499999;i++){
		a[i]=-1;
	}
}
	int a[500000];
	int temp[500000];
int main(){
	int digit;
	int t;
	cin>>digit>>t;

	init(a);
	init(temp);
	a[1]=digit;

	for(int i=1;i<=t-1;i++){
		int tt=a[1];
		int cnt=1;
		int count=0;
		// for(int i=1;i<=499999;i++){
		// 	if(a[i]!=-1){
		// 		printf("%d",a[i] );
		// 	}
		// }
		// printf("\n");
		for(int j=1;j<=499999;j++){
			
			if(a[j]==tt){
				count++;
			}
			else{
				temp[cnt]=tt;
				temp[cnt+1]=count;
				cnt+=2;
				count=1;
				tt=a[j];
			}
			if(a[j]==-1){
				copy(a,temp);
				init(temp);
				break;
			} 

		}


	}
	for(int i=1;i<=499999;i++){
		if(a[i]!=-1){
			printf("%d",a[i] );
		}
	}
	printf("\n");
	return 0;
}
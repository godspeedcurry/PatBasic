#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d\n",&a,&b);
	int emm[a+2][b];
	for(int i=0;i<=a+1;i++){
		for(int j=0;j<=b-1;j++){
			scanf("%d",&emm[i][j]);
		}

	}
	for(int i=2;i<=a+1;i++){
		int number=0;
		for(int j=0;j<=b-1;j++){
			if(emm[i][j]==emm[1][j]){
				number+=emm[0][j];
			}
		}
		printf("%d\n",number);
	}

	return 0;
}
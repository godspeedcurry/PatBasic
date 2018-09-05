#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	int ans[2000];
	int count=0;
	int emmmm=t;
	while(t--){
		
		for(int i=0;i<4;i++){
			char emm[4];
			scanf("%s",emm);
			if(emm[2]=='T'){
				ans[count]=emm[0]-'A'+1;
				count++;
				break;
			}
		}
		fflush(stdin);

	}
	int q;
	for(q=0;q<=emmmm-2;q++){
		printf("%d",ans[q]);
	}
	printf("%d\n",ans[q]);
	return 0;
}


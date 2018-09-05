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
		char emm[16];
		gets(emm);
		for(int i=0;i<=15;i++){
			if(emm[i]=='T'){
				ans[count]=emm[i-2]-'A'+1;
				count++;
				break;
			}
		}
		
		

	}
	int q;
	for(q=0;q<=emmmm-2;q++){
		printf("%d",ans[q]);
	}
	printf("%d\n",ans[q]);
	return 0;
}

//gets ojbk
//why can't we use scanf let me think think

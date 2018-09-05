#include <stdio.h>
#include <string.h>

int main(){
	int a=0;
	char emm[100005];
	scanf("%s",emm);
	int k=strlen(emm);
	int p_num=0;
	int a_num=0;
	int t_num=0;
	for(int i=0;i<=k-1;i++){
		if(emm[i]=='P'){
			p_num++;
		}
		else if(emm[i]=='A'){
			a_num+=p_num;
		}
		else if(emm[i]=='T'){
			t_num+=a_num;
			t_num%=1000000007;
		}
		
	}
	printf("%d\n", t_num);
	return 0;
}
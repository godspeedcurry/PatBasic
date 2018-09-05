#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char emm[10005];
	gets(emm);
	int k=strlen(emm);
	int P_num=0;
	int A_num=0;
	int T_num=0;
	int e_num=0;
	int s_num=0;
	int t_num=0;
	for(int i=0;i<=k-1;i++){
		if(emm[i]=='P'){
			P_num++;
		}
		else if(emm[i]=='A'){
			A_num++;
		}
		else if(emm[i]=='T'){
			T_num++;
		}
		else if(emm[i]=='e'){
			e_num++;
		}
		else if(emm[i]=='s'){
			s_num++;
		}
		else if(emm[i]=='t'){
			t_num++;
		}
		
	}
	while(P_num!=0||A_num!=0||T_num!=0||e_num!=0||s_num!=0||t_num!=0){
		if(P_num>0){
			printf("P");
			P_num--;
		}
		if(A_num>0){
			printf("A");
			A_num--;
		}
		if(T_num>0){
			printf("T");
			T_num--;
		}
		if(e_num>0){
			printf("e");
			e_num--;
		}
		if(s_num>0){
			printf("s");
			s_num--;
		}
		if(t_num>0){
			printf("t");
			t_num--;
		}
		
	}

	return 0;
} 
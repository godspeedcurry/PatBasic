#include <stdio.h>
int main(int argc, char const *argv[]){

	int t;
	scanf("%d",&t);
	getchar();
	int jia_win=0;
	int jia_pin=0;
	int jia_lose=0;

	int yi_win=0;
	int yi_pin=0;
	int yi_lose=0;
	int jia_C=0;
	int jia_J=0;
	int jia_B=0;
	int yi_C=0;
	int yi_J=0;
	int yi_B=0;

	while(t--){
		char a,b;
		scanf("%c %c",&a,&b);
		getchar();
		
		if(a=='C'){
			if(b=='J'){
				jia_win++;
				jia_C++;
				yi_lose++;	
			}
			if(b=='C'){
				jia_pin++;
				yi_pin++;	
			}
			if(b=='B'){
				jia_lose++;
				yi_win++;
				yi_B++;	
			}
		}
		else if(a=='J'){
			if(b=='J'){
				jia_pin++;
				yi_pin++;	
			}
			if(b=='C'){
				jia_lose++;
				yi_win++;
				yi_C++;	
			}
			if(b=='B'){
				jia_win++;
				jia_J++;
				yi_lose++;	
			}
		}
		else if(a=='B'){
			if(b=='J'){
				jia_lose++;
				yi_win++;
				yi_J++;	
			}
			if(b=='C'){
				jia_win++;
				jia_B++;
				yi_lose++;	
			}
			if(b=='B'){
				jia_pin++;
				yi_pin++;	
			}
		}
	}
	printf("%d %d %d\n",jia_win,jia_pin,jia_lose);
	printf("%d %d %d\n",yi_win,yi_pin,yi_lose);
	int max=jia_B;
	int emm=0;
	if(jia_C>max){
		max=jia_C;
	}
	if(jia_J>max){
		max=jia_J;
	}
	if(max==jia_B){
		printf("B ");
	}
	else if(max==jia_C){
		printf("C ");
	}
	else if(max==jia_J){
		printf("J ");
	}
	int maxx=yi_B;
	if(yi_C>maxx){
		maxx=yi_C;
	}
	if(yi_J>maxx){
		maxx=yi_J;
	}
	if(maxx==yi_B){
		printf("B");
	}
	else if(maxx==yi_C){
		printf("C");
	}
	else if(maxx==yi_J){
		printf("J");
	}

	return 0;
}
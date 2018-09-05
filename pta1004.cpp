#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	int max=-1;
	int min=120;
	char name_max[12],name_min[12];
	char sno_max[12],sno_min[12];
	while(t--){
		char name[12],sno[12];
		int score=0;
		scanf("%s %s %d",name,sno,&score);
		if(score>max){
			max=score;
			strcpy(name_max,name);
			strcpy(sno_max,sno);
		}
		if(score<min){
			min=score;
			strcpy(name_min,name);
			strcpy(sno_min,sno);
		}
		
	}
	printf("%s %s\n",name_max,sno_max);
	printf("%s %s\n",name_min,sno_min);
	

	return 0;
}
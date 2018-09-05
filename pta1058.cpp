#include <stdio.h>
#include <string.h>
struct stem
{
	int score;
	int total;
	int right;
	char str[60];
	int wrong_time;
}puzzle[101];
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<=m-1;i++){
		scanf("%d %d %d",&puzzle[i].score,&puzzle[i].total,&puzzle[i].right);
		gets(puzzle[i].str);
	}
	int wrong=0;
	int max=-1;
	for(int i=0;i<=n-1;i++){
		int count=0;
		for(int j=0;j<=m-1;j++){
			int ge;
			char sss[100];
			scanf("(%d%[^)]",&ge,sss);
			scanf(")");
			getchar();
			if(puzzle[j].right==ge){
				if(strcmp(puzzle[j].str,sss)==0){
					count+=puzzle[j].score;
				}
				else{
					puzzle[j].wrong_time++;
					if(puzzle[j].wrong_time>max) max=puzzle[j].wrong_time;
					wrong++;
				}
			}
			else if(puzzle[j].right>ge){
				
			}
			else{
				puzzle[j].wrong_time++;
				if(puzzle[j].wrong_time>max) max=puzzle[j].wrong_time;
				wrong++;
			}
		}
		printf("%d\n",count);
	}
	if(wrong==0)printf("Too simple\n");
	else{
		printf("%d",max);
		for(int i=0;i<=m-1;i++){
			if(puzzle[i].wrong_time==max){
				printf(" %d",i+1);
			}
		}
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	int t,k;
	scanf("%d %d",&t,&k);
	srand((unsigned int )time(NULL));
	for(int i=0;i<=k-1;i++){
		// int n1=rand()%10;
		// printf("%d ",n1);
		int n1,n2;
		int aa,money;
		scanf("%d %d %d %d",&n1,&aa,&money,&n2);
		// int n2=rand()%10;
		// while(n1==n2){
		// 	n2=rand()%10;
		// }
		// printf(" %d\n",n2);
		if(t==0){
			printf("Game Over.\n");
			break;
		}
		else if(money>t){
					printf("Not enough tokens.  Total = %d.\n",t);
		}
		else{
			if(aa==0&&n1>n2){
				t+=money;
				printf("Win %d!  Total = %d.\n",money,t);
			}
			else if(aa==1&&n1<n2){
				t+=money;
				printf("Win %d!  Total = %d.\n",money,t);
			}
			else{
				
				if(money<=t){
					t-=money;
					printf("Lose %d.  Total = %d.\n",money,t);
				}
			}
		}
		
	}

	return 0;
}
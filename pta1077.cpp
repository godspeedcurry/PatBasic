#include <stdio.h>
int main(){
	int t,perfect;
	scanf("%d%d",&t,&perfect);
	int repeat=t;
	while(repeat--){
		int max=-1;
		int min=120;
		int score=0;
		int sum=0;
		int G2=0,G1=0;
		int wa=0;
		for(int k=1;k<=t;k++){
			scanf("%d",&score);
			if(score<0||score>perfect) wa++;
			if(score<=perfect&&score>=0){
				if(k==1){
					G2=score;
				}
				else{
					sum+=score;
					if(score>max){
						max=score;
					}
					if(score<min){
						min=score;
					}
				}
			}
			
		}
		G1=(sum-max-min)/(t-3-wa);
		int final=(G1+G2)/2.0+0.5;
		printf("%d\n",final);
		
	}
	return 0;
}
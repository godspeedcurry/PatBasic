#include <stdio.h>
#include <string.h>
struct stem{
	int score;
	int total;
	int right;
	char str[60];
	int a[5];
	int max;
}puzzle[101];
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<=m-1;i++){
		scanf("%d %d %d",&puzzle[i].score,&puzzle[i].total,&puzzle[i].right);
		gets(puzzle[i].str);
	}
	int wrong=0;
	int mmax=-1;
	for(int i=0;i<=n-1;i++){
		double count=0;
		for(int j=0;j<=m-1;j++){
			int ge;
			char sss[100];
			scanf("(%d%[^)]",&ge,sss);
			scanf(")");
			getchar();
			int flag=1;//right or no
			if(strcmp(puzzle[j].str,sss)==0){
				count+=puzzle[j].score;
			}
			else{
				wrong++;
				flag=0;
			}
			if(!flag){
				int judge=0;
				for(int s=1;s<=2*ge-1;s+=2){
					int f=0;
					for(int q=1;q<=2*puzzle[j].right-1;q+=2){
						if(sss[s]==puzzle[j].str[q]){
							judge++;
							f=1;
							break;
						}
					}
					if(f==0){
						puzzle[j].a[sss[s]-'a']++;
						if(puzzle[j].a[sss[s]-'a']>mmax)mmax=puzzle[j].a[sss[s]-'a'];
					}		
				}
				for(int qq=1;qq<=2*puzzle[j].right-1;qq+=2){
					int ffff=0;
					for(int la=1;la<=2*ge-1;la+=2){
						if(puzzle[j].str[qq]==sss[la]){
							ffff=1;
							break;
						}
					}
					if(ffff==0){
						puzzle[j].a[puzzle[j].str[qq]-'a']++;
						if(puzzle[j].a[puzzle[j].str[qq]-'a']>mmax)mmax=puzzle[j].a[puzzle[j].str[qq]-'a'];
					}
				}
				if(judge==ge&&ge<puzzle[j].right){
					count+=1.0*puzzle[j].score/2;
				}
			}
		}
		printf("%.1lf\n",count);
	}
	if(wrong==0)printf("Too simple\n");
	else{
		for(int i=0;i<=m-1;i++){
			for(int j=0;j<=4;j++){
				if(mmax==puzzle[i].a[j])printf("%d %d-%c\n",mmax,i+1,'a'+j);
			}
		}
	}
	return 0;
}
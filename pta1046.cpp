#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int jia_han;
	int jia_hua;
	int yi_han;
	int yi_hua;

	int jia=0;
	int yi=0;
	for(int i=0;i<=t-1;i++){
		scanf("%d %d %d %d",&jia_han,&jia_hua,&yi_han,&yi_hua);
		int temp=jia_han+yi_han;
		if(temp==jia_hua&&temp!=yi_hua){
			yi++;
		}
		if(temp!=jia_hua&&temp==yi_hua){
			jia++;
		}
	}
	printf("%d %d\n",jia,yi);

	return 0;
}
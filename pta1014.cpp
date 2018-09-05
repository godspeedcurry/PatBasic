#include <stdio.h>
#include <string.h>
int main(){
	char str[4][100];
	char* day[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char hour[]="0123456789ABCDEFGHIJKLMN";
	for(int i=0;i<=3;i++){
		scanf("%s",str[i]);
		getchar();
	}
	int a1=strlen(str[0]);
	int a2=strlen(str[1]);
	int a3=strlen(str[2]);
	int a4=strlen(str[3]);
	int count=0;
	int minn=a1;
	if(a2<minn){
		minn=a2;
	}
	int eeee=0;
	for(int i=0;i<=minn-1;i++){
		char ch=str[0][i];
		if(ch>='A'&&ch<='G'){
			if(str[0][i]==str[1][i]){
				eeee=i;
				count++;
				if(count==1){
					if(ch>='A'&&ch<='G')printf("%s ",day[ch-'A']);
				}
				break;
			}
		}
		
	}
	
	int flag=0;
	for(int i=eeee+1;i<=a1-1;i++){
		char ch=str[0][i];
		if(str[0][i]==str[1][i]){
			if(ch>='0'&&ch<='9'||ch>='A'&&ch<='N'){
				int temp=0;
				for(int e=0;e<=23;e++){
					if(hour[e]==ch){
						temp=e;
						flag=1;
						break;
					}
				}
				printf("%02d:",temp);
				break;
			}	
		}
	}
	int min=a3;
	if(a4<min){
		min=a4;
	}
	int haha=0;
	for(int i=0;i<=min-1;i++){
		char ch=str[2][i];
		if(str[2][i]==str[3][i]){
			if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
				haha++;
				if(haha==1){
					printf("%02d",i);
					break;
				}
			}
		}
		
	}
	return 0;
}


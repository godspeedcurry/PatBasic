#include <stdio.h>
#include <string.h>
int main(){
	char a[102];
	scanf("%s",a);
	int k=strlen(a);
	int sum=0;
	for(int i=0;i<=k-1;i++){
		sum+=a[i]-'0';
	}
	int temp=0;
	char emm[102]={0};
	int count=0;
	while(sum){
		temp=sum%10;
		sum/=10;
		switch(temp){
			case 0:emm[count]='a';break;//0
			case 1:emm[count]='b';break;//1
			case 2:emm[count]='c';break;//2
			case 3:emm[count]='d';break;//3
			case 4:emm[count]='e';break;//4
			case 5:emm[count]='f';break;//5
			case 6:emm[count]='g';break;//6
			case 7:emm[count]='h';break;//7
			case 8:emm[count]='i';break;//8
			case 9:emm[count]='j';break;//9
		}
		count++;
	}
	int emmm=0;
	emmm=strlen(emm);
	for(int j=emmm-1;j>=0;--j){
		switch(emm[j]){
			case 'a':printf("ling");break;
			case 'b':printf("yi");break;
			case 'c':printf("er");break;
			case 'd':printf("san");break;
			case 'e':printf("si");break;
			case 'f':printf("wu");break;
			case 'g':printf("liu");break;
			case 'h':printf("qi");break;
			case 'i':printf("ba");break;
			case 'j':printf("jiu");break;
		}
		if(j!=0){
			printf(" ");
		}
		if(j==0){
			printf("\n");
		}
	}
 system("pause"); 
	return 0;
}

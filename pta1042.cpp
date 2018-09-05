#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct ascii
{
	char ch;
	int number;
}asc[256];
int cmp(const void *a,const void *b){
	if((*(ascii *)b).number!=(*(ascii *)a).number)
	return (*(ascii *)b).number-(*(ascii *)a).number;
	else return (*(ascii *)a).ch-(*(ascii *)b).ch;
}
int main(){

	char emm[1005];
	gets(emm);
	int k=strlen(emm);
	for(int i=0;i<=k-1;i++){
		if(emm[i]>='a'&&emm[i]<='z'){
			asc[emm[i]-' '].number++;
			asc[emm[i]-' '].ch=emm[i];
		}
		else if(emm[i]>='A'&&emm[i]<='Z'){
			emm[i]+=32;
			asc[emm[i]-' '].number++;
			asc[emm[i]-' '].ch=emm[i];
		}
		
	}
	qsort(asc,256,sizeof(asc[0]),cmp);
	printf("%c %d",asc[0].ch,asc[0].number);
	return 0;
} 
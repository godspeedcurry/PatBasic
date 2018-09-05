
#include <stdio.h>
#include <string.h>
int main(){
	char jinzhi[30];//保存进制
	char a[30];
	char b[30];
	char a_temp[30];//保存第一个数
	char b_temp[30];//保存第二个数
	char result[30];
	jinzhi[0]='0';
	scanf("%s",jinzhi+1);
	scanf("%s",a_temp);
	scanf("%s",b_temp);
	int jz=strlen(jinzhi);
	int k=strlen(a_temp);
	int m=strlen(b_temp);
	for(int j=0;j<=jz-1;j++){//给a,b每一位添加0
		a[j]='0';
		b[j]='0';
	}
	int i;
	int temp=0;
	for(int q=k-1;q>=0;q--){//从第一个数的个位开始，依次存进a中，方便操作
		a[temp++]=a_temp[q];
	}
	temp=0;
	for(int q=m-1;q>=0;q--){//同上
		b[temp++]=b_temp[q];
	}
	int jin=0;//个位相加，进位还没产生，故为0
	for(i=0;i<=jz-1;i++){
		temp=jinzhi[jz-1-i]-'0';
		if(temp==0)temp=10;//attention
		int dang=a[i]-'0'+b[i]-'0'+jin;//保存当前位置的数
		if(dang>=temp){
			result[i]=dang%temp+'0';//记得转换成字符串
			jin=dang/temp;
		}
		else{
			result[i]=dang+'0';
			jin=0;//这个不能丢
		}
	}
	result[i]='0';//确定字符串的有效部分
	for(int s=i;s>=0;s--){
		if(result[s]=='0') result[s]=0;
		else{
			break;
		}
		if(s==0)printf("0\n");
	}
	int aaaa=strlen(result);
	for(int aa=aaaa-1;aa>=0;aa--){
		printf("%c",result[aa]);
	}
	return 0;
}

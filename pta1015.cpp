#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
struct student
{
	int sno;
	int de;
	int cai;
	int sum;
}class_1[100005],class_2[100005],class_3[100005],class_4[100005];

int cmp(struct student a1,struct student a2){
	if(a1.sum!=a2.sum){
		return a1.sum>a2.sum;
	}
	else if(a1.de!=a2.de){
		return a1.de>a2.de;
	}
	else return a1.sno<a2.sno;
}

int main(){
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);
	int data1,data2,data3,data4;
	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;
	int count=0;
	for(int i=0;i<=a-1;i++){
		scanf("%d %d %d",&data1,&data2,&data3);
		data4=data2+data3;
		if(data2>=b&&data3>=b){
			if(data2>=c&&data3>=c){
				class_4[a4].sno=data1;
				class_4[a4].de=data2;
				class_4[a4].cai=data3;
				class_4[a4].sum=data4;
				a4++;
			}

			else if(data2>=c&&data3<c){
				class_3[a3].sno=data1;
				class_3[a3].de=data2;
				class_3[a3].cai=data3;
				class_3[a3].sum=data4;
				a3++;
			}
			else if(data2<c&&data3<c&&data2>=data3){
				class_2[a2].sno=data1;
				class_2[a2].de=data2;
				class_2[a2].cai=data3;
				class_2[a2].sum=data4;
				a2++;
			}
			else {
				class_1[a1].sno=data1;
				class_1[a1].de=data2;
				class_1[a1].cai=data3;
				class_1[a1].sum=data4;
				a1++;
			}
			count++;
		}
	}
	sort(class_4,class_4+a4,cmp);
	sort(class_3,class_3+a3,cmp);
	sort(class_2,class_2+a2,cmp);
	sort(class_1,class_1+a1,cmp);
	printf("%d\n",count);
	for(int i=0;i<=a4-1;i++)
		printf("%d %d %d\n",class_4[i].sno,class_4[i].de,class_4[i].cai);
	for(int i=0;i<=a3-1;i++)
		printf("%d %d %d\n",class_3[i].sno,class_3[i].de,class_3[i].cai);
	for(int i=0;i<=a2-1;i++)
		printf("%d %d %d\n",class_2[i].sno,class_2[i].de,class_2[i].cai);
	for(int i=0;i<=a1-1;i++)
		printf("%d %d %d\n",class_1[i].sno,class_1[i].de,class_1[i].cai);
	return 0;
}
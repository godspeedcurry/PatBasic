#include <stdio.h>
struct line
{
	int data;
	int next;
}L[100004];
struct ni
{
	int ad;
	int data;
	int next;
}final[100004];
int main(){
	int start,n,t;
	scanf("%d %d %d",&start,&n,&t);
	int addr;
	for(int i=1;i<=n;i++){
		scanf("%d",&addr);
		scanf("%d %d",&L[addr].data,&L[addr].next);
	}
	int num=1;
	while(start!=-1){
		final[num].ad=start;
		final[num].data=L[start].data;
		final[num].next=L[start].next;
		start=L[start].next;
		num++;
	}
	n=num-1;
	int flag=0;
	for(int i=1;i<=n;i++){
		if(final[i].data<0){
			if(flag==0){
				printf("%05d %d ",final[i].ad,final[i].data );
				flag=1;
			}
			else{
				printf("%05d\n",final[i].ad);
				printf("%05d %d ",final[i].ad,final[i].data );
			}	
		}
	}
	int f=0;
	for(int i=1;i<=n;i++){
		if(final[i].data>=0&&final[i].data<=t){
			if(flag||f){
				printf("%05d\n",final[i].ad);
				printf("%05d %d ",final[i].ad,final[i].data );
			}
			else{
				printf("%05d %d ",final[i].ad,final[i].data );
				f=1;
			}
			
		}
	}
	int ff=0;
	for(int i=1;i<=n;i++){
		if(final[i].data>t){
			if(flag||f||ff){
				printf("%05d\n",final[i].ad);
				printf("%05d %d ",final[i].ad,final[i].data );
			}
			else{
				printf("%05d %d ",final[i].ad,final[i].data );
				ff=1;
			}
		}
	}
	printf("-1\n");
	
	return 0;
}
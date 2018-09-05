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
	int sum=0;
	for(int i=1;i<=n/t;i++){
		for(int j=sum+t;j>=sum+1;j--){
			printf("%05d %d ",final[j].ad,final[j].data);
			if(j!=sum+1)printf("%05d\n",final[j-1].ad );
			else{
				if(i==n/t){
					if(final[sum+t].next==-1)printf("-1\n");
					else printf("%05d\n",final[sum+t].next);
				}
				else printf("%05d\n",final[sum+t*2].ad );		
			}
		}
		sum+=t;
	}
	for(int j=sum+1;j<=sum+n%t;j++){
		printf("%05d %d ",final[j].ad,final[j].data);
		if(final[j].next==-1)printf("-1\n");
		else printf("%05d\n",final[j].next );
	}
	return 0;
}
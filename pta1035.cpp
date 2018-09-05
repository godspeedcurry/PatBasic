#include <stdio.h>
#include <stdlib.h>
int t;
int compare(int a[],int b[]){//比较两个数组是否一样
	for(int i=0;i<=t-1;i++){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
void show(int a[]){//打印输出函数
	int flag=0;
	for(int j=0;j<=t-1;j++){
		if(flag==0){
			printf("%d",a[j]);
			flag=1;
		} 
		else printf(" %d",a[j]);
	}
}
void Merge(int merge[],int t,int ge){
	int ci;
	if(t%ge==0) ci=t/ge;//10个2，2一组共5组
	else ci=t/ge+1;//10个4，4一组，还多一组
	for(int q=1;q<=ci;q++){
		int start=ge*(q-1);//确定起始点，步长为ge
		if(q==ci) qsort(merge+start,t-start,sizeof(merge[0]),cmp);//最后一组个数一般少，要确定好比较的个数
		else qsort(merge+start,ge,sizeof(merge[0]),cmp);
	}
}
int main(){
	scanf("%d",&t);
	int a[t];
	int b[t];
	int sort[t];
	int merge[t];
	for(int i=0;i<=t-1;i++){
        scanf("%d",&a[i]);//original
        sort[i]=merge[i]=a[i];
    }
    for(int i=0;i<=t-1;i++){
        scanf("%d",&b[i]);//for comparing
    }
    for(int i=2;i<=t;i++){
    	qsort(sort,i,sizeof(sort[0]),cmp);
    	if(compare(sort,b)==1){
    		printf("Insertion Sort\n");
    		qsort(sort,i+1,sizeof(sort[0]),cmp);
    		show(sort);
    		return 0;
    	}   
    }
    int ge=1;
    for(int i=1;i<=t;i++){
    	ge*=2;
    	Merge(merge,t,ge);
    	if(compare(merge,b)==1){
    		ge*=2;
    		printf("Merge Sort\n");
    		Merge(merge,t,ge);
    		show(merge);
    		break;
    	}
    }
    printf("\n");
    return 0;
}
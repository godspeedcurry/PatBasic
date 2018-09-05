#include <stdio.h>
#include <stdlib.h>
int sum(int n){
  int he=0;
  while(n){
    he+=n%10;
    n/=10;
  }
  return he;
}
int cmp(const void *a,const void *b){
  
  return *(int *)a-*(int *)b;
}
int main(){
  int t;
  scanf("%d",&t);
  int emm[100005];
  int a;
  for(int i=0;i<=t-1;i++){
    scanf("%d",&a);
    emm[i]=sum(a);
  }
  qsort(emm,t,sizeof(emm[0]),cmp);
  int temp=0;
  int flag=0;
  int count=1;
  
  int sb=emm[0];
  for(int i=1;i<=t-1;i++){
    if(sb!=emm[i]){
      sb=emm[i];
       count++;
     }
  }
  printf("%d\n",count);
  for(int i=0;i<=t-1;i++){
    
  if(flag==0){
        printf("%d",emm[i]);
        temp=emm[i];
        flag=1;  
  }
  else if(flag==1&&temp!=emm[i]){
    printf(" %d",emm[i]);
    temp=emm[i];
  }
  }
  return 0;
}
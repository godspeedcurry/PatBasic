#include <stdio.h>
#include <stdlib.h>
struct wajueji{
  int number;
  int score=0;
}group[100005];
int cmp(const void *a,const void *b){
  return (*(wajueji *)b).score-(*(wajueji *)a).score; 
}
int main(){
  int t;
  scanf("%d",&t);
  int temp=t;
  while(t--){
    int a,b;
    scanf("%d%d",&a,&b);
    group[a-1].number=a;
    group[a-1].score+=b;
  }
  qsort(group,temp,sizeof(group[0]),cmp);
  printf("%d %d",group[0].number,group[0].score);
  
  
  
  return 0;
}
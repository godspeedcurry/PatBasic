#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct digit
{
	int subb;
	int flag;
}boom[10004];
int cmp(const void *a,const void *b){
	return (*(digit *)b).subb-(*(digit *)a).subb;
}
int main(){
	int t;
	cin>>t;
	int a[t+1];
	// int sub[t+1]={0};
	for(int i=1;i<=t;i++){
		cin>>a[i];
		int temp=(a[i]-i)>0?(a[i]-i):(i-a[i]);
		boom[temp].flag++;
		boom[temp].subb=temp;
	}
	qsort(boom,10002,sizeof(boom[0]),cmp);
	for(int i=0;i<=10002;i++){
		if(boom[i].flag>=2){
			cout<<boom[i].subb<<" "<<boom[i].flag<<endl;
		}
	}
	return 0;
}
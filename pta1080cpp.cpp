#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
struct test
{
	string name;
	int code;
	int qz;
	int final;
	double total;
	int tt;
	test(){
		qz=final=tt=-1;
	}
}s[30010];
bool cmp(test a,test b){
	if(a.tt!=b.tt) return a.tt>b.tt;
	else return b.name>a.name;
}
int main(){
	int p,m,n,no=0;
	string name;
	int score;
	map <string,int> q;
	cin>>p>>m>>n;
	for(int i=1;i<=p;i++){
		cin>>name>>score;
		if(score>=200&&score<=900){
			if(!q[name]){
				q[name]=++no;
				s[no].name=name;
			}
			s[q[name]].code=score;
		}
	}

	for(int i=1;i<=m;i++){
		cin>>name>>score;
		if(q[name]&& score >= 0 && score <= 100){
			s[q[name]].qz=score;
		}
	}

	for(int i=1;i<=n;i++){
		cin>>name>>score;
		if(q[name]&& score >= 0 && score <= 100){
			s[q[name]].final=score;
			if(s[q[name]].qz>s[q[name]].final)
				s[q[name]].total=0.4*s[q[name]].qz+0.6*s[q[name]].final;
			else s[q[name]].total=1.0*s[q[name]].final;
			s[q[name]].tt=s[q[name]].total+0.5;
		}	
	}
	sort(s+1,s+no+1,cmp);
	for(int i=1;i<=no;i++){
		if(s[i].tt<60)break;
		cout<<s[i].name<<' '<<s[i].code<<' '<<s[i].qz<<' '<<s[i].final<<' '<<s[i].tt<<endl;
	}
	return 0;
}
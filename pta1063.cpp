#include <bits/stdc++.h>
using namespace std;
struct nnn
{
	map<int, int > mymap;
}a[3000];
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int num;
		cin>>num;
		for(int j=1;j<=num;j++){
			int temp;
			cin>>temp;
			a[i].mymap[temp]++;
			
		}
	}
	int q;
	cin>>q;
	for(int i=1;i<=q;i++){
		int ha,w;
		cin>>ha>>w;
		int total=a[ha].mymap.size()+a[w].mymap.size();
		int rep=0;
		std::map<int, int>::iterator it;
		for(it=a[w].mymap.begin();it!=a[w].mymap.end();it++){
			if(a[ha].mymap.find(it->first)!=a[ha].mymap.end()){
				rep++;
				total--;
			}
		}
		printf("%.1lf%%\n",rep*100.0/total );
	}
	return 0;
}
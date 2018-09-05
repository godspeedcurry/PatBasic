#include <bits/stdc++.h>
using namespace std;
set <int> s[10000];
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
			s[i].insert(temp);
		}
	}
	int q;
	cin>>q;
	for(int i=1;i<=q;i++){
		int ha,w;
		cin>>ha>>w;
		int total=s[ha].size();
		int rep=0;
		std::set<int>::iterator it;
		for(it=s[w].begin();it!=s[w].end();it++){
			
			if(s[ha].find(*it)!=s[ha].end()) {
				rep++;
			}
			else{
				total++;
			}
		}

		printf("%.1lf%%\n",rep*100.0/total );
	}
	return 0;
}
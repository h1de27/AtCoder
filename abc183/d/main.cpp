#include<map>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,w;
	cin >> n >> w;
	vector<pair<int,int>>event;
	for(int i=0;i<n;i++){
		int s,t,p;
		cin >> s >> t >> p;
		event.push_back(make_pair(s,p));
		event.push_back(make_pair(t,-p));
	}
	sort(event.begin(), event.end());
	long long crr=0;
	for(auto [time,value]:event){
		crr+=value;
		if(crr>w){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
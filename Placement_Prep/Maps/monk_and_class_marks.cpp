#include<bits/stdc++.h>
using namespace std;

int main(){

	map<int, multiset<string>> marks_map;

	int n;
	cin>>n;

	for(int i=0;i<n;++i){
		int x;
		string name;
		cin>>name>>x;

		marks_map[x].insert(name);
	}

		auto current_it = (--marks_map.end());

	while(true){
		auto &marks = current_it->first;
		auto &names = current_it->second;

		for(auto &student : names){
			cout<<student<<" "<<marks<<endl;
		}
		if(current_it == marks_map.begin()) break;
		current_it--;
	}



}

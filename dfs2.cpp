#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> dinh[1005];
bool visited[1005];

void inp(){
	int x, y;
	for(int i = 0; i < m; i++){
		cin >> x >> y;
		dinh[x].push_back(y);
		dinh[y].push_back(x);
	}
	memset(visited, false , sizeof(visited));
}
void dfs(int u){
	cout << u << " ";
	visited[u] = true;
	for(int &k : dinh[u]){
		if(visited[k] == false){
			dfs(k);
		}
	}
}
int main(){
		cin >> n  >> m ;
		inp();
		dfs(5);	
	
	}
	


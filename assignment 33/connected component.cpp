void dfs(vector<vector<int>>Adj, int u, vector<bool>&V){
    //cout<<u<<endl;
	V[u]=1;
   
    for(auto v:Adj[u]){
		if(!V[v])
         dfs(Adj,v,V);
    }
}
int Solution::solve(int n, vector<vector<int> > &Edge) {
    vector<vector<int>>Adj(n+1);
    //if(!n) return 0;
    for(auto edge:Edge){
        Adj[edge[0]].push_back(edge[1]);
        Adj[edge[1]].push_back(edge[0]);
    }
    vector<bool>Visited(n+1,0);
    //
    int count=0;
    for(int i=0;i<n;i++){
        if(!Visited[i]){
             dfs(Adj, i, Visited);
             count++;
			// cout<<count<<" ";
        }
    }
    return count;
    
}


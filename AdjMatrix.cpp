#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj_Mat(n+1, vector<int>(m+1));

    for (int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj_Mat[u][v] = 1;
        adj_Mat[v][u] = 1;
    }

    for(int i = 1; i<= n; i++) {
        for(int j = 1; j<= n; j++) {
            cout<<adj_Mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
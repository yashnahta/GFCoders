#include<bits/stdc++.h>
using namespace std;
void print(int ** graph,int n,int sv,bool *visited){
  cout<<sv<<" ";
  
  visited[sv]=true;
  for(int i=0;i<n;i++){
    if(!visited[i] && graph[sv][i]){
      print(graph,n,i,visited);
    }
  }
}

int main() {
    int v,e;
    cin>>v>>e;
    int ** graph=new int *[v];
    for(int i=0;i<v;i++){
        graph[i]=new int[v];
        for(int j=0;j<v;j++){
            graph[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    bool visited[v];
    for (int i = 0; i < v; i++) {
        visited[i] = false;
    }
    print(graph,v,0,visited);
  return 0;
}
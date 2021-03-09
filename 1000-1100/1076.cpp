#include<bits/stdc++.h> 
using namespace std;

int dfs(int **m, bool visi[], int atual, int v){
    int cont=0;
    visi[atual]=1;
    for(int i=0;i<v;i++){
        if(m[atual][i]==1 && visi[i]!=1){
            cont++;
            cont+=dfs(m,visi,i,v);
        }
    }
    return cont;
}

int main(){
    int q, start, v, a;
    int x, y;
    cin >> q;
    for(int i2=0;i2<q;i2++){
        cin >> start;
        cin >> v >> a;
        int **m;
        m = new int *[v];
        for(int i=0;i<v;i++){
            m[i] = new int[v];
        }
        bool visited[v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                m[i][j]=0;
            }
            visited[i]=0;
        }
        for(int i=0;i<a;i++){
            cin >> x >> y;
            m[x][y]=1;
            m[y][x]=1;
        }
        cout << dfs(m,visited,start,v)*2 << endl;
        for(int i=0;i<v;i++){
            delete m[i];
        }
        delete m;
    }
}
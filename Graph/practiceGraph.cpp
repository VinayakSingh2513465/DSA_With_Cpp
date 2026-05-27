#include<iostream>
#include<list>
#include<vector>
#include<queue>

using namespace std;

class Graph {
    int v;
    list<int>* l;
public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }
    void addEdge(int u , int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print() {
        for (int u = 0; u < v; ++u) {
            list<int> neighbours = l[u];
            cout<<u<<" : ";
            for (int v : neighbours) {
                cout<<v<<" , ";
            }
            cout<<endl;
        }
    }

    void bfs() {
        queue<int> q;
        vector<bool> vis(v , false);
        q.push(0);
        vis[0] = true;

        while (q.size()>0) {
            int u = q.front();
            q.pop();
            cout<<u<<" ";
            list<int> neighbours = l[u]; // u----v
            for (int v: neighbours) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }
};

int main() {
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(3,4);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(5,6);
    g.bfs();
    //g.print();
    return 0;
}
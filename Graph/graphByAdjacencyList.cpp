#include<iostream>
#include<vector>
#include<list>

using namespace std;

class Graph {
    int v;
    list<int>* l;
public:
    Graph(int v) {
        this->v = v;
        l = new list<int> [v];
    }

    void addEdge(int u , int v) { // u---v
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print() {
        for (int u=0;u<v;u++) {
            list<int> neighbours = l[u];
            cout<<u<<" : ";
            for (int v : neighbours) {
                cout<<v<<" , ";
            }
            cout<<endl;
        }
    }
};

int main() {
    Graph g(5);
    // undirected
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.print();
    return 0;
}
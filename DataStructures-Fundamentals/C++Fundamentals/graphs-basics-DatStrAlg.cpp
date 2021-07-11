#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int>graphVector[], int src,int data){
    graphVector[src].push_back(data);
}

void printGraph(vector<int>graphVector[],int size){
    for(int i=0;i<size;i++){
        cout<<"Adjacency list of Vertex : "<<i<<" ";

        for(auto temp:graphVector[i]){
            cout<<" -> "<<temp;
        }
        cout<<"\n";
    }
}


int main(){

    vector<int> graph[5];

    int len=sizeof(graph)/sizeof(graph[0]);

    addEdge(graph,0,1);
    addEdge(graph,0,4);
    addEdge(graph,1,2);
    addEdge(graph,1,3);
    addEdge(graph,1,4);
    addEdge(graph,2,3);
    addEdge(graph,3,4);
    printGraph(graph,len);
}

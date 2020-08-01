#include<bits/stdc++.h> 
using namespace std;

void NewEdge(vector<int> AL[] , int u , int v){
    AL[u].push_back(v);
    AL[v].push_back(u);
    
}

void printer(vector<int> AL[], int Ver){
    for (int v = 0; v < Ver; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
             for (auto x : AL[v]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
} 


int main() {
    int V=5;
    vector<int> AL[V];
    NewEdge(AL,0,1);
    NewEdge(AL,0,4);
    NewEdge(AL,1,2);
    NewEdge(AL,1,3);
    NewEdge(AL,1,4);
    NewEdge(AL,2,3);
    NewEdge(AL,3,4);
    printer(AL,V);
    
	
	return 0;
}

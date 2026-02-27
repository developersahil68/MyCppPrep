bool isSafe(int node , int color[] , bool graph[101][101] , int n , int col){
    for(int k = 0 ; k < n ; k++){
        if(k != node && graph[k][node] == 1 && color[k] == col){
            return false;
        }
    }
    return true;
}

bool solve(int node , int color[] , int m , int N , bool graph[101][101]){
    if(node == N){
        return true;
    }

    for(int i = 1 ; i<=m ; i++){
        if(isSafe(node , color , graph , N ,i)){
            color[node] = i;
            if(solve(node+1 , color , m , N , graph)) return true;
            color[node] = 0;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101] , int m , int N){
    int color[N] = {0};
    if(solve(0 , color , m , N ,graph)) return true;
    return false;
}


// Given an integer M and an undirected graph with N vertices (zero indexed) and E edges. The goal is to determine whether the graph can be coloured with a maximum of M colors so that no two of its adjacent vertices have the same colour applied to them.
// In this context, colouring a graph refers to giving each vertex a different colour. If the colouring of vertices is possible then return true, otherwise return false.
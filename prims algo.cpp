#include <bits/stdc++.h>
using namespace std;
#define pp pair<int, pair<int,int> >//first value is cost then -- "from node" to "to node"
/*int graph[4][4] = {
    {0, 1, 0, 0},
    {1, 0, 1, 1},
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    };
    int cost[4][4] = {
    {0, 1, 0, 0},
    {1, 0, 2, 5},
    {0, 2, 0, 0},
    {0, 5, 0, 0},
    };*/
int main()
{
    priority_queue<pp, vector<pp>, greater<pp> >to;
    int graph[7][7] = {
    {0, 0, 1, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0, 1},
    {1, 1, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 1, 0},
    {1, 0, 0, 0, 1, 0, 1},
    {0, 1, 0, 0, 0, 1, 0}};
    int cost[7][7] = {
    {0, 0, 8, 0, 13, 17, 0},
    {0, 0, 20, 0, 0, 0, 6},
    {8, 20, 0, 11, 0, 0, 0},
    {0, 0, 11, 0, 12, 0, 0},
    {13, 0, 0, 12, 0, 15, 0},
    {17, 0, 0, 0, 15, 0, 18},
    {0, 6, 0, 0, 0, 18, 0}};
    
    int vertex=7;
    int visited[vertex] = {0};
    to.push({0, {6,6}});
    int x=0;
    int mincost=0;
    while (to.empty() != 1)
    {
        pair<int,pair<int, int>  >c = to.top();
        if(visited[c.second.second]==1){
            to.pop();
            continue;
        }
        else
        {
            if(x==0){ //first value will be i to i so no print
                x++;
            }
            else{
                cout << c.second.first << "->"<<c.second.second<<" = "<<c.first<<"\n";
                mincost+=c.first;
            }
            visited[c.second.second] = 1;
        
            to.pop(); 
            for (int j = 0; j < vertex; j++)
            {
                if (graph[c.second.second][j] == 1 && visited[j] == 0)
                {
                    
                    to.push({cost[c.second.second][j], {c.second.second,j}});
                }
            }
        }
        
    }
    cout<<"minimum cost of MST = "<<mincost;
}
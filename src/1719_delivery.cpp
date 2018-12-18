#include <1719_delivery.hpp>

//#define INF 0x3f3f3f3f
#define INF 100
#define MAX 201
#define HPRINT cout << __func__ << ", " << __LINE__ << endl

#if DEBUG
int n = 6, m = 10;
array<array<int, 3>, 11>  delivery_arr = { { {1, 2, 2},	// {from, to, cost},
							 	    	 {1, 3, 1},
							 	    	 {2, 4, 5},
							 	    	 {2, 5, 3},
							 	    	 {2, 6, 7},
							 	    	 {3, 4, 4},
							 	    	 {3, 5, 6},
							 	    	 {3, 6, 7},
							 	    	 {4, 6, 4},
							 	    	 {5, 6, 2},
								 	  } };
#else
int n, m;
int from, to, cost;
#endif
vector<pair<int, int>> delivery_graph[MAX];
vector<pair<int, int>> result[MAX];
//array<array<int, MAX>, MAX> dis;
int dis[MAX][MAX];
int ans[MAX][MAX];

void Delivery::dijkstra(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>,
    							greater<pair<int, int>>> pq;
	dis[start][start] = 0;
	pq.push({start, 0});
	
	while (!pq.empty())
	{
		int cur = pq.top().first;
    	int cost = pq.top().second;
        pq.pop();

        if(dis[start][cur] != cost)
        	continue;

        for (int i=0; i<delivery_graph[cur].size(); i++)
        {
        	int next = delivery_graph[cur][i].first;
            int nextCost = cost + delivery_graph[cur][i].second;

            if (dis[start][next] > nextCost)
            {
            	dis[start][next] = nextCost;
            	pq.push({next,nextCost});
            }
        }
	}

#if 0//DEBUG
	cout << endl;
    for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cout << dis[i][j] << " ";
		}
		cout << endl;
	}
#endif
}

void Delivery::Main()
{
#if DEBUG
	array<array<int, 3>, 10>  delivery_result = {{{0}}};
	for (int i=0; i<m; i++)
    {
        delivery_graph[delivery_arr[i][0]].push_back({delivery_arr[i][1], delivery_arr[i][2]});
        delivery_graph[delivery_arr[i][1]].push_back({delivery_arr[i][0], delivery_arr[i][2]});
 	}

    for(int i=0; i<m; i++)
        for(int j=0; j<delivery_graph[i].size(); j++)
            cout << i << ": " << delivery_graph[i][j].first 
        			<< ", " << delivery_graph[i][j].second << endl;
#else
    cin >> n >> m;
    for (int i=0; i<m; i++)
    {
        cin >> from >> to >> cost;
        delivery_graph[from].push_back({to, cost});
        delivery_graph[to].push_back({from, cost});
    }
#endif
    for(int i=1; i<=n; i++)
    	for(int j=1; j<=n; j++)
    		dis[i][j] = INF;

    for(int i=1; i<=n; i++)
    	dijkstra(i);

     for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n ; j++){
	        if(i == j)
	        	continue;
	        for(int k = 0 ; k < delivery_graph[i].size(); k++){
	            int nxt = delivery_graph[i][k].first;
	            cout << "****************" << endl;
	            cout << "i: " << i << " " << "j: " << j << " " << "k: " << k << ", ";
	            cout << "nxt: " << nxt << " ";
	            cout << "dis1: " << dis[i][j] << " ";
	            cout << "dis2: " << dis[j][nxt] << " ";
	            cout << "second: " << delivery_graph[i][k].second << endl;
	            cout << "****************" << endl;
	            if(dis[i][j] == dis[j][nxt] + delivery_graph[i][k].second){
	            	cout << "case" << endl;
	                ans[i][j] = nxt;
	            }
	        }
    	}
    }
    cout << endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",ans[i][j]);
        }
       cout << endl;
    }
}

void delivery_main()
{
	Delivery *d = new Delivery();
	d->Main();
	delete d;
}
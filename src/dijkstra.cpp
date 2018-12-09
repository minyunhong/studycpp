#include <dijkstra.hpp>
using namespace std;

#define INF 0x3f3f3f3f
#define MAX 20001
#define DEBUG 1
using namespace std;

#if DEBUG
int v = 5, e = 8, start = 5;
array<array<int, 3>, 8>  arr = { { {5, 2, 4},	// {from, to, cost},
							 	   {5, 4, 2},
							 	   {4, 2, 1},
							 	   {4, 3, 1},
							 	   {2, 1, 3},
							 	   {1, 4, 3},
							 	   {1, 3, 6},
							 	   {3, 4, 2}
								} };
#else
int v, e, start;
int from, to, cost;
#endif
vector<pair<int, int>> graph[MAX];

vector<int> dijkstra(int start, int vertex)
{
    vector<int> distance(vertex, INF);
    distance[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>,
    							greater<pair<int, int>>> pq;

	pq.push({start, 0});

    while (!pq.empty())
    {
    	int cur = pq.top().first;
    	int cost = pq.top().second;
        pq.pop();

        if (distance[cur] < cost)
            continue;

        for (int i = 0; i < graph[cur].size(); i++)
        {
            int next = graph[cur][i].first;
            int nextCost = cost + graph[cur][i].second;

            if (distance[next] > nextCost)
            {
                distance[next] = nextCost;
                pq.push({next, nextCost});
            }
        }
    }
    return distance;
}

void dijkstra_main()
{

#if DEBUG
	for (int i = 0; i < e; i++)
    {
        graph[arr[i][0]].push_back({arr[i][1], arr[i][2]});
 	}
#else
    cin >> v >> e >> start;
    for (int i = 0; i < e; i++)
    {
        cin >> from >> to >> cost;
        // from에서 to로 가는 cost를 저장한다.
        graph[from].push_back({to, cost});
    }
#endif

    // 0부터 시작함으로 v + 1
    vector<int> result = dijkstra(start, v + 1);

    for (int i = 1; i < v + 1; i++)
    {
        if (result[i] == INF) {
            cout << "INF" << '\n';
        } else {
            cout << result[i] << '\n';
        }
    }
}
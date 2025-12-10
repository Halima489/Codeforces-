
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    vector<int> indeg(n+1, 0);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indeg[v]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (indeg[i] == 0) q.push(i);
    }

    vector<int> dist(n+1, 0);

    while (!q.empty()) {
 int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] < dist[u] + 1) {
                dist[v] = dist[u] + 1;
            }
            indeg[v]--;
            if (indeg[v] == 0) q.push(v);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] > ans) ans = dist[i];
    }

    cout << ans << endl;
    return 0;
}

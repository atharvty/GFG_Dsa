class Solution {
    public:
        // Function to detect cycle in an undirected graph.
        bool isCycle(int V, vector < int > adj[]) {
            // Code here
            bool visited[V] = {
                0
            };

            for (int i = 0; i < V; i++) {
                if (!visited[i]) {
                    queue < pair < int, int >> q;
                    q.push(make_pair(i, -1));
                    visited[i] = true;
                    while (!q.empty()) {
                        int size = q.size();
                        while (size--) {
                            pair < int, int > temp = q.front();
                            q.pop();
                            for (auto it: adj[temp.first]) {
                                if (!visited[it]) {
                                    q.push(make_pair(it, temp.first));
                                    visited[it] = true;
                                    continue;
                                }
                                if (it != temp.second)
                                    return true;
                            }
                        }
                    }
                }

            }
            return false;
        }
};

// User function template for C++

class Solution{
    public:
    void dfs(int i, int j,vector<vector<int>> maze,string s,vector<string>& res,vector<vector<int>>& visited)
    {
      if(i == maze.size()-1 && j == maze.size()-1)
      {
        res.push_back(s);
        return;
      }
    //   cout << s << endl;
      if(i-1>=0 && maze[i-1][j] == 1 && !visited[i-1][j])
      {
        visited[i][j] =1;
        dfs(i-1, j, maze,s+'U', res, visited);
        visited[i][j] =0;
      }
      if(i+1<maze.size() && maze[i+1][j] == 1 && !visited[i+1][j])
      {
        visited[i][j] =1;
        dfs(i+1, j, maze,s+'D', res, visited);
        visited[i][j] =0;
      }
      if(j-1>=0 && maze[i][j-1] == 1 && !visited[i][j-1])
      {
        visited[i][j] =1;
        dfs(i, j-1, maze,s+'L', res, visited);
        visited[i][j] =0;
      }
      if(j+1<maze.size() && maze[i][j+1] == 1 && !visited[i][j+1])
      {
        visited[i][j] =1;
        dfs(i, j+1, maze,s+'R', res, visited);
        visited[i][j] =0;
      }
      return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<int>> visited(m.size(), vector < int > (m.size(), 0));
        if(m[0][0] == 0 || m[m.size()-1][m.size()-1] == 0)  return res;
        dfs(0, 0, m, "", res, visited);
        return res;
    }
};

    

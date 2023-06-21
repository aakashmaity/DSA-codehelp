#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isPossible(vector<vector<int>> &m, vector<vector<int>> visited, int x, int y, int n)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &m, vector<vector<int>> visited, vector<string> &ans, string path, int x, int y, int n)
    {
        // you have reach x,y here
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // 4 choices - D,L,U,R

        // Down
        int newx = x + 1;
        int newy = y;
        if (isPossible(m, visited, newx, newy, n))
        {
            path.push_back('D');
            solve(m, visited, ans, path, newx, newy, n);
            path.pop_back();
        }

        // Left
        newx = x;
        newy = y - 1;
        if (isPossible(m, visited, newx, newy, n))
        {
            path.push_back('L');
            solve(m, visited, ans, path, newx, newy, n);
            path.pop_back();
        }

        // Up
        newx = x - 1;
        newy = y;
        if (isPossible(m, visited, newx, newy, n))
        {
            path.push_back('U');
            solve(m, visited, ans, path, newx, newy, n);
            path.pop_back();
        }

        // Right
        newx = x;
        newy = y + 1;
        if (isPossible(m, visited, newx, newy, n))
        {
            path.push_back('R');
            solve(m, visited, ans, path, newx, newy, n);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;

        int srcx = 0;
        int srcy = 0;
        vector<vector<int>> visited = m; // make same size of matrix  'visited' with 'm'

        // initialise visited matrix with 0
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        string path = "";
        solve(m, visited, ans, path, srcx, srcy, n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    cout << "Enter inputs serially:" << endl;
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    Solution obj;
    vector<string> result = obj.findPath(m, n);
    sort(result.begin(), result.end());
    if (result.size() == 0)
        cout << -1;
    else
    {
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
        cout << endl;
    }
}
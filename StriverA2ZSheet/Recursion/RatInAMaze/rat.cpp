#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
string temp;

void solveMaze(vector<vector<int>> &maze, int row, int col)
{
    if (maze[row][col] == 0)
        return;
    if (row == maze.size() - 1 && col == maze.size() - 1)
    {
        ans.push_back(temp);
        return;
    }
    // first go top;
    if (row != 0 && maze[row - 1][col] != 0)
    {
        temp.push_back('U');
        maze[row][col] = 0;
        solveMaze(maze, row - 1, col);
        maze[row][col] = 1;
        temp.pop_back();
    }

    // bottom
    if (row != maze.size() - 1 && maze[row + 1][col] != 0)
    {

        temp.push_back('D');
        maze[row][col] = 0;
        solveMaze(maze, row + 1, col);
        maze[row][col] = 1;
        temp.pop_back();
    }

    // left
    if (col != 0 && maze[row][col - 1] != 0)
    {
        temp.push_back('L');
        maze[row][col] = 0;
        solveMaze(maze, row, col - 1);
        maze[row][col] = 1;
        temp.pop_back();
    }

    // right
    if (col != maze.size() - 1 && maze[row][col + 1] != 0)
    {
        temp.push_back('R');
        maze[row][col] = 0;
        solveMaze(maze, row, col + 1);
        maze[row][col] = 1;
        temp.pop_back();
    }
}

int main()
{
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 1}};

    solveMaze(maze, 0, 0);

    for (auto x : ans)
        cout << x << " ";
}
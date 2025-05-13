/*
Author: Tai Ngo
Date: 2025-05-12
Link to the problem: https://cses.fi/problemset/task/1193
Link to explained video: link-to-explained-video
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int n, m;
char maze[MAX][MAX];
bool visited[MAX][MAX];
pair<int, int> previous[MAX][MAX];
char direction_taken[MAX][MAX];

bool is_valid_pos(int x, int y) {
  // if the x, y do not go out of the maze && it isn't a wall && haven't visited
  return x >= 0 && x < n && y >= 0 && y < m && maze[x][y] != '#' &&
         !visited[x][y];
}

void bfs(int start_x, int start_y, int goal_x, int goal_y) {
  queue<pair<int, int> > q;
  // push the start position to q
  q.push(pair<int, int>(start_x, start_y));
  visited[start_x][start_y] = true;

  // x and y directions
  int x_dirs[] = {-1, 1, 0, 0}; // move x U D L R
  int y_dirs[] = {0, 0, -1, 1}; // move y U D L R
  char dir[] = {'U', 'D', 'L', 'R'};

  while (!q.empty()) {
    // get current x,y
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    // mark as it is visited
    visited[x][y] = true;

    // is goal pos?
    if (x == goal_x && y == goal_y) {
      string path;

      while (make_pair(x, y) != make_pair(start_x, start_y)) {
        path += direction_taken[x][y];
        /* Get px and py */
        std::pair<int, int> p = previous[x][y];
        int px = p.first;
        int py = p.second;

        x = px;
        y = py;
      }
      reverse(path.begin(), path.end());
      cout << "YES\n" << path.size() << "\n" << path << "\n";
      return;
    }

    for (int i = 0; i < 4; i++) {
      int next_x = x + x_dirs[i];
      int next_y = y + y_dirs[i];

      if (is_valid_pos(next_x, next_y)) {
        visited[next_x][next_y] = true;
        previous[next_x][next_y] = make_pair(x,y);
        direction_taken[next_x][next_y] = dir[i];
        q.push(pair<int, int>(next_x, next_y));
      }
    }
  }

  // there's no solution
  cout << "NO\n";
}

int main() {
  cin >> n >> m;
  int start_x, start_y, end_x, end_y;

  for (int i = 0; i < n; i++) {
    string row;
    cin >> row;
    for (int j = 0; j < m; j++) {
      maze[i][j] = row[j];

      if (row[j] == 'A') {
        start_x = i;
        start_y = j;
      } else if (row[j] == 'B') {
        end_x = i;
        end_y = j;
      }
    }
  }

  bfs(start_x, start_y, end_x, end_y);
}
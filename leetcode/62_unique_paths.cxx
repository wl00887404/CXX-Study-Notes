/**
 * 跟 70. climbing stairs 同一個概念
 *
 * m = 7, n = 3
 * (2, 1) = 1
 * (1, 2) = 1
 * (2, 2) = (2, 1) + (1, 2) = 2
 * (3, 1) = 1
 * (1, 3) = 1
 * (3, 2) = (2, 2) + (3, 1) = 3
 * (2, 3) = (2, 2) + (1, 3) = 3
 * (3, 3) = (2, 3) + (3, 2) = 6
 * (4, 1) = 1
 * (4, 2) = (3, 2) + (4, 1) = 4
 * (4, 3) = (4, 2) + (3, 3) = 10
 * (5, 1) = 1
 * (5, 2) = (4, 2) + (5, 1) = 5
 * (5, 3) = (4, 3) + (5, 2) = 15
 *
 *
 * [
 *   [0, 1, 1,  1,  1,  1,  1]
 *   [1, 2, 3,  4,  5,  6,  7]
 *   [1, 3, 6, 10, 15, 21, 28]
 * ]
 */

class Solution {
 public:
  int uniquePaths(int m, int n) {
    int grid[m][n];
    for (int i = 0; i < m; i++) grid[i][0] = 1;
    for (int j = 0; j < n; j++) grid[0][j] = 1;

    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
      }
    }

    return grid[m - 1][n - 1];
  }
};
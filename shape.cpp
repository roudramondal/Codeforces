#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int max_x = 0, max_y = 0;
        vector<pair<int, int>> operations(n);

        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            operations[i] = {x, y};
            max_x = max(max_x, x + m - 1);
            max_y = max(max_y, y + m - 1);
        }
        vector<vector<int>> grid(max_x + 1, vector<int>(max_y + 1, 0));
        for (const auto& op : operations)
         {
            int x = op.first, y = op.second;
            for (int dx = 0; dx < m; ++dx) 
            {
                for (int dy = 0; dy < m; ++dy)
                 {
                    grid[x + dx][y + dy] = 1;
                }
            }
        }

        
        int perimeter = 0;
        for (int i = 0; i <= max_x; ++i)
         {
            for (int j = 0; j <= max_y; ++j)
             {
                if (grid[i][j] == 1) 
                {
                
                    if (i == 0 || grid[i - 1][j] == 0) perimeter++;
                    if (j == 0 || grid[i][j - 1] == 0) perimeter++; 
                    if (i == max_x || grid[i + 1][j] == 0) perimeter++; 
                    if (j == max_y || grid[i][j + 1] == 0) perimeter++;
                }
            }
        }

        cout << perimeter << "\n";
    }

    return 0;
}

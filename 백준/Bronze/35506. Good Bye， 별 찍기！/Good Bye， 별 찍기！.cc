#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int rows = 2 * n;
    int cols = 4 * n + 2;
    
    vector<string> grid(rows, string(cols, ' '));
    
    for (int r = 0; r < rows; r++) {
        int diag_col = (2 * n - 1) - r;
        grid[r][diag_col] = '*';
        
        int rr = (r < n) ? r : (2 * n - 1 - r);
        int heart_left  = 3 * n - rr;
        int heart_right = 3 * n + 2 + rr;
        grid[r][heart_left]  = '*';
        grid[r][heart_right] = '*';
    }
    
    for (int r = 0; r < rows; r++) {
        cout << grid[r] << "\n";
    }
    
    return 0;
}
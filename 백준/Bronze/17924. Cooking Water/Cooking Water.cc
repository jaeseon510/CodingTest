#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Initialize max_start and min_end with the extreme opposites
    int max_start = 0;
    int min_end = 1000;

    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        // Update the maximum of the start times
        max_start = max(max_start, a);
        // Update the minimum of the end times
        min_end = min(min_end, b);
    }

    // If max_start is less than or equal to min_end, there's a common valid time T
    if (max_start <= min_end) {
        cout << "gunilla has a point" << endl;
    } else {
        cout << "edward is right" << endl;
    }

    return 0;
}

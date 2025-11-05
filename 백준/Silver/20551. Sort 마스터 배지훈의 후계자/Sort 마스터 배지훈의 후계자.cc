#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int binary_search_first_occurrence(const vector<int>& sorted_array, int target) {
    int low = 0, high = sorted_array.size() - 1, result = -1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (sorted_array[mid] < target)
            low = mid + 1;
        else if (sorted_array[mid] > target)
            high = mid - 1;
        else {
            result = mid;
            high = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    vector<int> A(N);
    
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    
    vector<int> queries(M);
    for (int i = 0; i < M; i++)
        scanf("%d", &queries[i]);
    
    sort(A.begin(), A.end());
    
    for (int D : queries) {
        printf("%d\n", binary_search_first_occurrence(A, D));
    }
    
    return 0;
}

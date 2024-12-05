#include <iostream>
#include <cmath> // For abs
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < N; i++) {
        primaryDiagonalSum += A[i][i];        // Primary diagonal: A[i][i]
        secondaryDiagonalSum += A[i][N - i - 1]; // Secondary diagonal: A[i][N-i-1]
    }

    // Compute the absolute difference
    int result = abs(primaryDiagonalSum - secondaryDiagonalSum);

    // Output the result
    cout << result << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N, M;
        cin >> N >> M;

        
        if (N <= 0 || M <= 0) break;

        if (N > M) swap(N, M);

        int sum = 0;

   
        for (int i = N; i <= M; ++i) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}

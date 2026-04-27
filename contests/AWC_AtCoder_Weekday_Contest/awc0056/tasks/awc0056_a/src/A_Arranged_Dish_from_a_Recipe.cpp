#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<long long int> A(N,0);
    for (auto& e: A) {
        cin>>e;
    }
    long long int score {};
    for (int j {}; j < M; j += 1) {
        int B {};
        long long int S {};
        cin>>B>>S;
        score += A[B-1]+S;
    }
    cout<<score<<endl;
    return EXIT_SUCCESS;
}
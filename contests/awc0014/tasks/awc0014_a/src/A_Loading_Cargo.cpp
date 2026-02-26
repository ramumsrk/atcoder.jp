#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {};
    long long int R {}, T {};
    cin>>N>>R>>T;
    vector<long long int> P(N,0);
    for (auto& p : P) {
        cin>>p;
    }
    for (int i {}; i < N; i += 1) {
        if (
            P[i] == R
            &&
            P[i] <= T
        ) {
            cout<<P[i]<<' ';
        }
    }
    cout<<endl;
    return EXIT_SUCCESS;
}

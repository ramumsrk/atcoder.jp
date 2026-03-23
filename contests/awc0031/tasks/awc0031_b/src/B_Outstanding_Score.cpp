#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, T {};
    cin>>N>>T;
    vector<vector<long long int>> S(T, vector<long long int>(N,0));
    for (int j {}; j < T; j += 1) {
        for (auto& s : S[j]) {
            cin>>s;
        }
    }
    return EXIT_SUCCESS;
}
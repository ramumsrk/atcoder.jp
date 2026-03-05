#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    vector<int> S(N,0);
    for (auto& s : S) {
        cin>>s;
    }
    int passed {};
    for (int i {}; i < N; i += 1) {
        if (S[i] >= K) {
            passed += 1;
        }
    }
    cout<<passed<<endl;
    return EXIT_SUCCESS;
}

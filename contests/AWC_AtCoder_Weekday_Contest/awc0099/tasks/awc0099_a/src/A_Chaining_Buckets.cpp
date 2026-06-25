#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_chaining_buckets(
    const int& N,
    __int128_t const& W
) -> int {
    vector<long long int> C(N,0);
    for (auto& c : C) {
        cin>>c;
    }
    __int128_t SC {};
    int buckets {};
    for (int i {}; i < N; i += 1) {
        SC += C[i];
        if (SC <= W) {
            buckets = i+1;
        } else {
            break;
        }
    }
    return buckets;
}

auto
main(void) -> int {
    int N {};
    long long int w {};
    cin>>N>>w;
    // function call
    int buckets {a_chaining_buckets(N, w)};
    cout<<buckets<<endl;
    return EXIT_SUCCESS;
}
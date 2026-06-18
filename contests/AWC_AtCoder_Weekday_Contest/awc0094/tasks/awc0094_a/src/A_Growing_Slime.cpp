#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
a_growing_slime(
    int const& N,
    long long int W
) -> __int128_t {
    vector<long long int> V(N,0);
    for (auto& v : V) {
        cin>>v;
    }
    __int128_t w {W};
    for (const auto& v : V) {
        if (v <= w) {
            w += v;
        }
    }
    return w;
}

auto
main(void) -> int {
    int N {};
    long long int W {};
    cin>>N>>W;
    // function call
    __int128_t slime_strength {a_growing_slime(N, W)};
    cout<<static_cast<long long int>(slime_strength)<<endl;
    return EXIT_SUCCESS;
}
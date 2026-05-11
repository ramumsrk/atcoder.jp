#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {}, Q {};
    cin>>N>>Q;
    vector<long long int> W(N,0);
    for (auto& w : W) {
        cin>>w;
    }
    for (int q {}; q < Q; q += 1) {
        int L {}, R {};
        long long int D {};
        cin>>L>>R>>D;
        for (int l {L-1}; l < R; l += 1) {
            W[l] -= D;
        }
    }
    int zero_price_items {};
    for (const auto& w : W) {
        if (w <= 0) {
            zero_price_items += 1;
        }
    }
    cout<<zero_price_items<<endl;
    return EXIT_SUCCESS;
}
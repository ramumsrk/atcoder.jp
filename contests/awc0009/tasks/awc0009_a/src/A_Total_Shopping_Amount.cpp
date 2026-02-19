#include <cstdlib>
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::accumulate;
using std::begin;
using std::end;

auto
main(void) -> int {
    int K {};
    long long int M {};
    cin>>K>>M;
    vector<int> L(K,0);
    for (auto& l : L) {
        cin>>l;
    }
    auto S = accumulate(begin(L), end(L), int {});
    if (S % M == 0) {
        cout<<0<<endl;
    } else {
        cout<<(S % M)<<endl;
    }
    return EXIT_SUCCESS;
}
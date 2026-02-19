#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::max_element;
using std::min_element;
using std::begin;
using std::end;

auto
main(void) -> int {
    int N {}, Q {};
    cin>>N>>Q;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    for (int q {}; q < Q; q += 1) {
        int L {}, R {};
        cin>>L>>R;
        if (R != L) {
            auto from = begin(A)+(L-1);
            auto to = begin(A)+R;
            auto max {*max_element(from, to)};
            auto min {*min_element(from, to)};
            cout<<(max - min)<<endl;
        } else {
            cout<<0<<endl;
        }
    }
    return EXIT_SUCCESS;
}
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::max_element;
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
        vector<long long int> a(0,0);
        for (int l {L-1}; l < R; l += 1) {
            a.push_back(A[l]);
        }
        cout<<*max_element(begin(a), end(a))<<endl;
    }
    return EXIT_SUCCESS;
}
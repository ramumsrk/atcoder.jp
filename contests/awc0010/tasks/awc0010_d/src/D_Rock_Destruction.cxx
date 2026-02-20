#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::begin;
using std::end;

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    vector<long long int> H(N,0);
    for (auto& h : H) {
        cin>>h;
    }
    int turns {};
    sort(begin(H), end(H));
    for (int i {}; i <= (N-K)-1; i += 1) {
        turns += H[i];
    }
    cout<<(turns+K)<<endl;
    return EXIT_SUCCESS;
}
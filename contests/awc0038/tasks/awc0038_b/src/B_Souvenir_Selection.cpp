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
    vector<long long int> D(N,0);
    for (auto& d : D) {
        cin>>d;
    }
    sort(begin(D), end(D));
    long long int result {};
    for (int i {K}; i < N; i += 1) {
        result += D[i];
    }
    cout<<result<<endl;
    return EXIT_SUCCESS;
}
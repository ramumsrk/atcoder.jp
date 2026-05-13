#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::min_element;
using std::max_element;
using std::begin;
using std::endl;

auto
b_farm_partitioning(
    const int& N,
    int const& M,
    const vector<long long int>& A
) -> long long int {
    vector<long long int> v(0,0);
    for (int m {}; m < M; m += 1) {
        int L {}, R {};
        cin>>L>>R;
        int long long productivity {};
        for (int l {L-1}; l < R; l += 1) {
            productivity += A[l];
        }
        v.push_back(productivity);
    }
    long long int result {*max_element(begin(v), end(v)) - *min_element(begin(v), end(v))};
    return result;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    // function call
    long long int result {b_farm_partitioning(N, M, A)};
    cout<<result<<endl;
    return EXIT_SUCCESS;
}
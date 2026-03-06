#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>

using std::sort;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::abs;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> V(N,0);
    for (auto& v : V) {
        cin>>v;
    }
    sort(begin(V), end(V));
    long long int sum_abs_diff {};
    for (int i {}; i <= N-2; i += 1) {
        sum_abs_diff += abs(V[i+1] - V[i]);
    }
    cout<<sum_abs_diff<<endl;
    return EXIT_SUCCESS;
}
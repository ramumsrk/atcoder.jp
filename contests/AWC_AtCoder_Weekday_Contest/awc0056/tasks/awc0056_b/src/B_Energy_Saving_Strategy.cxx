#include <iostream>
#include <vector>
#include <cstdlib>
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
    vector<long long int> A(N,0);
    for (auto& e : A) {
        cin>>e;
    }
    sort(begin(A), end(A));
    long long int power_consumption {};
    for (int i {}; i < N; i += 1) {
        if (i <= ((N-K)-1)) {
            power_consumption += A[i];
        } else {
            power_consumption += (A[i]/2);
        }
    }
    cout<<power_consumption<<endl;
    return EXIT_SUCCESS;
}
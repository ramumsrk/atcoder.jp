#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::accumulate;

auto
a_correcting_the_household_account_book(
    const int& N,
    int const& Q
) -> void {
    long long int account_balance {};
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
        account_balance += a;
    }
    for (int j {}; j < Q; j += 1) {
        int D {};
        cin>>D;
        account_balance -= A[D-1];
        A[D-1] = 0;
        cout<<account_balance<<endl;
    }
}

auto
main(void) -> int {
    int N {}, Q {};
    cin>>N>>Q;
    // function call
    a_correcting_the_household_account_book(N, Q);
    return EXIT_SUCCESS;
}
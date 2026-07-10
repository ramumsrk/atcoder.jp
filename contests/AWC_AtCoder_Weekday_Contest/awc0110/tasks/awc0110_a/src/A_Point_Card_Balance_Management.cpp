#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::max;

auto
a_point_card_balance_management(
    const int& N,
    int const& M
) -> void {
    vector<__int128_t> S(N,0);
    long long int s {};
    for (int i {}; i < N; i += 1) {
        cin>>s;
        S[i] = s;
    }
    for (int j {}; j < M; j += 1) {
        int T {};
        long long int V {};
        cin>>T>>V;
        S[T-1] = max(S[T-1]+V, static_cast<__int128_t>(0));
    }
    for (const auto& s : S) {
        cout<<static_cast<long long int>(s)<<' ';
    }
    cout<<endl;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    // function call
    a_point_card_balance_management(N, M);
    return EXIT_SUCCESS;
}

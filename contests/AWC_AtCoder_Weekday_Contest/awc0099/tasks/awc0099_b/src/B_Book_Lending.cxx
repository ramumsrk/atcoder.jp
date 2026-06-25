#include <iostream>
#include <cstdlib>
#include <vector>
#include <utility>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::pair;

auto
b_book_lending(
    const int& N,
    int const& M
) -> void {
    vector<pair<long long int, long long int>> SR(M,{0,0});
    for (auto& sr : SR) {
        cin>>sr.first>>sr.second;
    }
    __int128_t interestingness {};
    vector<long long int> T(N,0);
    for (auto& t : T) {
        cin>>t;
        for (int i {}; i < M; i += 1) {
            if (t >= SR[i].second) {
                interestingness += SR[i].first;
            }
        }
    }
    cout<<static_cast<long long int>(interestingness)<<endl;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    // function call
    b_book_lending(N, M);
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
c_team_flag_colors(
    const int& N,
    int const& M
) -> int {
    int distinct_flag_colors {};
    for (int i {}; i < M; i += 1) {
        ;
    }
    return distinct_flag_colors;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    // function call
    int distinct_flag_colors {c_team_flag_colors(N, M)};
    return EXIT_SUCCESS;
}
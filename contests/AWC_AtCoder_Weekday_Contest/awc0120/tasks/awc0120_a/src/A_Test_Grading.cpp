#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_test_grading(
    const int& N,
    int const& K
) -> void {
    for (int i {}; i < N; i += 1) {
        int M {};
        cin>>M;
        int eq_or_gt_than_K_count {};
        for (int j {}; j < M; j += 1) {
            int S {};
            cin>>S;
            if (S >= K) {
                eq_or_gt_than_K_count += 1;
            }
        }
        cout<<eq_or_gt_than_K_count<<endl;
    }
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    // function call
    a_test_grading(N, K);
    return EXIT_SUCCESS;
}

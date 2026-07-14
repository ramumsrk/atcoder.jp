#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::max;

auto
a_longest_streak_of_hot_days(
    const int& N,
    int const& K
) -> int {
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    int max_days {}, number_of_days {};
    for (int i {}; i < N; i += 1) {
        if (A[i] >= K) {
            number_of_days += 1;
        } else {
            max_days = max(max_days, number_of_days);
            number_of_days = 0;
        }
    }
    return max_days;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    int max_days {a_longest_streak_of_hot_days(N, K)};
    cout<<max_days<<endl;
    return EXIT_SUCCESS;
}

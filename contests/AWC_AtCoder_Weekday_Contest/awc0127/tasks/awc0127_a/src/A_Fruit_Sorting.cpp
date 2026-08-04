#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;

auto
a_fruit_sorting(
    const int& N,
    const long long int& K
) -> __float128 {
    long long int S {};
    int S_count {};
    __float128 S_sum {};
    for (int i {}; i < N; i += 1) {
        cin>>S;
        if (S >= K) {
            S_sum += S;
            S_count += 1;
        }
    }
    return S_count == 0 ? -1 : S_sum/S_count;
}

auto
main(void) -> int {
    int N {};
    long long int K {};
    cin>>N>>K;
    // function call
    __float128 avg_sugar_content {a_fruit_sorting(N, K)};
    if (avg_sugar_content == -1) {
        cout<<-1<<endl;
    } else {
        cout<<fixed<<static_cast<long double>(avg_sugar_content)<<endl;
    }
    return EXIT_SUCCESS;
}
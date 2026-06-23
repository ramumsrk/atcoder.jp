#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::max;

auto
b_sales_analysis(
    const int& N,
    int const& K
) -> long long int {
    vector<long long int> T(N,0);
    for (auto& t : T) {
        cin>>t;
    }
    long long int avg_sales {}, sum_sales {};
    for (int i {}; i < K; i += 1) {
        sum_sales += T[i];
    }
    avg_sales = sum_sales/K;
    long long int current_max_sales {avg_sales};
    for (int i {K}; i < N; i += 1) {
        sum_sales += T[i];
        sum_sales -= T[i-K];
        avg_sales = sum_sales / K;
        current_max_sales = max(avg_sales, current_max_sales);
    }
    return current_max_sales*1000;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    // function call
    long long int current_max_sales {b_sales_analysis(N, K)};
    cout<<current_max_sales<<endl;
    return EXIT_SUCCESS;
}
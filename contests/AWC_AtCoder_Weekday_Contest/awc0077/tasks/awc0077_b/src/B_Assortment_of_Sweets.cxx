#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::max;

auto
b_assortment_of_sweets(
    const int& N,
    int const& M,
    const int& K
) -> int {}

auto
main(void) -> int {
    int N {}, M {}, K {};
    cin>>N>>M>>K;
    int max_total_satisfaction {b_assortment_of_sweets(N, M, K)};
    cout<<max_total_satisfaction<<endl;
    return EXIT_SUCCESS;
}
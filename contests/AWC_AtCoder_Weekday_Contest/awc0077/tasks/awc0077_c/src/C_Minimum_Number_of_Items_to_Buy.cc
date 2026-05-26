#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
c_minimum_number_of_items_to_buy(
    const int& N,
    int const& S
) -> int {}

auto
main(void) -> int {
    int N {}, S {};
    cin>>N>>S;
    int min_items {c_minimum_number_of_items_to_buy(N, S)};
    return EXIT_SUCCESS;
}
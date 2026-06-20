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
c_tallest_at_the_moment(
    const int& N
) -> void {
    vector<pair<long long int, long long int>> HL(N,{0,0});
    for (auto& hl : HL) {
        cin>>hl.first>>hl.second;
    }
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    // function call
    c_tallest_at_the_moment(N);
    return EXIT_SUCCESS;
}
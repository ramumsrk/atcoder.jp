#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::min;
using std::vector;
using std::min_element;
using std::begin;
using std::end;

auto
a_adjusting_the_weight_of_apples(
    const int& N,
    const long long int& R
) -> __int128_t {
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
        a += R;
    }
    long long int min_A {*min_element(begin(A), end(A))};
    __int128_t min_total_A {};
    for (const auto& a : A) {
        if (a > min_A) {
            min_total_A += (a - min_A);
        }
    }
    return min_total_A;
}

auto
main(void) -> int {
    int N {};
    long long int R {};
    cin>>N>>R;
    __int128_t min_total_A {a_adjusting_the_weight_of_apples(N, R)};
    cout<<static_cast<long long int>(min_total_A)<<endl;
    return EXIT_SUCCESS;
}
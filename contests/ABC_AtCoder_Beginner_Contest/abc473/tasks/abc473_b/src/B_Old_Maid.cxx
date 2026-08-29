#include <iostream>
#include <cstdlib>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::map;

auto
b_old_maid(
    const int& N
) -> int {
    map<int,int> digit_count;
    int digit {};
    for (int i {}; i < N; i += 1) {
        cin>>digit;
        if (! digit_count.contains(digit)) {
            digit_count[digit] = 1;
        } else {
            digit_count[digit] += 1;
        }
    }
    int digits_sum {};
    for (const auto& [k, v] : digit_count) {
        if (digit_count[k] == 1) {
            digits_sum += k;
        } else if (digit_count[k]%2 == 0) {
            digits_sum += 0;
        } else if (digit_count[k] %2 != 0) {
            digits_sum += k;
        }
    }
    return digits_sum;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    int digits_sum {b_old_maid(N)};
    cout<<digits_sum<<endl;
    return EXIT_SUCCESS;
}
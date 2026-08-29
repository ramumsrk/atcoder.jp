#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_second_half_sum(
    const int& N
) -> int {
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    int second_half_sum {};
    for (int i {N/2}; i < N; i += 1) {
        second_half_sum += A[i];
    }
    return second_half_sum;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    int second_half_sum {a_second_half_sum(N)};
    cout<<second_half_sum<<endl;
    return EXIT_SUCCESS;
}
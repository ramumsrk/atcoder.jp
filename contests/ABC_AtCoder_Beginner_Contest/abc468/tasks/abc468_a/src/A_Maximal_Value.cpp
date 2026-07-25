#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_maximal_value(
    const int& N
) -> int {
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    int i {};
    for (int j {1}; j <= N-2; j += 1) {
        if (
            (A[j] > A[j-1])
            &&
            (A[j] > A[j+1])
        ) {
            i += 1;
        }
    }
    return i;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    int i {a_maximal_value(N)};
    cout<<i<<endl;
    return EXIT_SUCCESS;
}
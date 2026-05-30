#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_mod_while_positive(
    const int& N,
    int M
) -> int {
    int operations, x {};
    while (M != 0) {
        x = N%M;
        operations += 1;
        M = x;
    }
    return operations;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    int operations {a_mod_while_positive(N, M)};
    cout<<operations<<endl;
    return EXIT_SUCCESS;
}
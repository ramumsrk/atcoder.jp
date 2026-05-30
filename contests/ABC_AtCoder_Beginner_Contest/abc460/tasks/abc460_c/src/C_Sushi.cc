#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
c_sushi(
    const int& N,
    int const& M
) -> int {
    int max_sushi {};
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    int max_sushi {c_sushi(N, M)};
    cout<<max_sushi<<endl;
    return EXIT_SUCCESS;
}
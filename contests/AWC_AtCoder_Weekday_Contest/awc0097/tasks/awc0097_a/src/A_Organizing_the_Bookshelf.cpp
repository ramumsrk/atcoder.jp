#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_organizing_the_bookshelf(
    const int& N,
    long long int const& W
) -> void {
    vector<long long int> L(N,0);
    for (auto& l : L) {
        cin>>l;
    }
}

auto
main(void) -> int {
    int N {};
    long long int W {};
    cin>>N>>W;
    // function call
    a_organizing_the_bookshelf(N, W);
    return EXIT_SUCCESS;
}
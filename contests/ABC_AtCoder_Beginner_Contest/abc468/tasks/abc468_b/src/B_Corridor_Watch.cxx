#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

auto
b_corridor_watch(
    const int& M,
    int const& D
) -> int {
    string S {};
    cin>>S;
    int not_watched_cells {};
    return not_watched_cells;
}

auto
main(void) -> int {
    int M {}, D {};
    cin>>M>>D;
    int not_watched_cells {b_corridor_watch(M, D)};
    cout<<not_watched_cells<<endl;
    return EXIT_SUCCESS;
}
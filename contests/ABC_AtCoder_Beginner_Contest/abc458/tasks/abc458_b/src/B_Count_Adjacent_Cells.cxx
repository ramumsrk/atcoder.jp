#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
b_count_adjacent_cells(
    const int& H,
    int const& W
) -> void {
    for (int i {1}; i <= H; i += 1) {
        for (int j {1}; j <= W; j += 1) {
            cout<<'('<<i<<','<<j<<')'<<' ';
        }
        cout<<endl;
    }
}

auto
main(void) -> int {
    int H {}, W {};
    cin>>H>>W;
    // function call
    b_count_adjacent_cells(H, W);
    return EXIT_SUCCESS;
}
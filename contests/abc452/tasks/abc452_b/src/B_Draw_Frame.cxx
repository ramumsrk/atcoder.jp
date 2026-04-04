#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int H {}, W {};
    cin>>H>>W;
    for (int h {}; h < H; h += 1) {
        for (int w {}; w < W; w += 1) {
            if (h == 0 || h == H-1){
                cout<<'#';
            } else if (
                (w ==0 || w == W-1)
                &&
                (h != 0 || h != H-1)
            ) {
                cout<<'#';
            } else {
                cout<<'.';
            }
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}
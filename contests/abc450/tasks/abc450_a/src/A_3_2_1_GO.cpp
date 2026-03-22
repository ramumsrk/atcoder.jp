#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    cin>>N;
    if (N == 1) {
        cout<<1<<endl;
    } else {
        for (int i {N}; i >= 1; i -= 1) {
            if (i != 1) {
                cout<<i<<',';
            } else {
                cout<<i;
            }
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}
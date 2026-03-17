#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int H {}, W {}, Q {};
    cin>>H>>W>>Q;
    for (int q {}; q < Q; q += 1) {
        int T {}, R {}, C {};
        cin>>T;
        if (T == 1) {
            cin>>R;
            cout<<(R*W)<<endl;
            H -= R;
        } else if (T == 2) {
            cin>>C;
            cout<<(C*H)<<endl;
            W -= C;
        }
    }
    return EXIT_SUCCESS;
}
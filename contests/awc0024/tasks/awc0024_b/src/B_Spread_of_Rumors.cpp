#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, M {}, K {};
    cin>>N>>M>>K;
    int students {};
    int prev_A {}, prev_B {};
    for (int m {}; m < M; m += 1) {
        int A {}, B {};
        cin>>A>>B;
        if (
            (A >= 1 && A <= K)
            ||
            (B >= 1 && B <= K)
        ) {
            students += 2;
        }
        if (
            (A == prev_A || A == prev_B)
            ||
            (B == prev_B || B == prev_A)
        ) {
            students += 1;
        }
        // cout<<"A: "<<A<<" B: "<<B<<" prev_A: "<<prev_A<<" prev_B: "<<prev_B<<" students: "<<students<<endl;
        prev_A = A;
        prev_B = B;
    }
    cout<<students<<endl;
    return EXIT_SUCCESS;
}

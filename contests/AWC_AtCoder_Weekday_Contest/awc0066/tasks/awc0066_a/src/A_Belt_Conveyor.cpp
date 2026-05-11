#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {}, Q {};
    cin>>N>>Q;
    vector<long long int> A(N,0);
    for (auto& e : A) {
        cin>>e;
    }
    if (N == 1) {
        int button {};
        cin>>button;        
        A[button-1] = 0;
    } else {
        for (int q {}; q < Q; q += 1) {
            int button {};
            cin>>button;
            button -= 1;
            if (button == 0) {
                A[button+1] += A[button];
                A[button] = 0;
            } else if (button == N-1) {
                A[button] = 0;
            } else {
                A[button+1] += A[button];
                A[button] = 0;
            }
        }
    }
    for (const auto& e : A) {
        cout<<e<<' ';
    }cout<<endl;
    return EXIT_SUCCESS;
}
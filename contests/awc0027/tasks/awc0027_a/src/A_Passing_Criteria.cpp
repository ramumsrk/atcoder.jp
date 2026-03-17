#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::abs;

auto
main(void) -> int {
    int N {}, T {}, S {};
    cin>>N>>S>>T;
    vector<int> A(N,0);
    int students {};
    for (auto& a : A) {
        cin>>a;
    }
    for (int i {}; i < N; i += 1) {
        if ((abs(A[i]-S)) <= T) {
            students += 1;
        }
    }
    cout<<students<<endl;
    return EXIT_SUCCESS;
}
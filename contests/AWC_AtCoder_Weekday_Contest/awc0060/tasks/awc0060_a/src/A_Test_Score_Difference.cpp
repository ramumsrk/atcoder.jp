#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {}, X {};
    cin>>N>>X;
    vector<int> A(N,0);
    for (auto& e : A) {
        cin>>e;
    }
    int total_frustration {};
    for (int i {0}; i < N; i += 1) {
        if (A[i] > X) {
            total_frustration += A[i]-X;
        } else {
            total_frustration += 0;
        }
    }
    cout<<total_frustration<<endl;
    return EXIT_SUCCESS;
}
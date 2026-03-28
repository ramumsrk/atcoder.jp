#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<int> deptA(M,0);
    vector<int> deptB(M,0);
    for (int n {}; n < N; n += 1) {
        int eA {}, eB {};
        cin>>eA>>eB;
        deptA[eA-1] += 1;
        deptB[eB-1] += 1;
    }
    for (int m {}; m < M; m += 1) {
        cout<<deptB[m]-deptA[m]<<endl;
    }
    return EXIT_SUCCESS;
}
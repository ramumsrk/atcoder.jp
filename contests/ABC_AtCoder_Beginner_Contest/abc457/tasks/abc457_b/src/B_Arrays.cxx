#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<vector<int>> A(N, vector<int>(0,0));
    for (int i {}; i < N; i += 1) {
        int L {};
        cin>>L;
        vector<int> v(L,0);
        for (auto& e : v) {
            cin>>e;
        }
        A[i] = v;
    }
    int X {}, Y {};
    cin>>X>>Y;
    cout<<A[X-1][Y-1]<<endl;
    return EXIT_SUCCESS;
}
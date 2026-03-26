#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<int> P(N-1,0);
    for (auto& p : P) {
        cin>>p;
    }
    int stations {};
    for (int i {}; i <= N-1; i += 1) {
        if (P[i] == N) {
            stations += 1;
            break;
        } else {
            stations += 1;
        }
    }
    cout<<((stations-1)+2)<<endl;
    return EXIT_SUCCESS;
}
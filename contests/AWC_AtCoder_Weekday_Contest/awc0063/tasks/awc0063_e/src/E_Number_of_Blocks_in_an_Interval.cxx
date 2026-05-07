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
    vector<long long int> C(N,0);
    for (auto& c : C) {
        cin>>c;
    }
    for (int q {}; q < Q; q += 1) {
        int T {};
        cin>>T;
        int L {}, R {};
        if (T == 1) {
            int X {};
            cin>>L>>R>>X;
            for (int l {L-1}; l < R; l += 1) {
                C[l] = X;
            }
        } else if (T == 2) {
            cin>>L>>R;
            int groups_count {};
            for (int l {L-1}, r {l+1}; l < R; l += 1) {
                while (r < R-1 && C[l] == C[r]) {
                    r += 1;
                }
                l = r;
                r = l+1;
                groups_count += 1;
            }
            cout<<groups_count<<endl;
        }
    }
    return EXIT_SUCCESS;
}
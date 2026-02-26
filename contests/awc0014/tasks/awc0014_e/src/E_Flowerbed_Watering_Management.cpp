#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    long long int N {}, Q {};
    cin>>N>>Q;
    vector<int> C(N,0);
    for (auto& c : C) {
        cin>>c;
    }
    for (int q {}; q < Q; q += 1) {
        int qt {};
        cin>>qt;
        int l {}, r {};
        if (qt == 1) {
            int v {};
            cin>>l>>r>>v;
            for (int i {l-1}; i <= r-1; i += 1) {
                C[i] += v;
            }
        } else if (qt == 2) {
            int total {};
            cin>>l>>r;
            for (int i {l-1}; i <= r-1; i += 1) {
                total += C[i];
            }
            cout<<total<<endl;
        }
    }
    return EXIT_SUCCESS;
}
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
    vector<long long int> S(N,0);
    for (int q {}; q < Q; q += 1) {
        int t {};
        cin>>t;
        if (t == 1) {
            int a {}, b {};
            long long int v {};
            cin>>a>>b>>v;
            S[a-1] -= v;
            S[b-1] += v;
        } else if (t == 2) {
            int L {}, R {}, students_count {}, x {};
            cin>>x>>L>>R;
            for (int l {L-1}; l < R; l += 1) {
                if (S[l] > S[x-1]) {
                    students_count += 1;
                }
            }
            cout<<students_count<<endl;
        } else if (t == 3) {
            int L {}, R {};
            long long int v {};
            cin>>L>>R>>v;
            for (int l {L-1}; l < R; l += 1) {
                S[l] += v;
            }
        }
    }
    return EXIT_SUCCESS;
}
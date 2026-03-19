#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, Q {};
    cin>>N>>Q;
    vector<long long int> V(N,0);
    for (auto& v : V) {
        cin>>v;
    }
    for (int q {}; q < Q; q += 1) {
        int i {};
        cin>>i;
        if (i == 1) {
            int a {}, b {};
            cin>>a>>b;
            if (V[a-1] != 0) {
                V[b-1] += V[a-1];
                V[a-1] = 0;
            }
        } else if (i == 2) {
            int c {};
            cin>>c;
            cout<<V[c-1]<<endl;
        }
    }
    return EXIT_SUCCESS;
}
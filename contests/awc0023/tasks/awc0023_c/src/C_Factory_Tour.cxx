#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<long long int> T(N,0);
    for (auto& t : T) {
        cin>>t;
    }
    for (int m {}; m < M; m += 1) {
        long long int S {};
        int L {}, R {};
        cin>>S>>L>>R;
        long long int time_in_min {};
        for (int l {L-1}; l <= R-1; l += 1) {
            time_in_min += T[l];
        }
        cout<<(time_in_min+S)<<endl;
    }
    return EXIT_SUCCESS;
}
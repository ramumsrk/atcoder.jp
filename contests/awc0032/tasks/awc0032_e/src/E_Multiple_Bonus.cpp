#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    // Employees
    int N {};
    // Operations
    int Q {};
    cin>>N>>Q;
    // Evaluation points
    vector<long long int> S(N,0);
    for (auto& s : S) {
        cin>>s;
    }
    for (int q {}; q < Q; q += 1) {
        int t {};
        cin>>t;
        if (t == 1) {
            int k {};
            long long int v {};
            cin>>k>>v;
            for (int i {}; i <= N-1; i += 1) {
                if (i%k == 0) {
                    S[i] += v;
                }
            }
        } else if (t == 2) {
            int x {};
            cin>>x;
            long long int sum {};
            for (int i {}; i < x; i += 1) {
                sum += S[i];
            }
            cout<<sum<<endl;
        }
    }
    return EXIT_SUCCESS;
}
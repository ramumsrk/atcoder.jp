#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

using std::map;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, M {}, K {};
    cin>>N>>M>>K;
    vector<long long int> v(N,0);
    for (int i {}; i < N; i += 1) {
        long long int V {};
        cin>>V;
        v[i] = V;
        map<long long int, vector<int>> m;
        int C {};
        if (C >= 1) {
            vector<int> T(C,0);
            for (auto& t : T) {
                cin>>t;
            }
            m[v[i]] = T;
        } else {
            vector<int> T(0,0);
            m[v[i]] = T;
        }
    }
    return EXIT_SUCCESS;
}
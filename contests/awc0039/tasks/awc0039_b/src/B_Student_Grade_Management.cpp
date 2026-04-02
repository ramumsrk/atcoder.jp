#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::map;

auto
main(void) -> int {
    int N {}, M {}, T {};
    cin>>N>>M>>T;
    vector<int> S(N,0);
    map<int,int> sm; 
    for (int i {}; i < M; i += 1) {
        int c {}, s {};
        cin>>c>>s;
        S[c-1] += s;
        sm[c-1] += 1;
    }
    int students {};
    for (int i {}; i < N; i += 1) {
        if (sm.contains(i)) {
            if (S[i]/sm[i] < T) {
                students += 1;
            }
        }
    }
    cout<<students<<endl;
    return EXIT_SUCCESS;
}
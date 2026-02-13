#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {};
    long long int K {};
    cin>>N>>K;
    vector<long long int> P(N,0);
    for (auto& p : P) {
        cin>>p;
    }
    long long int c {};
    for (int i {}; i < N; i += 1) {
        if (P[i] % K == 0) {
            c += P[i];
        }
    }
    cout<<c<<endl;    
    return EXIT_SUCCESS;
}
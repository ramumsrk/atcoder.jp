#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, D {};
    long long int K {};
    cin>>N>>D>>K;
    vector<int> W(N,0);
    for (auto& w : W) {
        cin>>w;
    }
    long long int smartphones {};
    for (int n {}; n < N; n += 1) {
        if ((W[n]-(D*K)) >= 1) {
            smartphones += 1;
        }
    }
    cout<<smartphones<<endl;
    return EXIT_SUCCESS;
}
#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    // number of balls
    uint N {};
    // target distance
    unsigned long long int L {};
    // target width
    unsigned long long int W {}; 
    cin>>N>>L>>W;
    // balls weight
    vector<unsigned long long int> D(N,0U);
    // read balls weight
    for (auto& d : D) {
        cin>>d;
    }
    // number of balls that have hit the target
    uint balls {};
    for (uint i {}; i < N; i += 1) {
        if ((D[i] >= (L-W)) && (D[i] <= (L+W))) {
            balls += 1;
        }
    }
    cout<<balls<<endl;
    return EXIT_SUCCESS;
}
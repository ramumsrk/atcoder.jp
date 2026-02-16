#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    // rooms
    uint N {};
    // target temperature
    unsigned long long int M {};
    // degree
    unsigned long long int D {};
    cin>>N>>M>>D;
    // room temperatures
    vector<unsigned long long int> T(N,0);
    for (auto& t : T) {
        cin>>t;
    }
    uint packs {};
    for (uint i {}; i < N; i += 1) {
        if (T[i] <= M) {
            ;
        } else if (T[i] > M) {
            auto t {T[i]};
            while (t > M) {
                t -= D;
                packs += 1;
            }
        }
    }
    cout<<packs<<endl;
    return EXIT_SUCCESS;
}
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    // number of quests
    uint N {};
    // efficieny threshold multiplier
    short unsigned int K {};
    // target experience
    long long unsigned int T {};
    cin>>N>>K>>T;
    // experience gained
    long long unsigned int experience {};
    for (uint i {}; i < N; i += 1) {
        // stamina cost
        uint D {};
        // experience reward
        long long unsigned int R {};
        cin>>D>>R;
        if (R >= (K*D)) {
            experience += 1;
        }
    }
    if (experience <= T) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
    return EXIT_SUCCESS;
}
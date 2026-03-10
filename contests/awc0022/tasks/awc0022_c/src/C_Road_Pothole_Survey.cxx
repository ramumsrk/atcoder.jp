#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int N {}, M {}, K {}, T {};
    cin>>N>>M>>K>>T;
    vector<int> B(M,0);
    for (auto& b : B) {
        cin>>b;
    }
    for (int k {}; k < K; k += 1) {
        int L {}, R {};
        cin>>L>>R;
        int shocks {};
        for (auto& b : B) {
            if (b >= L && b <= R) {
                shocks += 1;
            }
        }
        if (shocks >= T) {
            cout<<"YES"s<<endl;
        } else {
            cout<<"NO"s<<endl;
        }
    }
    return EXIT_SUCCESS;
}
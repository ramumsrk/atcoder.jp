#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int N {}, Q {};
    cin>>N>>Q;
    vector<int> S(N,0);
    for (auto& s : S) {
        cin>>s;
    }
    for (int q {}; q < Q; q += 1) {
        int A {}, B {};
        cin>>A>>B;
        if (S[A-1] > S[B-1]) {
            cout<<"Yes"s<<endl;
        } else {
            cout<<"No"s<<endl;
        }
    }
    return EXIT_SUCCESS;
}

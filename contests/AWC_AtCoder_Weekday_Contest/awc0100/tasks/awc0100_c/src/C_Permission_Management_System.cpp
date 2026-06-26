#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

auto
c_permission_management_system(
    const int& N,
    int const& L,
    const int& Q
) -> void {
    vector<string> S(N,"");
    for (auto& s : S) {
        cin>>s;
    }
    for (int j {}; j < Q; j += 1) {
        
    }
}

auto
main(void) -> int {
    int N {}, L {}, Q {};
    cin>>N>>L>>Q;
    // function call
    c_permission_management_system(N, L, Q);
    return EXIT_SUCCESS;
}

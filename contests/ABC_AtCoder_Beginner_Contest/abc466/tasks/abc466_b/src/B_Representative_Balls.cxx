#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::max;
using std::vector;

auto
b_representative_balls(
    const int& N,
    int const& M
) -> void {
    map<int,int> CS;
    int C {}, S {};
    vector<int> v(M,-1);
    for (int i {}; i < N; i += 1) {
        cin>>C>>S;
        if (!CS.contains(C)) {
            CS[C] = S;
        } else {
            CS[C] = max(CS[C], S);
        }
        v[C-1] = CS[C];
    }
    for (const auto& s : v) {
        cout<<s<<' ';
    }
    cout<<endl;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    // function call
    b_representative_balls(N, M);
    return EXIT_SUCCESS;
}
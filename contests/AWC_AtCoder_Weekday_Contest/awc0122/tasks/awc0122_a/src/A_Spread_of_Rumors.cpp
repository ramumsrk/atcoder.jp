#include <iostream>
#include <cstdlib>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::map;

auto
a_spread_of_rumors(
    const int& N,
    int const& M
) -> int {
    map<int,int> ab;
    for (int i {}; i < N; i += 1) {
        if (i == 0) {
            ab[i] = 1;
        } else {
            ab[i] = 0;
        }
    }
    for (int i {}; i < M; i += 1) {
        int a {}, b {};
        cin>>a>>b;
        if (ab[a] == 1) {
            ab[b] = 1;
        }
    }
    int students {};
    for (const auto& [k, v] : ab) {
        if (ab[k] == 1) {
            students += 1;
        }
    }
    return students;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    int students {a_spread_of_rumors(N, M)};
    cout<<students<<endl;
    return EXIT_SUCCESS;
}

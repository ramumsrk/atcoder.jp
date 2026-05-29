#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
a_bomb_disposal_squad(
    const int& N,
    int const& M
) -> long long int {
    vector<long long int> H(N,0);
    for (auto& h : H) {
        cin>>h;
    }
    for (int j {}; j < M; j += 1) {
        int T {};
        long long int D {};
        cin>>T>>D;
        T -= 1;
        H[T] -= D;
        if (T >= 1) {
            H[T-1] -= D/2;
        } else if (T <= N-1) {
            H[T+1] -= D/2;
        }
    }
    long long int durability {};
    for(const auto& h : H) {
        if (h >= 1) {
            durability += 1;
        }
    }
    return durability;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    long long int durability {a_bomb_disposal_squad(N, M)};
    cout<<durability<<endl;
    return EXIT_SUCCESS;
}
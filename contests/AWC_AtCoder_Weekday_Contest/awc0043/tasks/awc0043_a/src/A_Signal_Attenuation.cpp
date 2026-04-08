#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using std::floor;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {};
    long long int M {};
    cin>>N>>M;
    __int128_t _M {M};
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    for (const auto& a : A) {
        _M = (__int128_t)floor(((long long int)_M*a)/100);
    }
    cout<<(long long int)_M<<endl;
    return EXIT_SUCCESS;
}
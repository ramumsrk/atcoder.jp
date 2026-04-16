#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    long long int S {}, T {};
    int K {};
    cin>>S>>T>>K;
    __int128_t s {S}, t {T};
    int ops {};
    while (ops <= K) {
        if (s == t) {
            break;
        }
        s += s;
        ops += 1;
    }
    if ((s == t)) {
        cout<<ops<<endl;
    } else {
        cout<<-1<<endl;
    }
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_dungeon_exploration(
    const int& N,
    const long long int& P
) -> int {
    long long int H {};
    int defeated_monsters {};
    __int128_t p {P};
    for (int i {}; i < N; i += 1) {
        cin>>H;
        if (p >= H) {
            defeated_monsters += 1;
            p -= H;
        } else if (p < H) {
            p += H;
        }
    }
    return defeated_monsters;
}

auto
main(void) -> int {
    int N {};
    long int long P {};
    cin>>N>>P;
    int defeated_monsters {a_dungeon_exploration(N, P)};
    cout<<defeated_monsters<<endl;
    return EXIT_SUCCESS;
}
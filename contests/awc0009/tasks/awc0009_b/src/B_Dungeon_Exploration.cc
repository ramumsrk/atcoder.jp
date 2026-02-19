#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    long long int S {}, C {};
    cin>>N>>S>>C;
    int k {};
    for (int i {}; i < N; i += 1) {
        long long int H {}, P {};
        cin>>H>>P;
        if (S >= H) {
            S -= H;
            S += P;
        } else if (S < H) {
            k += 1;
        }
    }
    cout<<(k*C)<<endl;
    return EXIT_SUCCESS;
}
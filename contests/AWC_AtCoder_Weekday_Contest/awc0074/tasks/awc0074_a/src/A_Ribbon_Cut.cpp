#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_ribbon_cut(
    int const& N
) -> void {
    for (int i {}; i < N; i += 1) {
        long long int l {}, t {};
        cin>>l>>t;
        __int128_t L {l}, T {t}, parts {L/T}, R {L%T};
        if (R != 0 && R >= (T/2)) {
            parts += 1;
        }
        cout<<static_cast<long long int>(parts)<<endl;
    }
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    // function call
    a_ribbon_cut(N);
    return EXIT_SUCCESS;
}
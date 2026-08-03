#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_wifi_coverage_range(
    const int& N,
    const int& D
) -> int {
    int buildings {};
    for (int i {}; i < N; i += 1) {
        int X {}, Y {};
        cin>>X>>Y;
        __int128_t x {X}, y {Y}, d {D};
        if (((x*x)+(y*y)) > (d*d)) {
            buildings += 1;
        }
    }
    return buildings;
}

auto
main(void) -> int {
    int N {}, D {};
    cin>>N>>D;
    // function call
    int buildings {a_wifi_coverage_range(N, D)};
    cout<<buildings<<endl;
    return EXIT_SUCCESS;
}

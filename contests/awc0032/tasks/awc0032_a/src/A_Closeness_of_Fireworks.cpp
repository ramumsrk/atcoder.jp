#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;

auto
main(void) -> int {
    // Number of fireworks
    int N {};
    // Threshold
    long long int R {};
    cin>>N>>R;
    int fireworks {};
    for (int n {}; n < N; n += 1) {
        long long int X {}, Y {}, P {}, Q {};
        cin>>X>>Y>>P>>Q;
        if (sqrt(((X-P)*(X-P))+((Y-Q)*(Y-Q))) <= R) {
            fireworks += 1;
        }
    }
    cout<<fireworks<<endl;
    return EXIT_SUCCESS;
}
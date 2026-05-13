#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, L {}, R {};;
    cin>>N>>L>>R;
    int nice_days {};
    for (int i {}; i < N; i += 1) {
        int T {};
        cin>>T;
        if (T >= L && T <= R) {
            nice_days += 1;
        }
    }
    cout<<nice_days<<endl;
    return EXIT_SUCCESS;
}
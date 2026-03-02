#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    long long int L {}, R {}, T {};
    cin>>N>>L>>R>>T;
    int sweet_no {-1};
    long long int lowest_price {};
    long long int high_deliciousness {};
    for (int i {}; i < N; i += 1) {
        long long int P {}, S {};
        cin>>P>>S;
        if (
            (P >= L && P <= R)
            &&
            S >= T
        ) {
            if (P < lowest_price) {
                sweet_no = i + 1;
            } else if (P == lowest_price && S > high_deliciousness) {
                high_deliciousness = S;
                sweet_no = i + 1;
            } else if (P == lowest_price && S == high_deliciousness) {
                if (sweet_no-1 < i) {
                    sweet_no = i + 1;
                }
            }
        }
    }
    cout<<sweet_no<<endl;
    return EXIT_SUCCESS;
}

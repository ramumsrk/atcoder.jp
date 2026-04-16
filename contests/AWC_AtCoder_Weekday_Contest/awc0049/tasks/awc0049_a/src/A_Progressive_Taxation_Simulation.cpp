#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    long long int L {};
    int P {}, Q {};
    cin>>N>>L>>P>>Q;
    for (int i {}; i < N; i += 1) {
        long long int S {};
        cin>>S;
        long long int T {};
        if (S <= L) {
            T = (S * P)/100;
        } else if (S > L) {
            T = ((L*P)+((S-L)*Q))/100;
        }
        cout<<T<<endl;
    }
    return EXIT_SUCCESS;
}
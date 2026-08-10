#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_distributing_presents(
    const int& N
) -> int {
    long long int n {N};
    long long int F {};
    int friends {};
    for (int i {}; i < N; i += 1) {
        cin>>F;
        if (n > 0 && F >= 0) {
            n -= F;
            if (n >= 1) {
                n -= 1;
                friends += 1;
            }
        }
    }
    return friends;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    int friends {a_distributing_presents(N)};
    cout<<friends<<endl;
    return EXIT_SUCCESS;
}
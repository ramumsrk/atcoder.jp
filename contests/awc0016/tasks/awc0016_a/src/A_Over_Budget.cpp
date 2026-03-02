#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    cin>>N;
    int projects {};
    long long int money {};
    for (int i {}; i < N; i += 1) {
        long long int A {}, B {};
        cin>>A>>B;
        if (A > B) {
            projects += 1;
            money += (A-B);
        } else if (A <= B) {
            ;
        }
    }
    cout<<projects<<' '<<money<<endl;
    return EXIT_SUCCESS;
}

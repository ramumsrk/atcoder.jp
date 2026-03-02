#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, T {};
    cin>>N>>T;
    int min_time {};
    for (int i {}; i < N; i += 1) {
        int A {}, C {};
        cin>>A>>C;
        if (A >= T) {
            ;
        } else {
            min_time += (T-A)*C;
        }
    }
    cout<<min_time<<endl;
    return EXIT_SUCCESS;
}

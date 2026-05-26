#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_used_car_selection(
    const int& N,
    int const& L,
    const int& R,
    int const& M
) -> int {
    int candidate_cars {};
    for (int i {}; i < N; i += 1) {
        int P {}, K {};
        cin>>P>>K;
        if (
            (P >= L && P <= R)
            &&
            (K <= M)
        ) { candidate_cars += 1;}
    }
    return candidate_cars;
}

auto
main(void) -> int {
    int N {}, L {}, R {}, M {};
    cin>>N>>L>>R>>M;
    int candidate_cars {a_used_car_selection(N, L, R, M)};
    cout<<candidate_cars<<endl;
    return EXIT_SUCCESS;
}
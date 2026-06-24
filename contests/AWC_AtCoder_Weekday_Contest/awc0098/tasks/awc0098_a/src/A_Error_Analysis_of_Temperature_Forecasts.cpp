#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::abs;
using std::max;

auto
a_error_analysis_of_temperature_forecasts(
    int const& N,
    const int& D
) -> int {
    vector<int> T(N,0);
    for (auto& t : T) {
        cin>>t;
    }
    int max_S {};
    for (int i {}; i < N; i += 1) {
        vector<int> A(D,0);
        for (auto& a : A) {
            cin>>a;
        }
        int S {};
        for (int j {}; j < D; j += 1) {
            S += abs(A[j]-T[i]);
        }
        max_S = max(max_S, S);
    }
    return max_S;
}

auto
main(void) -> int {
    int N {}, D {};
    cin>>N>>D;
    // function call
    int max_S {a_error_analysis_of_temperature_forecasts(N, D)};
    cout<<max_S<<endl;
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, M {};
    long long int R {};
    cin>>N>>M>>R;
    vector<long long int> T(N,0);
    for (auto& t : T) {
        cin>>t;
    }
    long long int min_total_time {M*R};
    for (int n {}; n < N; n += 1) {
        min_total_time += T[n];
    }
    cout<<min_total_time<<endl;
    return EXIT_SUCCESS;
}
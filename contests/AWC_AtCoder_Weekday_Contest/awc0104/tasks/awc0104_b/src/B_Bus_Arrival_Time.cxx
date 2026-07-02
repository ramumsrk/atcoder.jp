#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
b_bus_arrival_time(
    const int& N,
    int long long const& T
) -> void {
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
}

auto
main(void) -> int {
    int N {};
    long long int T {};
    cin>>N>>T;
    b_bus_arrival_time(N, T);
    return EXIT_SUCCESS;
}

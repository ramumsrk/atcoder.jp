#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
a_warehouse_shipment_management(
    const int& N,
    int const& M
) -> int {
    vector<long long int> R(N,0);
    for (auto& r : R) {
        cin>>r;
    }
    int success_count {};
    for (int j {}; j < M; j += 1) {
        int F {};
        long long int S {};
        cin>>F>>S;
        if (R[F-1] >= S) {
            R[F-1] -= S;
            success_count += 1;
        }
    }
    return success_count;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    // function call
    int success_count {a_warehouse_shipment_management(N, M)};
    cout<<success_count<<endl;
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
#include <utility>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::vector;

auto
a_warehouse_inventory_management(
    const int& N,
    int const& M
) -> int {
    vector<pair<long long int,long long int>> WL(N,{0,0});
    for (auto& wl : WL) {
        cin>>wl.first>>wl.second;
    }
    if (M != 0) {
        for (int j {}; j < M; j += 1) {
            int P {};
            long long int C {};
            cin>>P>>C;
            if (C > 0) {
                WL[P-1].first += C;
            } else if (C < 0) {
                WL[P-1].first += C;
            }
        }
    }
    int over_capacity_warehouses {};
    for (int i {}; i < N; i += 1) {
        if (WL[i].first > WL[i].second) {
            over_capacity_warehouses += 1;
        }
    }
    return over_capacity_warehouses;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    int over_capacity_warehouses {a_warehouse_inventory_management(N, M)};
    cout<<over_capacity_warehouses<<endl;
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_store_sales_calculation(
    const int& N,
    int const& M,
    const int& K
) -> int {
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    int total_purchase_amount {};
    for (int j {}; j < M; j += 1) {
        int S {}, P {}, D {};
        cin>>S>>P>>D;
        if (S == 1) {
            total_purchase_amount += (A[P-1]-K)*D; 
        } else if (S == 0) {
            total_purchase_amount += A[P-1]*D;
        }
    }
    return total_purchase_amount;
}

auto
main(void) -> int {
    int N {}, M {}, K {};
    cin>>N>>M>>K;
    int total_purchase_amount {a_store_sales_calculation(N, M, K)};
    cout<<total_purchase_amount<<endl;
    return EXIT_SUCCESS;
}
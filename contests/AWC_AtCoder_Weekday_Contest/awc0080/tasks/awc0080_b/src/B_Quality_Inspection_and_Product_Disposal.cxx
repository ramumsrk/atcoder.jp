#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::map;

auto
b_quality_inspection_and_product_disposal(
    const int& N,
    int const& Q
) {
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    map<int,int> product_disposed;
    for (int j {}; j < Q; j += 1) {
        long long int T {};
        cin>>T;
        int disposed {};
        for (const auto& a : A) {
            if (a < T) {
                if (!product_disposed.contains(a)) {
                    product_disposed[a] = 1;
                    disposed += 1;
                }
            }
        }
        cout<<disposed<<endl;
    }
}

auto
main(void) -> int {
    int N {}, Q {};
    cin>>N>>Q;
    // function call
    b_quality_inspection_and_product_disposal(N, Q);
    return EXIT_SUCCESS;
}
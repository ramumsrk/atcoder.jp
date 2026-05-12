#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::max;
using std::max_element;
using std::begin;
using std::end;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> B(N,0);
    for (auto& b : B) {
        cin>>b;
    }
    for (int k {}; k < N; k += 1) {
        if (k == 0) {
            cout<<B[k]<<endl;
        } else if (k == 1) {
            cout<<max(B[0], B[1])<<endl;
        } else {
            int profit_count {};
            long long int profit {};
            for (int i {}; i <= k; i += 1) {
                if (B[i] > 0) {
                    profit_count += 1;
                    profit += B[i];
                }
            }
            if (profit_count == 0) {
                auto it = begin(B);
                cout<<*max_element(it, it+k)<<endl;
            } else {
                long long int max_profit {};
                for (int i {}; i <= k; i += 1) {
                    if (B[i] < 0) {
                        if ((profit+B[i]) > max_profit) {
                            max_profit = profit+B[i];
                        }
                    }
                }
                cout<<max_profit<<endl;
            }
        }
    }
    return EXIT_SUCCESS;
}
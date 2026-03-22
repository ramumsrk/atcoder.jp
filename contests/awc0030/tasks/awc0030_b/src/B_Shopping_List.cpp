#include <iostream>
#include <cstdlib>
#include <vector>
#include <utility>
#include <algorithm>

using std::vector;
using std::pair;
using std::cin;
using std::cout;
using std::endl;
using std::min_element;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<pair<long long int,int>> PT(N,{0,0});
    for (auto& pt : PT) {
        cin>>pt.first>>pt.second;
    }
    for (int m {}; m < M; m += 1) {
        int K {};
        cin>>K;
        vector<int> S(K,0);
        for (auto& s : S) {
            cin>>s;
        }
        vector<long long int> min_veg_price(0,0);
        vector<long long int> min_nonveg_price(0,0);
        for (int k {}; k < K; k += 1) {
            if (PT[S[k]-1].second == 0) {
                min_veg_price.push_back(PT[S[k]-1].first);
            } else if (PT[S[k]-1].second == 1) {
                min_nonveg_price.push_back(PT[S[k]-1].first);                
            }
        }
        if (
            min_nonveg_price.size() != 0
            &&
            min_veg_price.size() != 0
        ) {
            auto min_veg = *(min_element(begin(min_veg_price), end(min_veg_price)));
            auto min_nonveg = *(min_element(begin(min_nonveg_price), end(min_nonveg_price)));
            cout<<(min_veg+min_nonveg)<<endl;            
        } else {
            cout<<-1<<endl;
        }
    }
    return EXIT_SUCCESS;
}
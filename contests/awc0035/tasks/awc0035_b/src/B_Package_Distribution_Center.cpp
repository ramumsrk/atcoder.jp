#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::min_element;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<long long int> D(N,0);
    for (auto& d : D) {
        cin>>d;
    }
    vector<long long int> S(M,0);
    for (auto& s : S) {
        cin>>s;
    }
    vector<long long int> min_costs(0,0);
    long long int cost {};
    for (const auto& d : D) {
        vector<long long int> v(0,0);
        for (const auto& s : S) {
            v.push_back(abs(d-s));
        }
        cost = *(min_element(begin(v), end(v)));
        min_costs.push_back(cost);
    }
    cout<<*(min_element(begin(min_costs), end(min_costs)))<<endl;
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::abs;
using std::min_element;

auto
main(void) -> int {
    int N {}, K {};
    long long int L {}, R {};
    cin>>N>>K>>L>>R;
    vector<long long int> T(N,0);
    for (auto& t : T) {
        cin>>t;
    }
    vector<long long int> result(0,0);
    for (int i {}; i < N; i += 1) {
        if (
            T[i] >= L
            &&
            T[i] <= R
        ) {
            ;
        } else {
            if (T[i] < L) {
                result.push_back(abs(L-T[i]));
            } else if (T[i] > R) {
                result.push_back(abs(T[i]-R));
            }
        }
    }
    cout<<*(min_element(begin(result), end(result)))<<endl;
    return EXIT_SUCCESS;
}
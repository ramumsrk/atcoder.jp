#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::max_element;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<long long int> P(N,0);
    for (auto& p : P) {
        cin>>p;
    }
    if (M != 0) {
        for (int m {}; m < M; m += 1) {
            int U {}, V {};
            long long int W {};
            cin>>U>>V>>W;
            P[V-1] += W;
            P[U-1] -= W;
        }
    }
    long long int most_items = *(max_element(begin(P), end(P)));
    int min_index {};
    for (int i {}; i < N; i += 1) {
        if (most_items == P[i]) {
            min_index = i;
            break;
        }
    }
    cout<<(min_index+1)<<endl;
    return EXIT_SUCCESS;
}
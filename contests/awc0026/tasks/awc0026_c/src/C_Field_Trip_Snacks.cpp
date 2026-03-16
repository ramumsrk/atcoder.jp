#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

auto
main(void) -> int {
    int N {}, T {};
    long long int E {};
    cin>>N>>T>>E;
    vector<long long int> P(N,0);
    for (auto& p : P) {
        cin>>p;
    }
    int snacks_types {};
    long long int snacks_price {};
    for (int i {}; i < N; i += 1) {
        if ((snacks_price + (T*P[i])) <= E) {
            snacks_price += (T*P[i]);
            snacks_types += 1;
        }
    }
    cout<<snacks_types<<endl;
    return EXIT_SUCCESS;
}

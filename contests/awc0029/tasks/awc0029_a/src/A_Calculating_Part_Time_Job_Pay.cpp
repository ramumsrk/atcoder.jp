#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, P {}, B {}, K {};
    cin>>N>>P>>B>>K;
    vector<int> C(N,0);
    for (auto& c : C) {
        cin>>c;
    }
    int total_salary {};
    for (int i {}; i < N; i += 1) {
        if (C[i] >= K) {
            total_salary += (C[i]*(P+B));
        } else {
            total_salary += (C[i]*P);
        }
    }
    cout<<total_salary<<endl;
    return EXIT_SUCCESS;
}
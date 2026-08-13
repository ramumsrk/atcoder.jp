#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::abs;

auto
a_inter_school_marathon_competition(
    const int& N
) -> long long int {
    map<int,vector<int>> CL;
    int C {}, L {};
    for (int i {}; i < N; i += 1) {
        cin>>C>>L;
        CL[C].push_back(L);
    }
    long long int CL_k_sum {};
    for (const auto& [k, v] : CL) {
        int CL_k_size {static_cast<int>(CL[k].size())};
        if (CL_k_size == 2) {
            CL_k_sum += abs(CL[k][0]-CL[k][1]);
        } else {
            for (int i {}; i <= CL_k_size-2; i += 1) {
                for (int j {i+1}; j < CL_k_size; j += 1) {
                    CL_k_sum += abs(CL[k][i]-CL[k][j]);
                }
            }
        }
    }
    return CL_k_sum;    
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    // function call
    long long int CL_k_sum {a_inter_school_marathon_competition(N)};
    cout<<CL_k_sum<<endl;
    return EXIT_SUCCESS;
}

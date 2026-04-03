#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int M {};
    long long int S {};
    cin>>M>>S;
    vector<long long int> B(M,0);
    for (auto& b : B) {
        cin>>b;
    }
    long long int q {S/M};
    long long int r {S%M};
    for (int i {}; i < M; i += 1) {
        B[i] += q;
    }
    for (const auto& e : B) {
        cout<<e<<' ';
    }
    cout<<endl;    
    for (int i {}; i < r; i += 1) {
        B[i] += 1; 
    }
    for (const auto& e : B) {
        cout<<e<<' ';
    }
    cout<<endl;    
    vector<long long int> prefix_sum_B(M,0);
    prefix_sum_B[0] = B[0];
    for (int i {1}; i < M; i += 1) {
        prefix_sum_B[i] = B[i] + prefix_sum_B[i-1];
    }
    for (const auto& e : prefix_sum_B) {
        cout<<e<<' ';
    }
    cout<<endl;    
    int N {};
    cin>>N;
    for (int n {}; n < N; n += 1) {
        int L {}, R {};
        cin>>L>>R;
        long long int SB {};
        if (L == 1 || L == R) {
            SB = prefix_sum_B[R-1];
        } else {
            SB = prefix_sum_B[R==M?R-1:R]-prefix_sum_B[L-1];            
        }
        cout<<SB<<endl;
    }
    return EXIT_SUCCESS;
}
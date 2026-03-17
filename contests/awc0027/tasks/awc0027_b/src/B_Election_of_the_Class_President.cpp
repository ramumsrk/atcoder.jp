#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    long long int curr_rep_score {A[0]}, max_score {curr_rep_score};
    int at_num {-1};
    for (int i {1}, j {}; i < N; i += 1) {
        if (curr_rep_score < A[i]) {
            if (max_score < A[i]) {
                max_score = A[i];
                at_num = i+1;
            }
        } else if (max_score == A[i] && j < i) {
            j = i;
            at_num = j+1;
        }
    }
    cout<<at_num<<endl;
    return EXIT_SUCCESS;
}
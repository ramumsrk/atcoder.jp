#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int N {};
    long long int K {};
    cin>>N>>K;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    long long int T_sum {}, A_sum {};
    for (int i {}; i < N; i += 1) {
        if (T_sum + A[i] <= K) {
            T_sum += A[i];
        } else {
            A_sum += A[i];
        }
    }
    if (T_sum > A_sum) {
        cout<<"Takahashi"s<<endl;
    } else if (T_sum < A_sum) {
        cout<<"Akoi"s<<endl;
    } else {
        cout<<"Draw"s<<endl;
    }
    return EXIT_SUCCESS;
}

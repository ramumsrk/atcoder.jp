#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::max_element;

auto
b_maximum_sum_of_a_contiguous_subarray(
    const int& N,
    const vector<long long int>& A
) -> long long int {
    vector<long long int> max_subarray_sum(0,0);
    for (int i {}; i <= N-2; i += 1) {
        vector<long long int> prefixsum_A(N-i,0);
        prefixsum_A[i] = A[i];
        max_subarray_sum.push_back(prefixsum_A[i]);
        for (int j {i+1}; j < N; j += 1) {
            prefixsum_A[j] = prefixsum_A[j-1]+A[j];
            max_subarray_sum.push_back(prefixsum_A[j]);
        }
    }
    return *max_element(begin(max_subarray_sum), end(max_subarray_sum));
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    // function call
    long long int max_subarray_sum {b_maximum_sum_of_a_contiguous_subarray(N, A)};
    cout<<max_subarray_sum<<endl;
    return EXIT_SUCCESS;
}
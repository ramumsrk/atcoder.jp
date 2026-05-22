#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
a_zigzag_of_mountain_range(
    const int& N
) -> int {
    vector<long long int> R(N,0);
    for (auto& r : R) {
        cin>>r;
    }
    int zigzag_triplets {};    
    for (int i {1}; i <= N-2; i += 1) {
        if (
            ((R[i] > R[i-1]) && (R[i] > R[i+1]))
            ||
            ((R[i] < R[i-1]) && (R[i] < R[i+1]))
        ) {
            zigzag_triplets += 1;
        }
    }
    return zigzag_triplets;  
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    // function call
    int zigzag_triplets {a_zigzag_of_mountain_range(N)};
    cout<<zigzag_triplets<<endl;
    return EXIT_SUCCESS;
}
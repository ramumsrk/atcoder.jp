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
using std::sort;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    if (N == 1) {
        cout<<A[0]<<endl;
    } else {
        sort(begin(A), end(A));
        bool status {false};
        int elevation_index {};
        for (int j {N-1}; j >= 0; j -= 1) {
            if (A[j] > A[j-1]) {
                status = true;
                elevation_index = j;
                break;
            } else if (A[j] == A[j-1]) {
                break;
            }
        }
        if (status) {
            cout<<A[elevation_index]<<endl;
        } else {
            cout<<0<<endl;
        }
    }
    return EXIT_SUCCESS;
}
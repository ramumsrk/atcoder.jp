#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::begin;
using std::end;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    sort(begin(A), end(A));
    cout<<(A[N-1]+A[N-2])<<endl;
    return EXIT_SUCCESS;
}
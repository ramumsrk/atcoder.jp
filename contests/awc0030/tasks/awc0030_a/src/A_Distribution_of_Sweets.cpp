#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    long long int M {};
    cin>>N>>M;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    for (int i {}; i < N; i += 1) {
        cout<<(A[i]/M)<<' '<<(A[i]%M)<<endl;
    }
    return EXIT_SUCCESS;
}
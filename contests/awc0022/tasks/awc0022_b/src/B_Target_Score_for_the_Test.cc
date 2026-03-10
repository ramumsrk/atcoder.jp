#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, T {};
    long long int M {};
    cin>>N>>M>>T;
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    long long int xtr_assg {};
    for (int n {}; n < N; n += 1) {
        if (A[n] < T) {
            xtr_assg += (T-A[n]);
        }
    }
    if (xtr_assg > M) {
        cout<<-1<<endl;
    } else {
        cout<<xtr_assg<<endl;
    }
    return EXIT_SUCCESS;
}
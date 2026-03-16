#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    for (int i {}; i < N; i += 1) {
        if ((i+1)%K == 0) {
            cout<<A[i]<<' ';
        }
    }
    cout<<endl; 
    return EXIT_SUCCESS;
}

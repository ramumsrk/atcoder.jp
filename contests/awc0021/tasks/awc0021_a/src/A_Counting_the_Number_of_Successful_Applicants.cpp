#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    int passed {};
    for (int i {}; i < N; i += 1) {
        int A {};
        cin>>A;
        vector<int> B(A,0);        
        for (auto& b : B) {
            cin>>b;
        }
        for (const auto& b : B) {    
            if (b >= K) {
                passed += 1;
            }
        }
    }
    cout<<passed<<endl;
    return EXIT_SUCCESS;
}
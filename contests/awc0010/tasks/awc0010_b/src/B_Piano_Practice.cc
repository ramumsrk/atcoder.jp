#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::round;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> D(N,0);
    for (auto& d : D) {
        cin>>d;
    }
    long long int minutes {};
    for (int i {1}; i < N; i += 1) {
        if (D[i-1] < D[i]) {
            minutes += round(D[i]/2);
        } else if (D[i-1] >= D[i]) {
            minutes += D[i];
        }
    }
    cout<<(minutes+D[0])<<endl;
    return EXIT_SUCCESS;
}
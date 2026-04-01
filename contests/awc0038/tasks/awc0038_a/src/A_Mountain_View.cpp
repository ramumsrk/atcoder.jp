#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> H(N,0);
    for (auto& h : H) {
        cin>>h;
    }
    if (N == 1) {
        cout<<1<<endl;
    } else {
        cout<<1<<' ';
        long long int highest {H[0]};
        for (int j {1}; j < N; j += 1) {
            if (highest < H[j]) {
                cout<<(j+1)<<' ';
                highest = H[j];
            }
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}
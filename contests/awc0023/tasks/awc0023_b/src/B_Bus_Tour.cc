#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    cin>>N;
    long long int passengers {};    
    for (int n {}; n <= N-1; n += 1) {
    long long int A {}, B {};        
        if (n == N-1) {
            cin>>A;
            passengers += A;
        } else if (n == 0) {
            cin>>A>>B;
            passengers += (A+B);
        } else if (n >= 1 && n < N-1) {
            cin>>A>>B;
            if (passengers < B) {
                passengers = 0;
            } else {
                passengers += A;
                passengers -= B;
            }
        }
    }
    cout<<passengers<<endl;
    return EXIT_SUCCESS;
}
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
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    int X {};
    cin>>X;
    cout<<A[X-1]<<endl;
    return EXIT_SUCCESS;
}
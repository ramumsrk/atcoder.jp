#include <iostream>
#include <cstdlib>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

auto
a_order_confirmation(
    const int& N
) -> int {
    int incorrect_orders {};
    for (int i {}; i < N; i += 1) {
        string T {}, S {};
        cin>>T>>S;
        if (T != S) {
            incorrect_orders += 1;
        }
    }
    return incorrect_orders;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    int incorrect_orders {a_order_confirmation(N)};
    cout<<incorrect_orders<<endl;
    return EXIT_SUCCESS;
}
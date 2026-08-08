#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
a_fizz(
    const int& N
) -> void {
    for (int i {1}; i <= N; i += 1) {
        if (i%3 == 0) {
            cout<<"Fizz"s<<endl;
        } else {
            cout<<i<<endl;
        }
    }
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    // function call
    a_fizz(N);
    return EXIT_SUCCESS;
}
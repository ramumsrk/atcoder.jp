#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int A {}, B {};
    cin>>A>>B;
    if (A > (B*2/3)) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
    return EXIT_SUCCESS;
}
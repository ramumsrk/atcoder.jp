#include <cstdlib>
#include <iostream>
#include <cstdint>

using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    uint16_t A {}, B {}, C {};
    cin>>A>>B>>C;
    if (
        (A != B)
        &&
        (B == C)
    ) cout<<"Yes"s<<endl;
    else cout<<"No"s<<endl;
    return EXIT_SUCCESS;
}
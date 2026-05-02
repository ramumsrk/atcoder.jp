#include <iostream>
#include <cstdlib>
#include <cstdint>

using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    uint16_t X {};
    cin>>X;
    if (X >= 3 && X <= 18) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
    return EXIT_SUCCESS;
}
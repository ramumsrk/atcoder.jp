#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    uint16_t N {};
    cin>>N;
    string s {to_string(N)};
    if (
        s[0] == s[1]
        &&
        s[1] == s[2]
        &&
        s[2] == s[0]
    ) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
    return EXIT_SUCCESS;
}
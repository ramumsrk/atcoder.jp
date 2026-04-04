#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int M {}, D {};
    cin>>M>>D;
    if (
        (M == 1 && D == 7)
        ||
        (M == 3 && D == 3)
        ||
        (M == 5 && D == 5)
        ||
        (M == 7 && D == 7)
        ||
        (M == 9 && D == 9)
    ) cout<<"Yes"s<<endl;
    else cout<<"No"s<<endl;
    return EXIT_SUCCESS;
}
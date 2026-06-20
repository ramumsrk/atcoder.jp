#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
a_16_colon_9(
    const int& X,
    int const& Y
) -> string {
    return X%16 == 0 && Y%9 == 0 ? "Yes"s : "No"s;
}

auto
main(void) -> int {
    int X {}, Y {};
    cin>>X>>Y;
    cout<<a_16_colon_9(X, Y)<<endl;
    return EXIT_SUCCESS;
}
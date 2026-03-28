#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::string_view;
using namespace std::literals::string_view_literals;

auto
a_illegal(
    const string& S
) -> string_view {
    return S.length()%5 == 0 ? "Yes"sv : "No"sv;
}

auto
main(void) -> int {
    string S {};
    cin>>S;
    cout<<a_illegal(S)<<endl;
    return EXIT_SUCCESS;
}
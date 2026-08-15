#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
a_nine_or_nein(
    const int& A,
    const int& B
) -> string {
    string nine_or_nein {};
    if (
        (A+B == 9)
        ||
        (A-B == 9)
        ||
        (A*B == 9)
        ||
        (A == 9*B)
    ) {
        nine_or_nein = "Nine"s;
    } else {
        nine_or_nein = "Nein"s;
    }
    return nine_or_nein;
}

auto
main(void) -> int {
    int A {}, B {};
    cin>>A>>B;
    string nine_or_nein {a_nine_or_nein(A, B)};
    cout<<nine_or_nein<<endl;
    return EXIT_SUCCESS;
}
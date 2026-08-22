#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

auto
a_a(
    const string& S
) -> void {
    for (const auto& ch : S) {
        if (ch == 'A') {
            cout<<ch;
        } else {
            cout<<'.';
        }
    }
    cout<<endl;
}

auto
main(void) -> int {
    string S {};
    cin>>S;
    // function call
    a_a(S);
    return EXIT_SUCCESS;
}
#include <cstdlib>
#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using namespace std::literals::string_literals;
using std::endl;

auto
main(void) -> int {
    string S {};
    cin>>S;
    int si {0};
    int ei {static_cast<int>(S.length()-1)};
    if (S[si] == S[ei]) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
    return EXIT_SUCCESS;
}
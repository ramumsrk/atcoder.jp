#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

auto
a_chompers(
    const string& S,
    const int& N
) -> string {
    int S_length {static_cast<int>(S.length())};
    string chomped_S {};
    for (int i {N}, j {S_length-N}; i < j; i += 1) {
        chomped_S.push_back(S[i]);
    }
    return chomped_S;
}

auto
main(void) -> int {
    string S {};
    int N {};
    cin>>S;
    cin>>N;
    // function call
    string chomped_S {a_chompers(S, N)};
    cout<<chomped_S<<endl;
    return EXIT_SUCCESS;
}
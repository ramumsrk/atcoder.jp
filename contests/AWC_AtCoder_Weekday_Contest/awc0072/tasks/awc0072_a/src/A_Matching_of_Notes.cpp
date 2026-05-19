#include <iostream>
#include <cstdlib>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
a_matching_of_notes(
    const int& N,
    const string& S,
    const string& T
) -> void {
    string s {};
    int exclamation_count {};
    for (int i {}; i < N; i += 1) {
        if (S[i] == T[i]) {
            s.push_back(S[i]);
        } else if (S[i] == '?') {
            s.push_back(T[i]);
        } else if (T[i] == '?') {
            s.push_back(S[i]);
        } else if (S[i] == '?' && T[i] == '?') {
            s.push_back('?');
        } else if (S[i] != T[i]) {
            s.push_back('!');
            exclamation_count += 1;
        }
    }
    cout<<s<<endl;
    if (exclamation_count >= 1) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    string S {};
    cin>>S;
    string T {};
    cin>>T;
    // function call
    a_matching_of_notes(N, S, T);
    return EXIT_SUCCESS;
}
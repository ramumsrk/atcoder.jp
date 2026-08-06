#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using namespace std::literals::string_literals;

auto
a_addressing_wedding_invitations(
    const int& N
) -> void {
    vector<string> GroupA(0,""), GroupB(0,"");
    for (int i {}; i < N; i += 1) {
        string S {}, R {};
        cin>>S>>R;
        if (R == "teacher"s || R == "doctor"s) {
            GroupA.push_back(S+' '+"sensei"s);
        } else if (R == "student"s || R == "other"s) {
            GroupB.push_back(S+' '+"san"s);
        }
    }
    for (const auto& groupA : GroupA) {
        cout<<groupA<<endl;
    }
    for (const auto& groupB: GroupB) {
        cout<<groupB<<endl;
    }
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    // function call
    a_addressing_wedding_invitations(N);
    return EXIT_SUCCESS;
}

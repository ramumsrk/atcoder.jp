#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::map;
using namespace std::literals::string_literals;

auto
b_train_reservation(
    const int& N,
    char const& X
) -> string {
    vector<string> S(N,"");
    for (auto& s : S) {
        cin>>s;
    }
    map<char, int> column_seat {
        {'A', 0},
        {'B', 1},
        {'C', 2},
        {'D', 3},
        {'E', 4},
    };
    string result {"No"s};
    for (int i {}; i < N; i += 1) {
        if (S[i][column_seat[X]] == 'o') {
            result = "Yes"s;
            break;
        }
    }
    return result;
}

auto
main(void) -> int {
    int N {};
    char X {};
    cin>>N>>X;
    cout<<b_train_reservation(N, X)<<endl;
    return EXIT_SUCCESS;
}
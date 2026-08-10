#include <iostream>
#include <cstdlib>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

auto
b_word_search(
    const int& N,
    const int& Q
) -> void {
    map<int,string> index_title;
    for (int i {}; i < N; i += 1) {
        cin>>index_title[i];
    }
    string title {};
    for (int j {}, L {}, R {}; j < Q; j += 1) {
        cin>>L>>R>>title;
        int books {};
        for (int l {L-1}; l < R; l += 1) {
            if (index_title[l] == title) {
                books += 1;
            }
        }
        cout<<books<<endl;
    }
}

auto
main(void) -> int {
    int N {}, Q {};
    cin>>N>>Q;
    // function call
    b_word_search(N, Q);
    return EXIT_SUCCESS;
}
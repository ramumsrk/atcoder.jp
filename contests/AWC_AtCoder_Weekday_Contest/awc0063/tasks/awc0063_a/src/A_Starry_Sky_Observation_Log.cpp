#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

auto
main(void) -> int {
    int H {}, W {};
    cin>>H>>W;
    vector<string> S(0,"");
    int K {};
    for (int i {}; i < H; i += 1) {
        string s {};
        cin>>s;
        for (int j {}; j < W; j += 1) {
            if (s[j] == 'T') {
                K += 1;
            }
        }
        S.push_back(s);
    }
    if (K != 0) {
        cout<<K<<endl;
        for (int i {}; i < H; i += 1) {
            for (int j {}; j < W; j += 1) {
                if (S[i][j] == 'T') {
                    cout<<i+1<<' '<<j+1<<endl;
                }
            }
        }
    } else if (K == 0) {
        cout<<0<<endl;
    }
    return EXIT_SUCCESS;
}
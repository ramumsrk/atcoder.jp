#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<string> S(N,"");
    for (auto& s : S) {
        cin>>s;
    }
    int m = static_cast<int>(S[0].length());
    for (int i {1}; i < N; i += 1) {
        if (m < static_cast<int>(S[i].length())) {
            m = static_cast<int>(S[i].length());
        }
    }
    for (int i {}; i < N; i += 1) {
        if (static_cast<int>(S[i].length()) < m) {
            int d {m - static_cast<int>(S[i].length())};
            int fh {d / 2};
            int sh {d - fh};
            for (int j {}; j < fh; j += 1) {
                cout<<'.';
            }
            cout<<S[i];
            for (int k {}; k < sh; k += 1) {
                cout<<'.';
            }
            cout<<endl;
        } else {
            cout<<S[i]<<endl;
        }
    }
    return EXIT_SUCCESS;
}
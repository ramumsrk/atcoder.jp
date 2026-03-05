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
    int N {}, K {};
    cin>>N>>K;
    vector<string> S(N,"");
    for (auto& s : S) {
        cin>>s;
    }
    int cheer_msgs {};
    for (int i {}; i < N; i += 1) {
        int exclamation {};
        for (int j {}; j < static_cast<int>(S[i].length()); j += 1) {
            if (S[i][j] == '!') {
                exclamation += 1;
            }
        }
        if (exclamation >= K) {
            cheer_msgs += 1;
        }
    }
    cout<<cheer_msgs<<endl;
    return EXIT_SUCCESS;
}

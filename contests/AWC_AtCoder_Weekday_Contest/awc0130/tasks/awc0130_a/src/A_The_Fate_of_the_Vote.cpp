#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

auto
a_the_fate_of_the_vote(
    const int& N,
    const int& M
) -> int {
    string S {};
    cin>>S;
    int T_supporters {}, A_supporters {};
    for (const auto& s : S) {
        if (s == 'T') {
            T_supporters += 1;
        } else if (s == 'A') {
            A_supporters += 1;
        }
    }
    int speech_no {-1};
    for (int i {}; i < M; i += 1) {
        int R {};
        cin>>R;
        if (S[R-1] == 'T') {
            T_supporters -= 1;
            A_supporters += 1;
            S[R-1] = 'A';
        } else if (S[R-1] == 'A') {
            A_supporters -= 1;
            T_supporters += 1;
            S[R-1] = 'T';
        }
        if (T_supporters == 0 || A_supporters == 0) {
            speech_no = i+1;
            break;
        }
    }
    return speech_no;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    int speech_no {a_the_fate_of_the_vote(N, M)};
    cout<<speech_no<<endl;
    return EXIT_SUCCESS;
}

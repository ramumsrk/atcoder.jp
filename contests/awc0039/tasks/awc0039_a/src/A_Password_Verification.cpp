#include <iostream>
#include <cstdlib>
#include <map>
#include <string>

using std::map;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int N {}, M {}, Q {};
    cin>>N>>M>>Q;
    if (M != 0) {
        map<int,char> P;
        for (int i {}; i < M; i += 1) {
            int j {};
            char c {};
            cin>>j>>c;
            P[j-1] = c;
        }
        for (int q {}; q < Q; q += 1) {
            string S {};
            cin>>S;
            bool result {true};
            for (const auto& [k,v] : P) {
                if (v != S[k]) {
                    result = false;
                    break;
                }
            }
            if (result) {
                cout<<"Yes"s<<endl;
            } else {
                cout<<"No"s<<endl;
            }
        }
    } else {
        for (int q {}; q < Q; q += 1) {
            string S {};
            cin>>S;
            cout<<"Yes"s<<endl;
        }
    }
    return EXIT_SUCCESS;
}
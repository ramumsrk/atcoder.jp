#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int N {};
    cin>>N;
    for (int i {}; i < N; i += 1) {
        string S {};
        long long int K {};
        cin>>S>>K;
        if (K%2 == 0) {
            cout<<S<<endl;
        } else if (K%2 != 0) {
            if (S == "Yes"s) {
                cout<<"No"s<<endl;
            } else if (S == "No"s) {
                cout<<"Yes"s<<endl;
            }
        }
    }
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int N {};
    long long int S {}, T {};
    cin>>N>>S>>T;
    vector<long long int> D(N,0);
    for (auto& d : D) {
        cin>>d;
    }
    for (const auto& e : D) {
        if (e <= S) {
            S += e;
        }
    }
    if (S >= T) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
    return EXIT_SUCCESS;
}
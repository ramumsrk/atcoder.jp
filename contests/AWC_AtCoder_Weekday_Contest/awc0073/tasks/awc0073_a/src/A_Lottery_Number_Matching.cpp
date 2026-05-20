#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::map;

auto
main(void) -> int {
    int K {}, M {};
    cin>>K>>M;
    map<long long int, int> aA;
    vector<long long int> A(K,0);
    for (auto& a : A) {
        cin>>a;
        aA[a] = 0;
    }
    int matching_tickets {};
    vector<long long int> B(M,0);
    for (auto& b : B) {
        cin>>b;
        if (aA.contains(b)) {
            matching_tickets += 1;
        }
    }
    cout<<matching_tickets<<endl;
    return EXIT_SUCCESS;
}
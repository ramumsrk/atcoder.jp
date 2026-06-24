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
b_library_book_lending(
    const int& N,
    int const& M
) -> void {
    vector<long long int> S(N,0);
    for (auto& s : S) {
        cin>>s;
    }
    map<long long int, long long int> ST;
    for (int i {}; i < M; i += 1) {
        long long int st {};
        cin>>st;
        if (!ST.contains(st)) {
            ST[st] = 1;
        } else {
            ST[st] += 1;
        }
    }
    for (int i {}; i < N; i +=1) {
        long long int C {};
        for (const auto& [k,v] : ST) {
            if (S[i] >= k) {
                C += v;
            }
        }
        cout<<C<<endl;
    }
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    // function call
    b_library_book_lending(N, M); 
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
#include <vector>
#include <utility>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::pair;
using std::max;
using std::min;

auto
b_scoreboard_of_a_programming_contest(
    const int& N
) -> void {
    vector<pair<long long int, long long int>> AB(N,{0,0});
    for (int i {}; i < N; i += 1) {
        cin>>AB[i].first>>AB[i].second;
    }
    vector<int> standings(0,0);
    for (int i {}; i <= N-2; i += 1) {
        if (AB[i].second > AB[i+1].second) {
            standings.push_back(i+1);
        } else if (AB[i].second < AB[i+1].second) {
            standings.push_back((i+1)+1);
        } else if (AB[i].second == AB[i+1].second) {
            standings.push_back(max(i+1,(i+1)+1));
        } else if (
            AB[i].first == AB[i+1].first
            &&
            AB[i].second == AB[i+1].second
        ) {
            standings.push_back(min(i+1, (i+1)+1));
        }
    }
    for (const auto& standing : standings) {
        cout<<standing<<endl;
    }
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    // function call
    b_scoreboard_of_a_programming_contest(N);
    return EXIT_SUCCESS;
}
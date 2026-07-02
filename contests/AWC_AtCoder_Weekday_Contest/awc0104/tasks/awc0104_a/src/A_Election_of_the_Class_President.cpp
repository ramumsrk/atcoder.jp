#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::max_element;

auto
a_election_of_the_class_president(
    const int& N
) -> int {
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    int student_number {-1};
    map<long long int, int> votes_count;
    for (int i {0}; i < N; i += 1) {
        if (!votes_count.contains(A[i])) {
            votes_count[A[i]] = 1;
        } else {
            votes_count[A[i]] += 1;
        }
    }
    auto max_votes = *max_element(begin(A), end(A));
    if (votes_count[max_votes] == 1) {
        for (int i {}; i < N; i += 1) {
            if (max_votes == A[i]) {
                student_number = i+1;
                break;
            }
        }
    }
    return student_number;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    cout<<a_election_of_the_class_president(N)<<endl;
    return EXIT_SUCCESS;
}

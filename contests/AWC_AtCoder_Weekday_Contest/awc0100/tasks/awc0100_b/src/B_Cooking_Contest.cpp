#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
b_cooking_contest(
    const int& N
) -> int {
    int participant_number {}, participant_score {};
    for (int i {}; i < N; i += 1) {
        int A {}, B {};
        cin>>A>>B;
        if (A+B > participant_score) {
            participant_number = i+1;
            participant_score = A+B;
        }
    }
    return participant_number;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    cout<<b_cooking_contest(N)<<endl;
    return EXIT_SUCCESS;
}
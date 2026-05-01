#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::abs;

auto
main(void) -> int {
    int N {};
    cin>>N;
    int question_mark_count {}, red_count {}, white_count {};
    char ch {};
    for (int i {}; i < N; i += 1) {
        cin>>ch;
        if (ch == '?') {
            question_mark_count += 1;
        } else if (ch == 'R') {
            red_count += 1;
        } else if (ch == 'W') {
            white_count += 1;
        }
    }
    if (question_mark_count == 0) {
        cout<<abs(red_count-white_count)<<endl;
    } else if (N%2==0) {
        cout<<0<<endl;
    } else if (N%2!=0) {
        cout<<1<<endl;
    }
    return EXIT_SUCCESS;
}
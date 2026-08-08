#include <iostream>
#include <cstdlib>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::max;

auto
b_monocolor(
    const int& N
) -> int {
    int max_color_count {}, color {};
    map<int, int> color_count;
    for (int i {}; i < N; i += 1) {
        cin>>color;
        if (!color_count.contains(color)) {
            color_count[color] = 1;
        } else {
            color_count[color] += 1;
        }
        max_color_count = max(max_color_count, color_count[color]);
    }
    int min_ops {N-max_color_count};
    return min_ops;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    int min_ops {b_monocolor(N)};
    cout<<min_ops<<endl;
    return EXIT_SUCCESS;
}
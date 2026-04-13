#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::begin;
using std::end;

auto
main(void) -> int {
    int N {};
    long long int L {};
    cin>>N>>L;
    vector<long long int> D(N,0);
    for (auto& d : D) {
        cin>>d;
    }
    sort(begin(D), end(D));
    vector<long long int> result(0,0);
    for (int i {}; i < N; i += 1) {
        if (L >= D[i]) {
            result.push_back(D[i]);
        }
    }
    int result_size {static_cast<int>(result.size())};
    if (result_size == 0) {
        cout<<-1<<endl;
    } else if (result_size == 1) {
        cout<<1<<endl;
    } else {
        int last_index {result_size-1};
        int previous_index {last_index-1};
        int answer = result[previous_index] == result[last_index]?previous_index+1:last_index+1;
        cout<<answer<<endl;
    }
    return EXIT_SUCCESS;
}
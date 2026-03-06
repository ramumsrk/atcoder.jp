#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::sort;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    sort(begin(A), end(A));
    long long int total {};
    for (int i {}; i <= N-2; i += 1) {
        total += A[i];
    }
    if (total < A[N-1]) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
    return EXIT_SUCCESS;
}
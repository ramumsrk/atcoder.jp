#include <iostream>
#include <vector>
#include <utility>
#include <stack>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::pair;
using std::stack;

auto
b_monster_slaying(
    const int& N
) -> long long int {
    vector<pair<long long int,long int long>> DV(N,{0,0});
    long long int h {}, total_gold_reward {};
    stack<int> postpone_stack;
    for (auto& dv : DV) {
        cin>>dv.first>>dv.second;
    }
    for (int i {}; i < N; i += 1) {
        if (DV[i].first > h) {
            postpone_stack.push(i);
        } else if (DV[i].first <= h) {
            h += DV[i].first;
            total_gold_reward += DV[i].second;
            if (postpone_stack.empty()) {
                ;
            } else {
                int index {postpone_stack.top()};
                pair<long long int,long long int> dv {DV[index]};
                if (dv.first <= h) {
                    h += dv.first;
                    total_gold_reward += dv.second;
                    postpone_stack.pop();
                } else {
                    ;
                }
            }
        }
    }
    if (postpone_stack.empty()) {
        ;
    } else {
        int index {postpone_stack.top()};
        pair<long long int, long long int> dv {DV[index]};
        if (h >= dv.first) {
            h += dv.first;
            total_gold_reward += dv.second;
        } else if (h < dv.first) {
            ;
        }
    }
    return total_gold_reward;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    int long long total_gold_reward {b_monster_slaying(N)};
    cout<<total_gold_reward<<endl;
    return EXIT_SUCCESS;
}
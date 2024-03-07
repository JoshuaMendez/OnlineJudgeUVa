#include <cstdio>
#include <stack>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int isQueue(queue<int> one, queue<int> two) {
    int ans = 1;
    while (!one.empty() && !two.empty()) {
        // cout << "asdf " << one.front() << " " << two.front() << endl;
        if (one.front() != two.front()) ans = 0;
        one.pop(); two.pop();
    }
    return ans;
}

int isStack(queue<int> one, queue<int> two) {
    int ans = 1;
    stack<int> st;
    while (!one.empty()) {
        st.push(one.front());
        one.pop();
    }
    while (!st.empty() && !two.empty()) {
        if (st.top() != two.front()) ans = 0;
        st.pop(); two.pop();
    }
    return ans;
}

int isPriorityQueue(queue<int> one, queue<int> two) {
    int ans = 1;
    priority_queue<int> pq;
    while (!one.empty()) {
        pq.push(one.front());
        one.pop();
    }
    while (!pq.empty() && !two.empty()) {
        if (pq.top() != two.front()) ans = 0;
        pq.pop(); two.pop();
    }
    return ans;
}

int main() {
    queue<int> q;
    
    return 0;
}

// int main() {
//     int N;
//     while (scanf("%d", &N) != EOF) {
//         queue<int> one, two;
//         while (N--) {
//             int vecNum, data;
//             scanf("%d %d", &vecNum, &data);
//             if (vecNum == 1) one.push(data);
//             else if (vecNum == 2) two.push(data);
//         }
//         if (one.size() > 0 && two.size() > 0) {
//             int ansQueue = isQueue(one, two), ansStack = isStack(one, two), ansPQueue = isPriorityQueue(one, two);
//             cout << "que " << ansQueue << " st " << ansStack << " pque " << ansPQueue << endl;
//             if ((ansQueue && ansStack && ansPQueue) || (ansQueue && ansStack) || (ansQueue && ansPQueue) || (ansStack && ansQueue) || (ansStack && ansPQueue)) printf("not sure\n");
//             else if (!ansQueue && !ansStack && !ansPQueue) printf("impossible\n");
//             else if (ansQueue) printf("queue\n");
//             else if (ansStack) printf("stack\n");
//             else if (ansPQueue) printf("priority queue\n");
//         }
//         else { printf("impossible\n"); }
//     }
//     return 0;
// }
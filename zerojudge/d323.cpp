#include <stdio.h>

#include <algorithm>
#include <vector>
using namespace std;

vector<int> S;
int main() {
    int n;
    scanf("%d", &n);
    S.resize(n);
    for (int &x : S) {
        scanf("%d", &x);
    }
    sort(S.begin(), S.end());
    for (int x : S) {
        printf("%d ", x);
    }
    puts("");
}

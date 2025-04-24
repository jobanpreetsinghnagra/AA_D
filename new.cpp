#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight, value;
    float ratio;
};

// Compare by value/weight ratio
bool cmp(Item a, Item b) {
    return a.ratio > b.ratio;
}

void fractionalKnapsack(int W, vector<Item>& items) {
    for (auto& item : items)
        item.ratio = (float)item.value / item.weight;

    sort(items.begin(), items.end(), cmp);

    float totalValue = 0;
    for (auto& item : items) {
        if (W == 0) break;
        if (item.weight <= W) {
            totalValue += item.value;
            W -= item.weight;
        } else {
            totalValue += item.ratio * W;
            break;
        }
    }

    cout << "Maximum value in knapsack = " << totalValue << endl;
}

int main() {
    vector<Item> items = {{10, 60}, {20, 100}, {30, 120}};
    int capacity = 50;

    fractionalKnapsack(capacity, items);

    return 0;
}

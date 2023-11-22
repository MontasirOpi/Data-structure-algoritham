#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int value;
    double valuePerWeight;

    Item(int w, int v) : weight(w), value(v) {
        valuePerWeight = static_cast<double>(v) / w;
    }
};

bool compareItems(const Item& a, const Item& b) {
    return a.valuePerWeight > b.valuePerWeight;
}

double fractionalKnapsack(vector<Item>& items, int capacity) {
    sort(items.begin(), items.end(), compareItems);

    double totalValue = 0.0;

    for (const Item& item : items) {
        if (capacity <= 0) {
            break;
        }

        int weightToAdd =min(item.weight, capacity);
        totalValue += weightToAdd * item.valuePerWeight;
        capacity -= weightToAdd;
    }

    return totalValue;
}

int main() {
    vector<Item> items = {
        {10, 60},
        {20, 100},
        {30, 120},
    };

    int capacity = 50;

    double maxTotalValue = fractionalKnapsack(items, capacity);

    cout << "Maximum total value in the knapsack: " << maxTotalValue << endl;

    return 0;
}

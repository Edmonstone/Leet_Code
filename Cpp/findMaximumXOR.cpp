#include <iostream>
#include <vector>
using namespace std;

struct Node {
    Node* links[2];
    bool containsKey(int bit) {
        return (links[bit] != NULL);
    }
    void put(int bit, Node* node) {
        links[bit] = node;
    }
    Node* get(int bit) {
        return links[bit];
    }
};

class Trie {
private:
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    void insert(int num) {
        Node* node = root;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (!node->containsKey(bit)) {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }

    int findMax(int num) {
        Node* node = root;
        int maxNum = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (node->containsKey(!bit)) {
                maxNum = maxNum | (1 << i);
                node = node->get(!bit);
            } else {
                node = node->get(bit);
            }
        }
        return maxNum;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int max_ans = 0;
        Trie* trie = new Trie();
        for (int num : nums) {
            trie->insert(num);
        }
        for(auto num : nums){
            int x = trie->findMax(num);
            max_ans = max(x, max_ans);
        }
        delete trie;
        return max_ans;
    }
};

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };
    Solution solution;
    int result = solution.findMaximumXOR(arr);
    cout << "Maximum XOR: " << result << endl;
    return 0;
}

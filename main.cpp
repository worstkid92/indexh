#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        if(size == 0)return 0;
        int begin = 0, end = size;
        int h = 0, middle = 0;
        while(begin <= end) {
            middle = begin + (end - begin)/2;
            if(citations[middle] >= size - middle){
                end = middle - 1;
                h = size - middle;
            }
            else begin = middle + 1;
        }
        return h;
    }
};

int main()
{
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);

    Solution s;
    cout<<s.hIndex(vec)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

int main() {
    // 1. Initialize
    int a0[5];
    int a1[5] = {1, 2, 3};  // other element will be set as the default value
    // 2. Get Length
    int size = sizeof(a1) / sizeof(*a1);
    cout << "The size of a1 is: " << size << endl;
    // 3. Access Element
    cout << "The first element is: " << a1[0] << endl;
    // 4. Iterate all Elements
    cout << "[Version 1] The contents of a1 are:";
    for (int i = 0; i < size; ++i) {
        cout << " " << a1[i];
    }
    cout << endl;
    cout << "[Version 2] The contents of a1 are:";
    for (int& item: a1) {
        cout << " " << item;
    }
    cout << endl;
    // 5. Modify Element
    a1[0] = 4;
    // 6. Sort
    sort(a1, a1 + size); // sort(begin, end, cmp)，其中begin为指向待sort()的数组的第一个元素的指针，end为指向待sort()的数组的最后一个元素的下一个位置的指针，cmp参数为排序准则，如果没有的话，默认以非降序排序。
    cout << "The after sort of a1 are:";
    for (int& item: a1) {
        cout << " " << item;
    }
    cout << endl;
}
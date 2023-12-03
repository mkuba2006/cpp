#include <iostream>
#include <vector>

using namespace std;
int main(){

    
    int arr[5] {111,2,3,4,5};  // can be int arr[5] {};
    cin >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
    cout << "========" <<endl;
    cout << "arr1 :" << arr[0] <<endl;
    cout << "arr2 :" << arr[1] <<endl;
    cout << "arr3 :" << arr[2] <<endl;
    cout << "arr4 :" << arr[3] <<endl;
    cout << "arr5 :" << arr[4] <<endl;
    cout << "========" <<endl;


    vector <int> test (7,100);
    cout << test[0] << endl;
    cout << test.at(6) << endl;
    cout << "test :" << test.size() << endl;
    cout << "========" <<endl;


    int score {0};
    cin>>score;
    test.push_back(score);
    cout << "test :" << test.size() << endl;
    cout << "========" <<endl;

    
    vector <vector<int>> movies {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout << movies[0][0] <<endl;
    cout << movies[0][1] <<endl;
    cout << movies[1][1] <<endl;
    cout << movies[1][0] <<endl;
    cout << movies[2][3] <<endl;


    return 0;
}

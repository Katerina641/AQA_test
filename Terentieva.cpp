#include <cstdio>
#include <iostream>
#include <string>


using namespace std;

int main()

{
    setlocale(LC_ALL, "Russian");
    // task №1

    cout << "Task 1" << endl;

    int value;
    cout << "Enter value ";
    cin >> value;
    if (value > 7)
        cout << "Hello";
    else
        cout << "value is less than 7";

    // task №2

    cout << endl << endl << "Task 2" << endl;

    string s1 = "Vyacheclav";
    string s2;
    cout << "Please, enter name Vyacheclav  " << endl;
    cin >> s2;
    if (s2 == s1)
        cout << "Hello Vyacheclav";
    else
        cout << "no such name";

    // task №3

    cout << endl << endl << "Task 3" << endl;

    int const N = 5; // enter value
    int a[N];
    int k = 3;
    cout << "enter 5 array elements: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    cout << "your numbers are multiples of 3" << endl;
    for (int i = 0; i < N; i++)
    {
        if (a[i] % k == 0)
        {

            cout << a[i] << endl;
        }
    }

    // task №3

    cout << endl << endl << "Task 4" << endl;
    char s[20] = "[((())()(())]]";

    int par = 0;
    int col = 0;
    int cha = 0;

    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int count_5 = 0;
    int count_6 = 0;
    cout << s << endl;
    cout << "Can this sequence be considered correct";
    for (int i = 0; i < 20; i++) {
        if (s[i] == '{') {
            cha += 1;
            count_1++;
        }
        if (s[i] == '}') {
            cha -= 1;
            count_2++;
        }
        if (s[i] == '[') {
            col += 1;
            count_3 += 1;
        }
        if (s[i] == ']') {
            col -= 1;
            count_4++;
        }
        if (s[i] == '(') {
            par += 1;
            count_5++;
        }
        if (s[i] == ')') {
            par -= 1;
            count_6++;
        }

    }
    cout << endl;

    if (cha < 0 || col < 0 || par < 0)
        cout << "No" << endl;
    else if (cha != 0 || col != 0 || par != 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    if (count_3 != count_4 && count_3 > count_4)
        cout << "need to put ]" << endl;
    else
        cout << "need to put [" << endl;

    if (count_1 != count_2 && count_1 > count_2)
        cout << "need to put }" << endl;
    else if (count_1 == count_2 && count_1 < count_2)
        cout << "need to put {" << endl;
    else
        cout << "no such symbols {}"<<endl;

    if (count_5 != count_6 && count_5 > count_6)
        cout << "need to put )" << endl;
    else if (count_5 == count_6 && count_5 < count_6)
        cout << "no such symbols()"<<endl;
    else
        cout << "need to put (" << endl;

    
    system("pause");
    
    return 0;
    
}



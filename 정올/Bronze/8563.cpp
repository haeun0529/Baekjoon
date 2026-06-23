#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    double cm;
};

bool comp1(Student l, Student r) {
    if(l.age != r.age) return l.age > r.age; 
    else return l.cm > r.cm;
}

bool comp2(Student l, Student r) {
    if(l.cm != r.cm) return l.cm < r.cm; 
    else return l.age < r.age;
}

int main () {

    int n;
    cin >> n;
    Student st[n];

    for(int i=0; i<n; i++) {
        cin >> st[i].age >> st[i].cm;
    }

    sort(st, st+n, comp1);
    for(int i=0; i<n; i++) printf("%d %.1f\n", st[i].age, st[i].cm);
    cout << endl;

    sort(st, st+n, comp2);
    for(int i=0; i<n; i++) printf("%d %.1f\n", st[i].age, st[i].cm);

    return 0;
}
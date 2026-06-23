#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rect {
    int width, height;
    Rect operator + ( const Rect &Right ) const { 
        return (Rect){width + Right.width , height +Right.height};
    }
    bool operator == ( const Rect &Right ) const {
        return width*height == Right.width*Right.height;
    }
    bool operator < (const Rect &Right) const {
        return width*height < Right.width*Right.height;
    }
} a, b, c, d;

int main () {

    scanf("%d %d", &a.width, &a.height);
    scanf("%d %d", &b.width, &b.height);
    scanf("%d %d", &c.width, &c.height);
    scanf("%d %d", &d.width, &d.height);

    if(a + b == c + d) cout << "Same"; // Same 출력
    else if(a + b < c + d) cout << "Left Small"; // Left Small 출력
    else cout << "Right Small"; // Right Small 출력

    return 0;
}
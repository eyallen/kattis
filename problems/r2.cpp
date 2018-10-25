#include <iostream>

using namespace std;

int main()
{
    // Compute R2, where S = (R1+R2)/2;
    int R1 = 0;
    int R2 = 0;
    int S = 0;

    cin >> R1 >> S;

    // 2S = R1 + R;
    // R2 = 2S - R1
    
    cout << 2*S - R1 << end;
}

#include <iostream>

using namespace std;

int main()
{
    // factor = citations/articles
    // articles * factor = citations
    
    int A = 0;
    int I = 0;
    int C = 0;

    cin >> A >> I;

    // Impact is always rounded up, so reduce this number as much as we can.
    double i = I - 0.99;
    C = A * i;
    // C must be a whole number. Will be rounded down. Fix this.
    C++;

    cout << C << endl;
}

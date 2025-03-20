#include <iostream>
using namespace std;

int main(){
    int GS, BS, HRA, TA;
    char gender;
    cin>>BS>>HRA>>TA;
    cin>>gender;
    if (gender == 'M') {
        BS += (BS * 0.10);  // Increase BS by 10% for Male
    } else if (gender == 'F') {
        BS += (BS * 0.20);  // Increase BS by 20% for Female
    }

    GS = BS + HRA + TA;
    cout << GS << endl;
    
    return 0;
}
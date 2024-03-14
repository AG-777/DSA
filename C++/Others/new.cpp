#include<bits/stdc++.h>
using namespace std;
enum threat_level_t {
    LOW,
    GUARDED,
    ELEVATED,
    HIGH,
    SEVERE
};
void checkThreat(enum threat_level_t currLevel_t) {
    switch(currLevel_t) {
        case LOW:
            cout << "Green/Low";
            break;
        case GUARDED:
            cout << "Blue/Guarded";
            break;
        case ELEVATED:
            cout << "Yellow/Elevated";
            break;
        case HIGH:
            cout << "Orange/High";
            break;
        case SEVERE:
            cout << "RED/SEVERE";
            break;
    }
}
int main() {
    enum threat_level_t myLevel = ELEVATED;
    checkThreat(myLevel);
    return 0;
}
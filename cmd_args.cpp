// param_sum.cpp -- sums up the integers given as command line arguments
#include <iostream>
#include <string>
using namespace std;
​
int main(int argc, char *argv[]) {
    // Check the number of parameters
    if (argc < 2) {
        // Tell the user how to run the program
        cerr << "Usage: " << argv[0] << " [-v] INTEGERS" << endl;
        return 1;
    }
    // Parse the arguments
    bool verbose = false;
    int s = 0;
    for (int i = 1; i < argc; i++) {
        if (string(argv[i]) == "-v") { verbose = true; }
        else { s += stoi(argv[i]); }
    }
    // Output
    if (verbose) {
        cout << "sum = " << s << endl;
    }
    else {
        cout << s << endl;
    }
    return 0;
}
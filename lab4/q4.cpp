#include <iostream>
using namespace std;

class ServerSession {
private:
    int sessionID;

public:
    ServerSession(int id) {
        sessionID = id;
        cout << "Session " << sessionID << " started. Resource acquired." << endl;
    }

    ~ServerSession() {
        cout << "Session " << sessionID << " ending. Resource released." << endl;
    }
};

int main() {
    cout << "Entering main function..." << endl;

    {
        cout << "Entering session block..." << endl;

        ServerSession session1(001);
        cout << "Session is active inside the block." << endl;

        cout << "Exiting session block..." << endl;
    }

    cout << "Back in main, after session block." << endl;
}


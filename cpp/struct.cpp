#include <iostream>
using namespace std;
#include "uuid/v4/uuid.h"
using namespace uuid::v4;

class PlayerProfile {

    public:
        UUID uuid;
        string name;
        string fake_name;
};

int main() {

    PlayerProfile player;
    player.uuid = UUID::New();
    player.name = "Ehmilien";
    player.fake_name = "WOuiTher";

    cout << "Player UUID : " << player.uuid.String() << endl;
    cout << "Hello " << player.fake_name << " (" << player.name << ") !" << endl;

    return 0;
}

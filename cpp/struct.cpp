#include <iostream>
using namespace std;
#include "uuid/v4/uuid.h"
using namespace uuid::v4;

<<<<<<< HEAD
struct PlayerProfile {

    UUID uuid;
    string name;
    string fake_name;

} profile;

int main() {

    profile.uuid = UUID::New();
    profile.name = "Ehmilien";
    profile.fake_name = "WOuiTher";

    cout << "Player UUID : " << profile.uuid.String() << endl;
    cout << "Hello " << profile.fake_name << " (" << profile.name << ") !" << endl;
=======
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
>>>>>>> b6e5fc0284db97ab2b7c71a5c42f0ea92190a45d

    return 0;
}

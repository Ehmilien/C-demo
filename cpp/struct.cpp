#include <iostream>
using namespace std;
#include "uuid/v4/uuid.h"
using namespace uuid::v4;

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

    return 0;
}

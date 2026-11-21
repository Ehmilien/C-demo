#include <iostream>
using namespace std;
#include "./uuid/v4/uuid_v4.h"
using namespace UUIDv4;

struct PlayerProfile {

    UUID uuid;
    string name;
    string fake_name;

} profile;

int main() {

    UUIDGenerator<std::mt19937_64> uuidGenerator;

    profile.uuid = uuidGenerator.getUUID();
    profile.name = "Ehmilien";
    profile.fake_name = "WOuiTher";

    cout << "Player UUID : " << profile.uuid.str() << endl;
    cout << "Hello " << profile.fake_name << " (" << profile.name << ") !" << endl;

    string uuid_str = "4fe1a649-21a5-406e-a91d-7ff2e778e828";
    cout << "UUID str : " << uuid_str << endl;
    UUID from_str = UUID::fromStrFactory(uuid_str);
    cout << "UUID parsed and stringyfied : " << from_str.str() << endl;
}

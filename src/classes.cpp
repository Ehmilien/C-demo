#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
#include "/uuid/v4/uuid_v4.h"
using namespace UUIDv4;

class PlayerProfile {

    private:
        UUID uuid;
        string name;
        string rank;
        string fake_name;

    public:
        PlayerProfile(UUID uuid, string name, string rank, string fake_name) {
            this->uuid = uuid;
            this->name = name;
            this->rank = rank;
            this-> fake_name = fake_name;
        }

    public: void displayInfo() {
        cout << "UUID : " << uuid.str() << endl;
        cout << "Name : " << name << endl;
        cout << "Rank : " << rank << endl;
        cout << "Fake name : " << fake_name << endl;
    }
};

int main() {

    bool created = false;
    UUIDGenerator<std::mt19937_64> uuidGenerator;

    UUID uuid = uuidGenerator.getUUID();
    do {

        cout << "Please enter your name : ";
        string name;
        cin >> name;

        cout << "You entered \"" << name << "\" !" << endl;

        PlayerProfile profile(uuid, name, "player", "none");
        profile.displayInfo();

        size_t profile_size = sizeof(profile);
        cout << "Size of Profile : " << profile_size << endl;

        PlayerProfile* ptr = &profile;
        cout << "Address in memory : " << &ptr << endl;
        free(ptr);

        cout << "Free'd memory for : " << &ptr << endl;

        created = true;
    } while (!created);

    return 0;
}

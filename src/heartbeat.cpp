#include <iostream>
#include <ctime>
#include "./runnable.cpp"

using namespace std;

class Heartbeat {

    private:
        time_t since;
        int uptime;

    public:
        Heartbeat(time_t since, int uptime) {
            this->since = since;
            this->uptime = uptime;
        }
        Heartbeat(time_t since) {
            this->since = time(nullptr);
            this->uptime = 0;
        }

        time_t getSince() {
            return this->since;
        }

        int getUptime() {
            return this->uptime;
        }

        void setUptime(int uptime) {
            this->uptime = uptime;
        }
};

int main() {

    Heartbeat heartbeat(0);

    Runnable runnable({});

    runnable.start();
    do {


    } while(true);
}

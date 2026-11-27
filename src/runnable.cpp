#include <thread>

using namespace std;

class Runnable {

    public:
        void start() {
            thread t(&Runnable::run, this);
        }

    protected:
        virtual void run() {}
};

#include <string>
using namespace std;
#include <ctime>

string get_time() {

    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    string str =  asctime(timeinfo);
    str.pop_back();

    return str;
}

string get_time_prefix(bool space) {
    return "[" + get_time() + "]" + (space ? " " : "");
}

string get_time_prefix() {
    return get_time_prefix(false);
}

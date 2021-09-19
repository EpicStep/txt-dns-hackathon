#include <iostream>
#include <cpr/cpr.h>

int main(int argc, char* argv[]) {
    const std::string sBack = "http://178.154.195.41";

    std::string host;

    if (argc <= 1) {
        std::cout << "You must provide host in arguments." << std::endl;
        return 0;
    } else {
        host = argv[1];
    }

    cpr::Response r = cpr::Get(cpr::Url{sBack + "/lookup/txt"}, cpr::Parameters{{"host", host}});

    if (r.error) {
        std::cout << "(txt-dns) " + r.error.message << std::endl;
        return 0;
    }

    std::cout << r.text << std::endl;

    return 0;
}

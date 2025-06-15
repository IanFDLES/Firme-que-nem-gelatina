#include <iostream>
#include <string>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/types.h>
#include <netdb.h>

int main () {

    std::string ipDoServidor = "qualquer coisa";
    std::string porta = "80";

    std::int umSocket = socket(AF_INET, SOCK_STREAM, 0); //Socket do tipo stream IPV4

    return 0;
}


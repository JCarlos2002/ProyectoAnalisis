#include <iostream>
#include <vector>
struct edge;

struct Vertex {
    std::string name;
    bool active;
    int waitTime;
    int rushHourWT;
    int value;
    Vertex* intersect;
    };

void createWorld(int numLines) {
    int numLineas;
    std::cout << "Cuántas lineas habrá?" << std::endl << "0: aleatorio, 3,4,5,6: opciones" << std::endl;
    std::cin >> numLineas;

    if(!numLineas) {
        //random
    }
    std::vector<std::unique_ptr<std::vector<int>>> LinesVr;
    for(int i = 0; i < numLineas; i++) {
        int numEstaciones;
        std::cout << "Cuántas estaciones tendrá la linea #" << i+1 << "?" << std::endl << "Opciones: 4,5,6,7" << std::endl;
        std::cin >> numEstaciones;
        std::unique_ptr<std::vector<int>> newLine(new std::vector<int>());
        for(j = 0; j < numEstaciones; j++) {
            newLine->push_back(0); // TODO: Empujar nuevo vértice
        }
        LinesVr.push_back(newLine);
    }

};

int main() {
    



    
}
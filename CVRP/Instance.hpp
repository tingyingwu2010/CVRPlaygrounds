#ifndef Instance_hpp
#define Instance_hpp

#include <string>

#include "Structures.hpp"

//Variaveis
extern std::string instance;
extern double ** matrizAdj; // matriz de adjacencia
extern int *demands; // vetor de demandas
extern int dimension, vehicles, capacity; // quantidade total de vertices, veiculos e capacidade dos veiculos
extern client *clients; // Conjunto de clientes

// Leitura da instancia e print da mesma
void readInstance(std::string &instance);
void printInstance();
void deallocateInstance();

#endif /* Instance_hpp */
// definiciones de variables globales
int g_x{ 2 }; // globales no-constantes tienen vinculaci�n externa predeterminada
extern const int g_y{ 3 }; // el uso de extern convierte g_y  a vinculaci�n externa



extern constexpr int g_z{ 4 }; //nunca funcionar� porque no admite definici�n anticipada.




















/*#include <iostream>

void diHola() // esta funci�n tiene vinculaci�n externa, 
              // y puede ser vista por otros archivos
{    
    std::cout << "Hola";
}*/





/*int g_x{2}; // external linkage by default
// g_x goes out of scope here*/


/*// definiciones de variables globales
int g_x{ 2 }; // globales no-constantes tienen vinculaci�n externa predeterminada
extern const int g_y{ 3 }; // el uso de extern convierte g_y  a vinculaci�n externa*/





/*#include <iostream>

void diHola() // esta funci�n tiene vinculaci�n externa, 
              // y puede ser vista por otros archivos
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    std::cout << "Hola";
}*/
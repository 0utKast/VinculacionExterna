// definiciones de variables globales
int g_x{ 2 }; // globales no-constantes tienen vinculación externa predeterminada
extern const int g_y{ 3 }; // el uso de extern convierte g_y  a vinculación externa



extern constexpr int g_z{ 4 }; //nunca funcionará porque no admite definición anticipada.




















/*#include <iostream>

void diHola() // esta función tiene vinculación externa, 
              // y puede ser vista por otros archivos
{    
    std::cout << "Hola";
}*/





/*int g_x{2}; // external linkage by default
// g_x goes out of scope here*/


/*// definiciones de variables globales
int g_x{ 2 }; // globales no-constantes tienen vinculación externa predeterminada
extern const int g_y{ 3 }; // el uso de extern convierte g_y  a vinculación externa*/





/*#include <iostream>

void diHola() // esta función tiene vinculación externa, 
              // y puede ser vista por otros archivos
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    std::cout << "Hola";
}*/
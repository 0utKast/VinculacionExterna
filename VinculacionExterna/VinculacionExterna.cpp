/*#include <iostream>
extern int g_x; // definición anticipada para g_x, que podrá ser 
                // usada a partir de este punto en este archivo
const extern int g_y;



//constexpr extern int g_z; //no podemos aplicar definición anticipada a constexpr



int main()
{
    std::cout << g_x; // debe imprimir el valor que g_x tenga en 
                      // su archivo origen (2 en este caso)
    std::cout << g_y;

    return 0;
}
// la definición anticipada para g_x sale de alcance aquí*/


















/*void diHola(); // definición anticipada para la función diHola, 
               //hace diHola accesible en este archivo

int main()
{
    diHola(); // llama a una función definida en otro archivo, 
             // el linker conectará esta llamada a la definición de la función
    return 0;
}*/



















// Definiciones variables globales externas:
int g_x;                       // define una variable global externa no inicializada (inicializada a cero predeterminado)
extern const int g_x{ 1 };     // define una variable global const externa inicializada
extern constexpr int g_x{ 2 }; // defines una variable global constexpr externa inicializada (válida pero inservible)

// Definiciones anticipadas
extern int g_y;                // declaración anticipada para una variable no-constante
extern const int g_y;          // declaración anticipada para una variable global const
extern constexpr int g_y;      // no permitida: las variables constexpr no admiten declaración anticipada

























/*// non-constant
int g_x; // variable definition (can have initializer if desired)
extern int g_x; // forward declaration (no initializer)

// constant
extern const int g_y{ 1 }; // variable definition (const requires initializers)
extern const int g_y; // forward declaration (no initializer)*/





/*#include <iostream>

extern int g_x; // este extern es una definición anticipada de una variable 
                // llamada g_x que está definida en algún otro sitio
extern const int g_y; // este extern es una definición anticipada de una variable 
                      // const llamada g_y que está definida en algún otro sitio

int main()
{
    std::cout << g_x; // prints 2

    return 0;
}*/












/*int g_x{2}; // globales no-constantes son externas de modo predeterminado

extern const int g_y{ 3 }; // globales constantes pueden ser definidas 
                          // como extern,conviriténdolas en externas
extern constexpr int g_z{ 3 }; // globales constexpr pueden ser definidas 
                               // como extern, haciéndolas externas,  
                               // (pero esto es inútil, por no definición anticipada)

int main()
{
    return 0;
}*/











/*void diHola(); // definición anticipada para la función diHola, 
               //hace diHola accesible en este archivo

int main()
{  
    
    diHola(); // llama a una función definida en otro archivo, 
             // el linker conectará esta llamada a la definición de la función

    return 0;
}*/
#include <iostream>
#include <automovil.h>

std::string Color_Auto(unsigned int color)
{
    switch(color)
    {
        case 0: return "Negro";
        case 1: return "Rojo";
        case 2: return "Verde";
        case 3: return "Azul";
        case 4: return "Rosado";
        case 5: return "Amarillo";
        case 6: return "Marron";
        case 7: return "Morado";
        case 8: return "Naranja";
        case 9: return "Blanco";
    }
}

int Tam_Placa(std::string u_Placa)
{
    return u_Placa.length(); 
}

int main(){

    Automovil a("Toyota","4Runner","ZXT-456",10000.00,0,2018,0);

    std::cout << "Marca: " <<a.get_Marca() << "\n";
    std::cout << "Modelo: " << a.get_Modelo() << "\n";
    std::cout << "Placa: " << a.get_Placa() << "--" << Tam_Placa(a.get_Placa()) <<"\n";
    std::cout << "Precio: " << a.get_Precio() << "\n";
    std::cout << "Kilometraje: " << a.get_Kilometraje() << "\n";
    std::cout << "Año: " << a.get_Anio() << "\n";
    std::cout << "Color: " << Color_Auto(a.get_Color()) << "\n";

        
    return 0;
}

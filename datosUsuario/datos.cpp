#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Datos_Personales
{
    string nombre;
    string apellido;
    string dni;
    string fecha_nacimiento;
    string direccion;
    string telefono;
    string email;
};
struct Datos_Vuelo
{
    string fecha_vuelo;
    string hora_vuelo;
    string aerolinea;
    string numero_vuelo;
    string destino;
    string origen;
    string pasajeros;
    string costo;
};
struct Datos_Pago
{
    string metodo_pago;
    string numero_tarjeta;
    string fecha_vencimiento;
    string codigo_seguridad;
};
struct Datos_Reserva
{
    string fecha_reserva;
    string hora_reserva;
    string numero_reserva;
    string estado_reserva;
};
struct Datos_Usuario
{
    Datos_Personales datos_personales;
    Datos_Vuelo datos_vuelo;
    Datos_Pago datos_pago;
    Datos_Reserva datos_reserva;
};

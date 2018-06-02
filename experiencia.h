#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H
#include <string>
#include <vector>
using namespace std;

class experiencia{
        private:
            string cliente;
            string plato;
            int gastado;

        public:
            experiencia();
            experiencia(string, string, int);

            string getCliente();
            void setCliente(string);
            
            string getPlato();
            void setPlato(string);

            int getGastado();
            void setGastado(int);

            ~experiencia();
};
#endif
#ifndef BODEGA_H
#define BODEGA_H
#include "ingrediente.h"


#include <vector>
#include <string>

using namespace std;

class bodega{
        private:
            vector <ingrediente> ntc;
            int cantidad;
            int compras;
            int n;

        public:    
            bodega();
            bodega(vector <ingrediente>, int, int, int);
            
            vector <ingrediente> getNTC();
            void setNTC(vector <ingrediente>);

            int getCantidad();
            void setCantidad(int);

            int getCompras();
            void setCompras(int);

            int getN();
            void setN(int);

            void pushingrediente(ingrediente);
            
            ~bodega();

};
#endif
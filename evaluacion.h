#ifndef EVALUACION_H
#define EVALUACION_H
#include <vector>

using namespace std;

class evaluacion{
      private:
            int puntuacion;
      public:  
            evaluacion();
            evaluacion(int);
            
            int getEvaluacion();
            void setEvaluacion(int);

            ~evaluacion();

};
#endif
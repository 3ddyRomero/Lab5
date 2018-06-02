exe:	mainLab5.o bodega.o evaluacion.o experiencia.o ingrediente.o
	g++ mainLab5.o bodega.o evaluacion.o experiencia.o ingrediente.o -o exe

mainLab5.o:	mainLab5.cpp bodega.h evaluacion.h experiencia.h ingrediente.h
	g++ -c	mainLab5.cpp

bodega.o:	bodega.h bodega.cpp evaluacion.h experiencia.h ingrediente.h
	g++ -c bodega.cpp

ingrediente.o:	ingrediente.h ingrediente.cpp evaluacion.h experiencia.h 
	g++ -c	ingrediente.cpp

experiencia.o:	experiencia.h experiencia.cpp evaluacion.h
	g++ -c experiencia.cpp

evaluacion.o:	evaluacion.h evaluacion.cpp
	g++ -c evaluacion.cpp






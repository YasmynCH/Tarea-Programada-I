FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/envioTipo1.cpp -o bin/envioTipo1.o
	g++ $(FLAGS) src/envioTipo2.cpp -o bin/envioTipo2.o
	g++ $(FLAGS) src/tipoEnvio.cpp -o bin/tipoEnvio.o

	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/test_envioTipo1_calculoEnvio.cpp -o bin/test_envioTipo1_calculoEnvio.o
	g++ $(FLAGS) tests/test_envioTipo1_calculoEnvioSegundaClase.cpp -o bin/test_envioTipo1_calculoEnvioSegundaClase.o
	g++ $(FLAGS) tests/test_envioTipo2_calculoEnvio.cpp -o bin/test_envioTipo2_calculoEnvio.o
	g++ $(FLAGS) src/envioTipo1.cpp -o bin/envioTipo1.o 
	g++ $(FLAGS) src/envioTipo2.cpp -o bin/envioTipo2.o 
	g++ $(FLAGS) src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ -g -o bin/test bin/test_envioTipo1_calculoEnvio.o bin/test_envioTipo2_calculoEnvio.o bin/envioTipo1.o bin/envioTipo2.o bin/tipoEnvio.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin
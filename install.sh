gcc -c -o module1.a module1.c
gcc -shared -o module1.so module1.a
gcc -o my duseit.c -ldl
./my

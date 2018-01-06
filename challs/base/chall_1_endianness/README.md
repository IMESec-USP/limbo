# Chall 1: Endian-ness

por Pedro Pereira (*Razgriz One*)

compilação: 
    $ gcc -o bin endian.c
execução:
    $ ./bin


[Endian-ness](https://en.wikipedia.org/wiki/Endianness) é um conceito que refere à 
ordem de interpretar uma parte da memória. Sistemas big-endian levam em consideração
que o byte mais significante fica "à esquerda" (antes na memória), enquanto sistemas little-endian levam
em consideração que o byte mais significante fica "à direita" (depois na memória).

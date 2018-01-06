# Chall 3: jumpy 1

por Pedro Pereira (_Razgriz One_)

FLAGS DE COMPILAÇÃO:
    gcc -o jumpy -m32 -fno-stack-protector jumpy.c
    -m32 : faz o programa ser 32-bit
    -fno-stack-protector : tira a proteção de stack dos buffers.

se não conseguir rodar o programa em modo 32-bit, provavelmente você precisa de libraries não instaladas no seu computador.
tente esse comando:
    $ sudo apt-get install g++-multilib libc6-dev-i386

Essa challenge é uma cópia da [Exploit exercises: protostar stack3](https://exploit-exercises.com/protostar/stack3/), então
[esse vídeo do LiveOverflow](https://www.youtube.com/watch?v=8QzOC8HfOqU) pode
ajudar bastante!

PS:
Eu consegui fazer o meu exploit funcionar *apenas* em python 2.7... o python 3.6 adiciona algumas coisas indesejadas na string, pelo que parece.
Tente os dois pra ver!


# pset2
Problem Set 2: Crypto.

caesar.c - Ceaser Cipher encription using a key given by user.

initials.c - Prompts for user's name and prints out only his/hers initials in capital letters

vigenere.c - Vigenere Cipher encription using a keyword given by user.




ANOTACOES DO WALKTHROUGH DA ZEMILA

a chave eh um command-line argument CLA
o texto para encriptar fica no prompt

./caesar 2
text to encript


validar input do usuario:
tem que ser DOIS CLA: ./caesar <key>
se for mais de 2 ou se nao colocar key:
- imprimir intrucoes
- encerrar programa

validar key:
deve que ser um ‘int’ 
mas entra como ‘elemento de array de caract’
-usar atoi (tranforma a Array To an Int) e se a array nao pode ser transformada num int, retorna 0.

 string num = “50”;
 int i = atoi(num);


atoi pertence a <stdlib.h>

——————————————————————————————————————————

prompt the user for the plain text (uma string)
pegar cada caractere da string e testar com:
isalpha(‘z’) -> true
isalpha(‘@’) -> false

isupper(‘A’) -> true
islower(‘A’) -> false

if (isalpha(‘a’))
{
	
}
——————————————————————————————————————————
wrap around

c = (p + k)%26
ci = (pi + K)%26

 caesar[i] = (mensagem[i] + k)% 26;

ci : ith ciphertext letter
pi : pth plaintext letter

%26 resto depois de dividir por 26
mas tem que ser com indice alfabetico, 
sendo indice de A =0 e de Z=26
e separado para minusculas

——————————————————————————————————————————
o plain text eh um array de caracteres
ex.:
string exemplo = “This is CS50”;
exemplo[0] = ’T’ exemplo[1] = h
strlen(exemplo) = 12
——————————————————————————————————————————


if (isalpha('a'))
{

isalpha
islower
isupper

if (isupper('z'))
{
    printf("z");
    
    
A=1 =65			64
B=2 =66			64
C=3 =67
D=4 =68			64
E=5 =69  69-64=5
F=6 =70
G=7 =71			64
H=8 =72
I=9 =73
J=10 =74
K=11 =75
L=12 =76
M=13 =77		
N=14 =78		64
O=15 =79
P=16 =80
Q=17 =81
R=18 =82
S=19 =83
T=20 =84
U=21 =85
V=22 =86
W=23 =87
X=24 =88
Y=25 =89
Z=26 =90		64-

a=1  =97   96
b=2  =98

printf("%c\n",  (  (  (message[i]) - 64 ) + k  ) % 26  );

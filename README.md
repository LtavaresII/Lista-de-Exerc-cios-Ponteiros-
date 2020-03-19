# Lista-de-Exercicios-Ponteiros-

Integrantes: Luis Fernando Tavares

Questão 1:
Os ponteiros servem para utilizar o endereço da memoria da posição de uma variavel, assim mesmo que você modifique o valor de uma variavel por referência, ela ainda vai estar disponivel para ser utilizado, isso é muito util para desenvolvimentos de codigo, pois economiza espaço na memoria, e entre outros meios como alocação dinâmica de memoria.

Questão 2:

p == &i : 1

*p - *q : -2

**&p : 3

3 - *p/(*q) + 7 : 10

Questão 3:

Endereço de p :61fecc

*p+2 :7 (i+2)

**&p: 5 (i)

3**p : 15 (3*i)

**&p+4: 9 (i+5)

Questão 4:
As ilegais são:

p = i

i = (*&)j

q = *p

Questão 5:

(a): 20

(b): 29.0

(c): P

(d): e

(e): P

(f): e

(g): t

(h): 31

(i): 45

(j): 27

(l): 31

(m): 45

(n): 27

Questão 6:

Contador/Valor/Valor/Endereco/Endereco:

i = 0,
vet[0] = 1.1,
*(f + 0) = 1.1,
&vet[0] = 61FEB4,
(f + 0) = 61FEB4.

i = 1,
vet[1] = 2.2,
*(f + 1) = 2.2,
&vet[1] = 61FEB8,
(f + 1) = 61FEB8.

i = 2,
vet[2] = 3.3,
*(f + 2) = 3.3,
&vet[2] = 61FEBC,
(f + 2) = 61FEBC.

i = 3,
vet[3] = 4.4,
*(f + 3) = 4.4,
&vet[3] = 61FEC0,
(f + 3) = 61FEC0.

i = 4,
vet[4] = 5.5,
*(f + 4) = 5.5,
&vet[4] = 61FEC4,
(f + 4) = 61FEC4.

Questão 7:

pulo[5] = {1,2,3,4,5}

*(pulo + 2), Posicao 3: 3

*(pulo + 4), Posicao 5: 5

pulo + 2, Endereco da posicao 3: 6422212

pulo + 4, Endereco da posicao 5: 6422220

Questão 8:

São validas: p = mat + 1, x = (*mat)++.

Já que em p modifica o endereco da posição 1 do vetor mat[] e o x mostra o valor da primeira posição do vetor.

Não são validas: p = mat++, p = ++mat.

Nesse caso esse tipo de notação esta tentendo incrementar o valor de mat[], porem não é possivel fazer isso em uma variavel do tipo int[4](4 bytes).

Questão 9:

O primeiro programa percore o vetor vet[] e imprime os valores de cada posição.

O segundo percore vet[] e imprime os endereços de cada posição.

Questão 10:

a) char x[4]: 4092+1 (4093), 4092+2 (4094), 4092+3 (4095).

b) int x[4]: 4092+2 (4094), 4092+4 (4096), 4092+6 (4098).

c) float x[4]: 4092+4 (4096), 4092+8 (4100), 4092+12 (4104).

d) double x[4]: 4092+8 (4100), 4092+16 (4108), 4092+24 (4116).
 
Questão 11:

Questão 12:

Questão 13:

Questão 14:

Questão 15:

Questão 16:

Questão 17:

Questão 18:

Questão 19:

Questão 20:

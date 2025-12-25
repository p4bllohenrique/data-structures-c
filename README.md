# Data Structures in C

O **data-structures-c** é um projeto acadêmico criado para praticar e entender, na prática, as estruturas de dados e algoritmos básicos da Ciência da Computação usando a linguagem C.

A ideia do repositório é servir como um material de apoio aos estudos, com implementações simples, organizadas e fáceis de acompanhar.

Cada estrutura pode ser testada diretamente pelo terminal, ajudando a visualizar como ela funciona e como os algoritmos se comportam durante a execução.

Este projeto faz parte do meu aprendizado e estudos da graduação de Ciência da Computação, e está em constante evolução conforme novos conceitos são estudados.

Sugestões e melhorias são bem-vindas.

---
# Principais Complexidade de Algoritmo
Antes de apresentar as estruturas de dados e os algoritmos presentes neste repositório, segue um resumo introdutório sobre análise de complexidade de algoritmos, utilizando a notação $Big-O$.

A notação $Big-O$ é usada para descrever como o tempo de execução de um algoritmo cresce conforme o aumento da quantidade de dados de entrada.

Abaixo estão algumas das **principais** complexidades mais utilizadas no dia a dia, acompanhadas de um exemplo gráfico para facilitar a visualização e comparação entre elas.

## Modelo Gráfico Notação $Big(O)$

![alt text](.github/assets/image-2.png)

---
## Complexidade $O(1)$
A complexidade $O(1)$, também chamada de complexidade constante, é a mais rápida de todas. No gráfico é possível observar que ela aparece como uma linha reta, pois o tempo de execução não varia conforme a quantidade de dados.

Isso significa que o algoritmo sempre executa em tempo constante, independentemente do tamanho da entrada.

Um exemplo clássico de $O(1)$ é o acesso a um elemento de um array por índice. Não importa se o array possui $10$, $100$ ou $1.000.000$ de elementos: acessar $array[5]$ sempre leva o mesmo tempo, pois o índice aponta diretamente para a posição desejada na memória.

---
## Complexidade $O(Log n)$
A complexidade $O(log N)$ possui um crescimento logarítmico, o que significa que o tempo de execução aumenta conforme os dados crescem, porém a uma taxa muito menor quando comparada ao crescimento da quantidade de dados.

Um exemplo clássico desse comportamento ocorre em algoritmos como a **busca binária**, onde a cada iteração o problema é reduzido pela metade.

### Exemplo prático
Suponha que, para cada iteração do laço, o programa leve 1 milésimo de segundo para executar
(obviamente, esse valor é apenas uma suposição):

#### Caso 1 — 100 elementos
```
log₂ 100 ≈ 6,64 ≈ 7 passos
7 passos × 1 ms ≈ 7 ms
```
#### Caso 2 — 1.000.000.000 de elementos

```
log₂ 1.000.000.000 ≈ 29,9 ≈ 30 passos
30 passos × 1 ms = 29,9 ms (≈ 30 ms)
```
---
### Comparação do crescimento

**Quantidade de dados**
```
100 → 1.000.000.000  (crescimento de 10.000.000×)
```

**Tempo de execução**
```
7 ms → 29,9 ms       (crescimento de ~4,27×)
```
---

### Conclusão
Mesmo com um aumento extremamente grande na quantidade de dados, o tempo de execução cresce muito pouco.
Esse comportamento demonstra claramente a eficiência de algoritmos com complexidade $O(log N)$, tornando-os ideais para trabalhar com grandes volumes de dados.

---
## Complexidade $O(n)$
A complexidade $O(n)$ possui um crescimento linear, o que significa que o tempo de execução cresce proporcionalmente à quantidade de dados de entrada.

Em outras palavras, se a quantidade de dados dobra, o tempo de execução também dobra. 

Esse comportamento é comum em algoritmos que precisam percorrer todos os elementos, como buscas lineares ou laços simples que analisam cada item uma única vez.

### Exemplo prático
Suponha que, para processar cada dado, o programa leve 1 milésimo de segundo (1 ms) para executar (novamente, esse valor é apenas uma suposição).
#### Caso 1 — 100 dados

```
N ≈ 100
100 operações × 1 ms ≈ 100 ms
```
#### Caso 2 — 1.000.000.000 dados
```
N ≈ 1.000.000.000
1.000.000.000 operações × 1 ms ≈ 1.000.000.000 ms (11,57 Dias)
```
---
### Conclusão
Diferente da complexidade $O(log N)$, em $O(N)$ o tempo de execução cresce na mesma proporção que a quantidade de dados. Por isso, algoritmos lineares podem se tornar lentos quando aplicados a volumes muito grandes de informação.

---
## Complexidade $O(n²)$
A complexidade $O(n²)$ possui um crescimento quadrático, o que significa que o tempo de execução cresce de forma muito mais acelerada à medida que a quantidade de dados aumenta.

Isso ocorre porque, para cada elemento, o algoritmo precisa percorrer novamente todos os demais elementos.

Esse comportamento é comum em algoritmos que utilizam dois laços aninhados, como alguns algoritmos de ordenação simples (ex.: bubble sort, selection sort).
### Exemplo prático
Suponha que, para cada operação, o programa leve 1 milésimo de segundo (1 ms) para executar
(novamente, esse valor é apenas uma suposição).
#### Caso 1 — 100 dados
```
N ≈ 100
N² ≈ 100² ≈ 10.000 operações

Tempo Real: 10.000 operações × 1 ms = 10.000 ms
10.000 ms = 10 s
```
#### Caso 2 — 1.000.000.000 dados
```
N = 1.000.000.000
N² = (1.000.000.000)² = 10¹⁸ operações

Tempo Real: 10¹⁸ operações × 1 ms = 10¹⁸ ms

Conversão de Tempo: 10¹⁸ ms = 10¹⁵ s 
10¹⁵ s ≈ 31.709.791 anos
```
---
### Conclusão
Algoritmos com complexidade $O(N²)$ se tornam rapidamente inviáveis para grandes volumes de dados. Mesmo um crescimento moderado na entrada causa um aumento explosivo no tempo de execução, o que torna esse tipo de algoritmo adequado apenas para conjuntos pequenos de dados.

---
# Principais Estruturas de Dados

Arrays (Vetores/Matrizes): Sequência de elementos do mesmo tipo, com acesso por índice (sequencial/aleatório).

Árvores: Estrutura hierárquica (nós e raízes), não linear (ex: Árvores Binárias, AVL).

Grafos: Conexões entre vértices (nós) e arestas, ideais para redes sociais, rotas (Dijkstra).

Tabelas Hash (Hash Maps/Dicionários): Mapeiam chaves a valores para acesso rápido (O(1) em média). 

### 1. Lista Encadeada (Linked List)
Uma estrutura linear onde cada elemento (nó) contém um valor e um ponteiro para o próximo nó.
* **Utilidade:** Ideal quando o tamanho dos dados é dinâmico e ocorrem muitas inserções/remoções, tendo em vista que esse tipo de estrutura de dados tem complexidade $O(1)$ (constante) para realizar a inserção e removções em suas extremidades, mas não sendo indicada quando o objetivos for realizar uma quantidade significativa de buscas. As buscas tem complexidade $O(n)$ (linear), visto que os elementos são acessador por "endereços" e cada elemento possui o endereço do próximo elemnto, fazendo com que seja necessário percorrer toda a lista para chegar ao item procurado.
* **Complexidade:**
    * Inserção/Remoção: $O(1)$ (no início) ou $O(n)$ (no fim/meio).
    * Busca: $O(n)$.

![alt text](image.png)



### 2. Pilha (Stack)
Segue o princípio **LIFO** (*Last In, First Out*). Imagine uma pilha de pratos: você só mexe no topo.
* **Utilidade:** Histórico de navegação, desfazer ações (Undo) e chamadas de funções no sistema.
* **Complexidade:**
    * Push (Inserir): $O(1)$
    * Pop (Remover): $O(1)$

![alt text](image-3.png)



### 3. Fila (Queue)
Segue o princípio **FIFO** (*First In, First Out*). O primeiro a chegar é o primeiro a ser atendido.
* **Utilidade:** Escalonamento de processos de CPU, gerenciamento de pacotes de rede e buffers.
* **Complexidade:**
    * Enqueue (Entrar): $O(1)$
    * Dequeue (Sair): $O(1)$

![alt text](image-4.png)



### 4. Algoritmo de Dijkstra
Um algoritmo de busca em grafos que calcula o caminho mais curto de um nó de origem para todos os outros em um grafo com pesos positivos.
* **Utilidade:** Roteamento de GPS (Google Maps) e protocolos de rede (OSPF).
* **Complexidade:** $O(V^2)$ com matriz de adjacência ou $O(E \log V)$ com fila de prioridade (onde $V$ = vértices e $E$ = arestas).

![alt text](image-5.png)

---

## 📊 Tabela de Complexidade Big(O)

| Estrutura | Acesso | Busca | Inserção | Remoção |
| :--- | :---: | :---: | :---: | :---: |
| **Lista Encadeada** | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ |
| **Pilha** | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ |
| **Fila** | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ |

---

## Como Usar

### Compilação
Certifique-se de ter o GCC instalado em sua máquina:
```bash
gcc main.c -o data_structures
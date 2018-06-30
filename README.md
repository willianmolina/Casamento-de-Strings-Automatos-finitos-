# Casamento de Strings
1. _**Descrição do Trabalho**_

A implementação dos Algoritmos foi feita apartir da Linguagem de Programação C, utilizando a IDE Code::Blocks. E tem como parte na aprovação da disciplina de Teoria da Computação do Curso de Ciências da Computação, na Universidade Estadual do Norte do Paraná (UENP).


Neste Trabalho serão apresentadas as implementações das funções: StartsWith; EndsWith e Contains, utilizando a ideia de Autômatos Finitos. Cada função tem como objetivo identificar, respectivamente o: Prefixo(StartsWith/Começa com), Sufixo(EndsWith/Termina com) e Subpalavra(Contains/Contém) de determinada Palavra.

2. _**Implementação**_

Serão agora Explicados o Funcionamento de cada **Função** do Trabalho, junto à sua relação com os Autômatos Finitos:

 * _StartsWith (Começa com)_-
 A implementação da função: 'Começa com', tem como objetivo identificar as primeiras letras de uma palavra prédeterminada pelo usuario. Neste caso, o código possui um Vetor de entrada que será responsavel por armazenar a Palavra digitada pelo usuario, e outro vetor sendo uma chave, que armazenará o Prefixo cujo usuario deseja pesquisar. Sendo assim, o Vetor de Entrada agirá como a Fita do autômato, que será percorrido pela 'chave', e durante esta percorrida, um contador será responsavel por identificar as letras iguais, e retornar o resultado para o usuario. Caso todas as letras forem iguais, o Prefixo esta contido na Palavra, caso contrario, não esta.
 
 * _EndsWith (Termina com)_-
 A implementação da função: 'Termina com', tem como objetivo identificar as ultimas letras de uma palavra prédeterminada pelo usuario. Assim como na explicação da implementação anterior, o código possui um Vetor de entrada que será responsavel por armazenar a Palavra digitada pelo usuario, e outro vetor sendo uma chave, que armazenará o Sufixo cujo usuario deseja pesquisar. Sendo assim, o Vetor de será percorrido pela 'chave', e durante esta percorrida, um contador será responsavel por identificar as letras iguais, e retornar o resultado para o usuario. Caso todas as letras forem iguais, o Sufixo esta contido na Palavra, caso contrario, não esta.
 
 * _Contains (Contém)_-
 A implementação da função: 'Contém', tem como objetivo identificar qualquer Subpalavra de uma palavra, prédeterminada pelo usuario. Assim como na explicação da implementação anterior, o código possui um Vetor de entrada que será responsavel por armazenar a Palavra digitada pelo usuario, e outro vetor sendo uma chave, que armazenará a Subpalavra cujo usuario deseja pesquisar. Sendo assim, o Vetor de será percorrido pela 'chave', e durante esta percorrida, um contador será responsavel por identificar as letras iguais, e retornar o resultado para o usuario. Caso todas as letras forem iguais, a Subpalavra esta contida na Palavra, caso contrario, não esta.
 
 3. _**Funcionamento**_
 O usuario deverá Digitar uma Entrada, e em sequencia, deverá fornecer o Prefixo, Sufixo e a Subpalavra desejada. Após isso, o algoritmo se encarregará de retornar o resultado, onde, a Entrada irá conter ou não o Prefixo, Sufixo e Subpalavra.

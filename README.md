# avaliacao-final
Avaliação final de desenvolvimento de algoritmos com C++

### Nome 
---
Gabriélly Teodoro da Silva

### Curso
---
Técnico em informática para internet

### Unidade Curricular
---
UC 6 - Desenvolver algoritmos

### Descrição do sistema
---
Sistema de gerenciamento de alunos de uma academia no qual se pode adicionar, remover, atualizar, buscar e listar todos os alunos. Esse sistema facilita o controle de quantos alunos já existem e a busca por algum que necessita atualização ou remoção.

### Decisões técnicas
---
Para guardar as informações eu utilizei duas listas diferentes: uma para os nomes e outra para as mátriculas. Cada nome fica em uma mesma posição nas duas listas deixando mais organizado. Depois dividi o sistema em cinco partes para cada função: adicionar, remover,atualizar, buscar e listar. O que deixou mais organizado e simples de corrigir caso houvessem erros durante o desenvolvimento do código. Para deixar fácil na parte de testar defini um limite máximo de alunos, coloquei uma verificação de matrícula para checar se não está sendo registrada uma já existente e ela também verifica se a matrícula existe e se foi encontrada. Por fim o loop foi feito com while por meio do menu onde cada função tinha um número e para finalizar e sair do sistema se utiliza o número 0.
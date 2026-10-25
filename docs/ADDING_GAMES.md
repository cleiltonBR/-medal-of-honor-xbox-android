# Adicionar jogos do Xbox Clássico

## Objetivo
Separar os dados específicos de cada jogo do runtime Android compartilhado.

## Etapas do port
1. Obter o XBE de uma cópia legítima do jogo.
2. Identificar o entry point, as seções de código e dados, os imports
   e a versão do XDK a partir do XBE.
3. Gerar o código recompilado com XboxXBE-Recomp.
4. Auditar funções não resolvidas e chamadas de sistema.
5. Implementar ou reutilizar as APIs do Xbox exigidas pelo jogo.
6. Integrar memória convidada, despacho de funções e inicialização.
7. Integrar renderização, áudio, controles e ciclo de vida Android.
8. Compilar para ARM64 e testar com os arquivos do jogo.
9. Registrar os resultados e as limitações específicas do título.

## Regras importantes
- Não presumir um endereço-base de memória comum a todos os jogos.
- Não presumir que stubs de funções não resolvidas sejam seguros.
- Não considerar uma compilação bem-sucedida como prova de que o jogo inicia.
- Não vincular o código recompilado ao APK antes de resolver os símbolos
  e a inicialização exigida pelo runtime.
- Manter cada configuração específica do jogo separada do runtime comum.

## Estado atual
O projeto Android existente ainda contém código de runtime preliminar.
O modelo TOML não é carregado automaticamente pelo aplicativo.
A integração com o runtime Android do Black ainda precisa ser implementada.

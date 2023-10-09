.text

main: addi $10 $0 0 #contador divisores
      addi $14 $0 0 #contador primos
      addi $11 $0 1
      addi $15 $0 2
      addi $16 $0 1
      addi $13 $0 3
      addi $2 $0 5
      syscall
      add $8 $0 $2
      addi $2 $0 5
      syscall
      addi $9 $2 1      

for:  beq $8 $9 fim
      div $8 $11
      mfhi $12
      beq $12 $0 att
      beq $12 $16 nprimo
      j for
      
att:  addi $10 $10 1
      beq $10 $13 nprimo
      beq $10 $15 primo
      addi $11 $11 1
      j for

nprimo: addi $8 $8 1
        addi $11 $0 1
        addi $10 $0 0
        j for      

primo: addi $14 $14 1
       addi $8 $8 1
       addi $11 $0 1
       addi $10 $0 0
       j for
       
fim:  add $4 $0 $14
      addi $2 $0 1
      syscall
      addi $2 $0 10
      syscall

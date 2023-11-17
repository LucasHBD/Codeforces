.text

main:
	lui $9 0x1001
	addi $8 $0 3200
	addi $10 $0 512
	addi $11 $0 1536
	addi $12 $0 3712
	addi $13 $0 8
	addi $14 $0 7
	addi $15 $0 8
	addi $16 $0 7
	addi $17 $0 8
	addi $18 $0 30
	addi $19 $0 29
	addi $5 $0 0x0084bdf0
	addi $6 $0 0x0000ff00
	addi $7 $0 0x0099400C
forceu: 
	beq $8 $0 forgrama
	sw $5 0($9)
	addi $9 $9 4
	addi $8 $8 -1
	j forceu
forgrama:
	beq $10 $0 forterra
	sw $6 0($9)
	addi $9 $9 4
	addi $10 $10 -1
	j forgrama
forterra:
	beq $11 $0 forpedra
	sw $7 0($9)
	addi $9 $9 4
	addi $11 $11 -1
	j forgrama
forpedra:
	beq $12 $0 cont
	addi $5 $0 0x00a3a3a3
	sw $5 0($9)
	addi $9 $9 4
	addi $12 $12 -1
	j forpedra
cont:	
	lui $9 0x1001
forarvore:
	beq $13 $0 cont2
	addi $6 $0 0x00c44d12
	sw $6 8800($9)
	addi $9 $9 512
	addi $13 $13 -1
	j forarvore
cont2:
	lui $9 0x1001
forfolha:
	beq $14 $0 cont3
	addi $6 $0 0x0051d64b
	sw $6 4692($9)
	sw $6 5204($9)
	sw $6 5716($9)
	sw $6 6228($9)
	sw $6 6740($9)
	sw $6 7252($9)
	sw $6 7764($9)
	sw $6 8276($9)
	addi $9 $9 4
	addi $14 $14 -1
	j forfolha
cont3:
	lui $9 0x1001
forarvore2:
	beq $15 $0 cont4
	addi $6 $0 0x00c44d12
	sw $6 8868($9)
	addi $9 $9 512
	addi $15 $15 -1
	j forarvore2
cont4:
	lui $9 0x1001
forfolha2:
	beq $16 $0 cont5
	addi $6 $0 0x0051d64b
	sw $6 4760($9)
	sw $6 5272($9)
	sw $6 5784($9)
	sw $6 6296($9)
	sw $6 6808($9)
	sw $6 7320($9)
	sw $6 7832($9)
	sw $6 8344($9)
	addi $9 $9 4
	addi $16 $16 -1
	j forfolha2
cont5:
	lui $9 0x1001
forparede:
	beq $17 $0 cont6
	addi $6 $0 0x00dda32a
	sw $6 8976($9)
	sw $6 9096($9)
	addi $9 $9 512
	addi $17 $17 -1
	j forparede
cont6:
	lui $9 0x1001
forteto:
	beq $18 $0 cont7
	addi $6 $0 0x00dda32a
	sw $6 8980($9)
	addi $9 $9 4
	addi $18 $18 -1
	j forteto
cont7:
	lui $9 0x1001
forfundo:
	beq $19 $0 fimtela
	addi $6 $0 0x0096600e
	sw $6 9492($9)
	sw $6 10004($9)
	sw $6 10516($9)
	sw $6 11028($9)
	sw $6 11540($9)
	sw $6 12052($9)
	sw $6 12564($9)
	addi $9 $9 4
	addi $19 $19 -1
	j forfundo
fimtela: 
	addi $2 $0 10
	syscall

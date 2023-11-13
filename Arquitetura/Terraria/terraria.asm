.text

main:
	lui $9 0x1001
	addi $8 $0 3200
	addi $10 $0 512
	addi $11 $0 1536
	addi $12 $0 3712
	addi $13 $0 8
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
	beq $12 $0 forarvore
	addi $5 $0 0x00a3a3a3
	sw $5 0($9)
	addi $9 $9 4
	addi $12 $12 -1
	j forpedra
forarvore:
	addi $9 $0 0
	beq $13 $0 fimtela
	addi $6 $0 0x00c44d12
	sw $6 4($9)
	addi $9 $9 512
	addi $13 $13 -1
	j forarvore
fimtela: 
	addi $2 $0 10
	syscall

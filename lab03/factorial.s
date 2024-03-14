.globl factorial

.data
n: .word 3

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall
factorial:
    add t0, x0, a0 
    add  t1,x0,a0
    j fact
fact:
    addi t1, t1, -1       
    beq t1, x0, label    
        
    mul a0, a0, t1        
    j fact
        

label:
                # If n == 0, factorial is 1
    jr ra                   # Return


  

                

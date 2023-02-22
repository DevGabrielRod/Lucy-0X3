%include 'libR.inc'
global _calc

segment .text

_calc:
    MOV EAX,    EDI
    MOV EBX,    ESI
    ADD EAX,    EBX    
    RET
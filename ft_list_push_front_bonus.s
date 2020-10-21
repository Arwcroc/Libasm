					global	ft_list_push_front
					extern	malloc

					section	.text
ft_list_push_front:
					xor		rax, rax
					cmp		rdi, 0
					je		_end_zero

_loop:
					push	rdi
					push	rsi
					mov		rdi, 16				;sizeof t_list > 16
					call	malloc				
					cmp		rax, 0				;securite malloc
					pop		rsi					;data
					pop		rdi					;pointeur **list
					je		_end_zero
					mov		[rax], rsi			;data > list data
					mov		rbx, [rdi]			;*list first element
					mov		[rax + 8], rbx		;*list > list next
					mov		[rdi], rax			;*new element > *list

_end_zero:
					ret

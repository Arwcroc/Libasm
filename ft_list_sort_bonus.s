				global	ft_list_sort
				extern	ft_list_size

				section	.text
ft_list_sort:
				mov		r15, rdi
				mov		r14, rsi
				mov		r13, [r15]

_begin:
				cmp		r12, 0
				je		_end_sort
				mov		r13, [r15]
_loop:
				mov		rdi, [r13]
				mov		rdx, [r13 + 8]
				cmp		rdx, 0
				je		_end_sort

_end_sort:
				dec		r12
				jmp		_begin
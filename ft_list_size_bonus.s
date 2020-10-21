				global	ft_list_size

				section	.text
ft_list_size:
				xor		rax, rax
				cmp		rdi, 0
				je		_end

_loop:
				inc		rax
				mov		rdi, [rdi + 8]
				cmp		rdi, 0
				je		_end
				jmp		_loop

_end:
				ret
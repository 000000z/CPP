
all:
	find . -type d -name "ex*"  -exec sh -c 'cd "{}" && make' \;

fclean:
	find . -type d -name "ex*"  -exec sh -c 'cd "{}" && make fclean' \;
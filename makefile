
menu: link exec

link:
	gcc main.c srce/*.c test/*.c -o menu

exec: ;@./menu
free: ;@if test -f menu;then rm -v menu;fi

myqueue:queue.o enqueue.o dequeue.o display.o
	gcc -o myqueue ./../object/queue.o ./../object/enqueue.o ./../object/dequeue.o ./../object/display.o

queue.o:
	gcc -c queue.c -o ./../object/queue.o -I ./../headers
enqueue.o:
	gcc -c enqueue.c -o ./../object/enqueue.o -I ./../headers
dequeue.o:
	gcc -c dequeue.c -o ./../object/dequeue.o -I ./../headers
display.o:
	gcc -c display.c -o ./../object/display.o -I ./../headers


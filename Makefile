chat: chatbot.o chatfunctions.o
	gcc -o chat chatbot.o chatfunctions.o

chatbot.o: chatbot.c chatfunctions.h
	gcc -c chatbot.c

chatfunctions.o: chatfunctions.c chatfunctions.h
	gcc -c chatfunctions.c

clean:
	-rm *.o *.gch chat

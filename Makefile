SRC = unity/unity.c\
src/sum.c\
test/test_sum.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = sum.exe

all: $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/sum.c main.c
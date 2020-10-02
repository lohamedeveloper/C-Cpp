gcc -o compilado *.c
if [ $? -eq 0 ];then
	echo "compilado com sucesso!"
	./compilado
else 
	echo "não compilado"
fi
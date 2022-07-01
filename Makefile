creator.x: main.o
	g++ -std=c++17 main.o -o creator.x 

main.o: main.cpp
	g++ -std=c++17 main.cpp -o main.o -c

clean:
	rm -f *.o creator.x



#echo "# test" >> README.md
#git init
#git add README.md
#git commit -m "first commit"
#git branch -M main
#git remote add origin https://github.com/andykr1k/test.git
#git push -u origin main


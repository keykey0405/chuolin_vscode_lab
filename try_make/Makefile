#目标app，依赖两个cpp源码文件
#app.exe: main.cpp calc.cpp
#	#g++ main.cpp calc.cpp -o app.exe

#目标clean，没有依赖文件，专门用来清理
#clean:
#	#del app.exe


#编译，生成app.exe
#mingw32-make
#清理，删除app.exe
#mingw32-make clean
#make不认/**/只认#还要一行行打
TARGET = myapp.exe
$(TARGET): main.o calc.o
	g++ main.o calc.o -o $@

main.o: main.cpp calc.h
	g++ -c main.cpp

calc.o: calc.cpp calc.h
	g++ -c calc.cpp

clean:
	del $(TARGET) main.o calc.o
#规则：
#g++ -c：只编译不链接，生成.o目标文件
#依赖写了calc.h：头文件改动，也会触发重编译（这个很重要！）
#操作测试：
#mingw32-make clean
#mingw32-make → 生成 main.o、calc.o、app.exe
#不改任何代码，再次mingw32-make → Nothing to be done
#只修改 main.cpp，再 make：只重新编译 main.cpp 生成 main.o，calc.o 不会重新编译！
#✅ 这就是 Make 核心价值：哪个文件改了，才编译哪个，节省时间
#坑：头文件calc.h如果改了，main.o 和 calc.o 都要重编，因为两个 cpp 都 include 它。
#实验 ：模拟头文件改动测试
#打开 calc.h，随便加一行注释或者改函数声明，保存。
#执行mingw32-make
#👉 会同时重新编译 main.cpp、calc.cpp。
#原理：main.cpp 和 calc.cpp 都 #include 了 calc.h，头文件一变，两个.o 都要重新生成。

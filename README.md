##	文件操作---系统调用

###	1.open

	int open(const char *path, int oflags);

	int open(const char *path, int oflags, mode_t mode );

oflags常用：

	O_RDONLY 以只读方式
	O_WRONLY 以只写方式
	O_RDWR   以读写方式打开
	O_CREAT  不存在创建

###	2.read

	size_t read(int fildes, void *buf, size_t nbytes);

	参数说明：
	fildes：文件描述符，标识要读取的文件。如果为0，则从标准输入读数据。类似于scanf（）的功能。
	*buf：缓冲区，用来存储读入的数据。
	nbytes：要读取的字符数。
	返回值：size_t返回成功读取的字符数，它可能会小于请求的字节数。


###	3.write

	size_t write(int fildes, const void *buf, size_t nbytes);

	参数说明：
	fildes：文件描述符，标识了要写入的目标文件。例如:fildes的值为1，就像标准输出写数据，也就是在显示屏上显示数据；如果为 2 ，则想标注错误写数据。
	*buf：待写入的文件，是一个字符串指针。
	nbytes：要写入的字符数。

###	4.close

	int close(int fildes);




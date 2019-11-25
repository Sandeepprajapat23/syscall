 #include <stdio.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
 #include <errno.h>
 #include <unistd.h>
 #include <stdlib.h>

 int main(int argc,char const *argv[]){
     int fd;
     fd =open("dac.txt",O_WRONLY);
     if(-1==fd){
         perror("Error opening the file\n");
         exit(EXIT_FAILURE);
     }
    write(fd,"hello\n",6);
    close(fd);
    return 0;
 }

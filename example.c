
// Osama Maher Alrifai 1939902

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
int main() {
int pipefd[2];
pid_t pid;
// Step 1: Create a pipe
if (pipe(pipefd) == -1) {
perror("pipe");
exit(EXIT_FAILURE);
}
// Step 2: Fork a child process
pid = fork();
if (pid == -1) {
perror("fork");
exit(EXIT_FAILURE);
}
if (pid == 0) { // Child process
// Step 3
close(pipefd[0]); // Close unused read end
// Open the text file for reading
FILE *fp = fopen("textfile.txt", "r");
if (fp == NULL) {
perror("fopen");
exit(EXIT_FAILURE);
}
char buffer[1024];
size_t bytesRead;
// Read the contents of the text file into memory
while ((bytesRead = fread(buffer, 1, sizeof(buffer), fp)) > 0) {
// Write the contents of the text file to the pipe 
write(pipefd[1], buffer, bytesRead);
}
// Close the text file
fclose(fp);
// Close the write end of the pipe
close(pipefd[1]);
// Exit the child process
exit(EXIT_SUCCESS);
} else { // Parent process
// Step 4
close(pipefd[1]); // Close unused write end
char buffer[1024];
ssize_t bytesRead;
// Read the contents of the pipe
while ((bytesRead = read(pipefd[0], buffer, sizeof(buffer))) > 0) {
// Print the contents of the pipe to the screen
write(STDOUT_FILENO, buffer, bytesRead);
}
// Close the read end of the pipe
close(pipefd[0]);
}
return 0;
}
int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_usage_and_exit();
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    // Open the source file for reading
    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_read_error_and_exit(file_from);
    }

    // Open or create the destination file for writing, truncate it if it already exists
    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1) {
        print_write_error_and_exit(file_to);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    // Copy content from source file to destination file
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            print_write_error_and_exit(file_to);
        }
    }

    if (bytes_read == -1) {
        print_read_error_and_exit(file_from);
    }

    // Close file descriptors
    if (close(fd_from) == -1) {
        print_close_error_and_exit(fd_from);
    }

    if (close(fd_to) == -1) {
        print_close_error_and_exit(fd_to);
    }

    return 0;
}

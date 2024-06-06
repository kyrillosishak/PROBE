void init_function_pointers()
{
  unwrapped_fopen = dlsym(RTLD_NEXT, "fopen");
  unwrapped_freopen = dlsym(RTLD_NEXT, "freopen");
  unwrapped_fclose = dlsym(RTLD_NEXT, "fclose");
  unwrapped_fcloseall = dlsym(RTLD_NEXT, "fcloseall");
  unwrapped_openat = dlsym(RTLD_NEXT, "openat");
  unwrapped_open = dlsym(RTLD_NEXT, "open");
  unwrapped_creat = dlsym(RTLD_NEXT, "creat");
  unwrapped_close = dlsym(RTLD_NEXT, "close");
  unwrapped_close_range = dlsym(RTLD_NEXT, "close_range");
  unwrapped_closefrom = dlsym(RTLD_NEXT, "closefrom");
  unwrapped_dup = dlsym(RTLD_NEXT, "dup");
  unwrapped_dup2 = dlsym(RTLD_NEXT, "dup2");
  unwrapped_dup3 = dlsym(RTLD_NEXT, "dup3");
  unwrapped_fcntl = dlsym(RTLD_NEXT, "fcntl");
  unwrapped_chdir = dlsym(RTLD_NEXT, "chdir");
  unwrapped_fchdir = dlsym(RTLD_NEXT, "fchdir");
  unwrapped_opendir = dlsym(RTLD_NEXT, "opendir");
  unwrapped_fdopendir = dlsym(RTLD_NEXT, "fdopendir");
  unwrapped_readdir = dlsym(RTLD_NEXT, "readdir");
  unwrapped_readdir_r = dlsym(RTLD_NEXT, "readdir_r");
  unwrapped_readdir64 = dlsym(RTLD_NEXT, "readdir64");
  unwrapped_readdir64_r = dlsym(RTLD_NEXT, "readdir64_r");
  unwrapped_closedir = dlsym(RTLD_NEXT, "closedir");
  unwrapped_rewinddir = dlsym(RTLD_NEXT, "rewinddir");
  unwrapped_telldir = dlsym(RTLD_NEXT, "telldir");
  unwrapped_seekdir = dlsym(RTLD_NEXT, "seekdir");
  unwrapped_scandir = dlsym(RTLD_NEXT, "scandir");
  unwrapped_scandir64 = dlsym(RTLD_NEXT, "scandir64");
  unwrapped_scandirat = dlsym(RTLD_NEXT, "scandirat");
  unwrapped_getdents64 = dlsym(RTLD_NEXT, "getdents64");
  unwrapped_ftw = dlsym(RTLD_NEXT, "ftw");
  unwrapped_ftw64 = dlsym(RTLD_NEXT, "ftw64");
  unwrapped_nftw = dlsym(RTLD_NEXT, "nftw");
  unwrapped_nftw64 = dlsym(RTLD_NEXT, "nftw64");
  unwrapped_link = dlsym(RTLD_NEXT, "link");
  unwrapped_linkat = dlsym(RTLD_NEXT, "linkat");
  unwrapped_symlink = dlsym(RTLD_NEXT, "symlink");
  unwrapped_symlinkat = dlsym(RTLD_NEXT, "symlinkat");
  unwrapped_readlink = dlsym(RTLD_NEXT, "readlink");
  unwrapped_readlinkat = dlsym(RTLD_NEXT, "readlinkat");
  unwrapped_canonicalize_file_name = dlsym(RTLD_NEXT, "canonicalize_file_name");
  unwrapped_realpath = dlsym(RTLD_NEXT, "realpath");
  unwrapped_unlink = dlsym(RTLD_NEXT, "unlink");
  unwrapped_rmdir = dlsym(RTLD_NEXT, "rmdir");
  unwrapped_remove = dlsym(RTLD_NEXT, "remove");
  unwrapped_rename = dlsym(RTLD_NEXT, "rename");
  unwrapped_mkdir = dlsym(RTLD_NEXT, "mkdir");
  unwrapped_mkdirat = dlsym(RTLD_NEXT, "mkdirat");
  unwrapped_stat = dlsym(RTLD_NEXT, "stat");
  unwrapped_stat64 = dlsym(RTLD_NEXT, "stat64");
  unwrapped_fstat = dlsym(RTLD_NEXT, "fstat");
  unwrapped_fstat64 = dlsym(RTLD_NEXT, "fstat64");
  unwrapped_lstat = dlsym(RTLD_NEXT, "lstat");
  unwrapped_lstat64 = dlsym(RTLD_NEXT, "lstat64");
  unwrapped_statx = dlsym(RTLD_NEXT, "statx");
  unwrapped_fstatat = dlsym(RTLD_NEXT, "fstatat");
  unwrapped_fstatat64 = dlsym(RTLD_NEXT, "fstatat64");
  unwrapped_chown = dlsym(RTLD_NEXT, "chown");
  unwrapped_fchown = dlsym(RTLD_NEXT, "fchown");
  unwrapped_chmod = dlsym(RTLD_NEXT, "chmod");
  unwrapped_fchmod = dlsym(RTLD_NEXT, "fchmod");
  unwrapped_access = dlsym(RTLD_NEXT, "access");
  unwrapped_faccessat = dlsym(RTLD_NEXT, "faccessat");
  unwrapped_utime = dlsym(RTLD_NEXT, "utime");
  unwrapped_utimes = dlsym(RTLD_NEXT, "utimes");
  unwrapped_lutimes = dlsym(RTLD_NEXT, "lutimes");
  unwrapped_futimes = dlsym(RTLD_NEXT, "futimes");
  unwrapped_truncate = dlsym(RTLD_NEXT, "truncate");
  unwrapped_truncate64 = dlsym(RTLD_NEXT, "truncate64");
  unwrapped_ftruncate = dlsym(RTLD_NEXT, "ftruncate");
  unwrapped_ftruncate64 = dlsym(RTLD_NEXT, "ftruncate64");
  unwrapped_mknod = dlsym(RTLD_NEXT, "mknod");
  unwrapped_tmpfile = dlsym(RTLD_NEXT, "tmpfile");
  unwrapped_tmpfile64 = dlsym(RTLD_NEXT, "tmpfile64");
  unwrapped_tmpnam = dlsym(RTLD_NEXT, "tmpnam");
  unwrapped_tmpnam_r = dlsym(RTLD_NEXT, "tmpnam_r");
  unwrapped_tempnam = dlsym(RTLD_NEXT, "tempnam");
  unwrapped_mktemp = dlsym(RTLD_NEXT, "mktemp");
  unwrapped_mkstemp = dlsym(RTLD_NEXT, "mkstemp");
  unwrapped_mkdtemp = dlsym(RTLD_NEXT, "mkdtemp");
  unwrapped_execv = dlsym(RTLD_NEXT, "execv");
  unwrapped_execl = dlsym(RTLD_NEXT, "execl");
  unwrapped_execve = dlsym(RTLD_NEXT, "execve");
  unwrapped_fexecve = dlsym(RTLD_NEXT, "fexecve");
  unwrapped_execle = dlsym(RTLD_NEXT, "execle");
  unwrapped_execvp = dlsym(RTLD_NEXT, "execvp");
  unwrapped_execlp = dlsym(RTLD_NEXT, "execlp");
  unwrapped_execvpe = dlsym(RTLD_NEXT, "execvpe");
  unwrapped_fork = dlsym(RTLD_NEXT, "fork");
  unwrapped__Fork = dlsym(RTLD_NEXT, "_Fork");
  unwrapped_vfork = dlsym(RTLD_NEXT, "vfork");
  unwrapped_clone = dlsym(RTLD_NEXT, "clone");
  unwrapped_waitpid = dlsym(RTLD_NEXT, "waitpid");
  unwrapped_wait = dlsym(RTLD_NEXT, "wait");
  unwrapped_wait4 = dlsym(RTLD_NEXT, "wait4");
  unwrapped_wait3 = dlsym(RTLD_NEXT, "wait3");
  unwrapped_fopen64 = dlsym(RTLD_NEXT, "fopen64");
  unwrapped_freopen64 = dlsym(RTLD_NEXT, "freopen64");
  unwrapped_openat64 = dlsym(RTLD_NEXT, "openat64");
  unwrapped_open64 = dlsym(RTLD_NEXT, "open64");
  unwrapped_create64 = dlsym(RTLD_NEXT, "create64");
}

FILE * fopen(const char *filename, const char *opentype)
{
  maybe_init_thread();
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, filename), .flags = fopen_to_flags(opentype), .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  FILE * ret = unwrapped_fopen(filename, opentype);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == NULL)
    {
      op.data.open.ferrno = errno;
    }
    else
    {
      op.data.open.fd = fileno(ret);
    }
    prov_log_record(op);
  }
  return ret;
}

FILE * freopen(const char *filename, const char *opentype, FILE *stream)
{
  maybe_init_thread();
  int original_fd = fileno(stream);
  struct Op open_op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, filename), .flags = fopen_to_flags(opentype), .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  struct Op close_op = {close_op_code, {.close = {original_fd, original_fd, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(open_op);
    prov_log_try(close_op);
  }
  FILE * ret = unwrapped_freopen(filename, opentype, stream);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == NULL)
    {
      open_op.data.open.ferrno = errno;
      close_op.data.close.ferrno = errno;
    }
    else
    {
      open_op.data.open.fd = fileno(ret);
    }
    prov_log_record(open_op);
    prov_log_record(close_op);
  }
  return ret;
}

int fclose(FILE *stream)
{
  maybe_init_thread();
  int fd = fileno(stream);
  struct Op op = {close_op_code, {.close = {fd, fd, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_fclose(stream);
  if (likely(prov_log_is_enabled()))
  {
    op.data.close.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

int fcloseall()
{
  maybe_init_thread();
  struct Op op = {close_op_code, {.close = {0, INT_MAX, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_fcloseall();
  if (likely(prov_log_is_enabled()))
  {
    op.data.close.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

int openat(int dirfd, const char *filename, int flags, ...)
{
  maybe_init_thread();
  bool has_mode_arg = ((flags & O_CREAT) != 0) || ((flags & __O_TMPFILE) == __O_TMPFILE);
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(dirfd, filename), .flags = flags, .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    if (has_mode_arg)
    {
      va_list ap;
      va_start(ap, flags);
      op.data.open.mode = va_arg(ap, __type_mode_t);
      va_end(ap);
    }
    prov_log_try(op);
  }
  size_t varargs_size = (((sizeof(dirfd)) + (sizeof(filename))) + (sizeof(flags))) + ((has_mode_arg) ? (sizeof(mode_t)) : (0));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_openat, __builtin_apply_args(), varargs_size));
  if (likely(prov_log_is_enabled()))
  {
    op.data.open.ferrno = (ret == (-1)) ? (errno) : (0);
    op.data.open.fd = ret;
    prov_log_record(op);
  }
  return ret;
}

int open(const char *filename, int flags, ...)
{
  maybe_init_thread();
  bool has_mode_arg = ((flags & O_CREAT) != 0) || ((flags & __O_TMPFILE) == __O_TMPFILE);
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, filename), .flags = flags, .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    if (has_mode_arg)
    {
      va_list ap;
      va_start(ap, flags);
      op.data.open.mode = va_arg(ap, __type_mode_t);
      va_end(ap);
    }
    prov_log_try(op);
  }
  size_t varargs_size = ((sizeof(filename)) + (sizeof(flags))) + ((has_mode_arg) ? (sizeof(mode_t)) : (0));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_open, __builtin_apply_args(), varargs_size));
  if (likely(prov_log_is_enabled()))
  {
    op.data.open.ferrno = (ret == (-1)) ? (errno) : (0);
    op.data.open.fd = ret;
    prov_log_record(op);
  }
  return ret;
}

int creat(const char *filename, mode_t mode)
{
  maybe_init_thread();
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, filename), .flags = (O_WRONLY | O_CREAT) | O_TRUNC, .mode = mode, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_creat(filename, mode);
  if (likely(prov_log_is_enabled()))
  {
    op.data.open.ferrno = (ret == (-1)) ? (errno) : (0);
    op.data.open.fd = ret;
    prov_log_record(op);
  }
  return ret;
}

int close(int filedes)
{
  maybe_init_thread();
  struct Op op = {close_op_code, {.close = {filedes, filedes, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_close(filedes);
  if (likely(prov_log_is_enabled()))
  {
    op.data.close.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

int close_range(unsigned int lowfd, unsigned int maxfd, int flags)
{
  maybe_init_thread();
  if (flags != 0)
  {
    NOT_IMPLEMENTED("I don't know how to handle close_rnage flags yet");
  }
  struct Op op = {close_op_code, {.close = {lowfd, maxfd, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_close_range(lowfd, maxfd, flags);
  if (likely(prov_log_is_enabled()))
  {
    op.data.close.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

void closefrom(int lowfd)
{
  maybe_init_thread();
  struct Op op = {close_op_code, {.close = {lowfd, INT_MAX, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  unwrapped_closefrom(lowfd);
  if (likely(prov_log_is_enabled()))
  {
    prov_log_record(op);
  }
}

int dup(int old)
{
  maybe_init_thread();
  int ret = unwrapped_dup(old);
  return ret;
}

int dup2(int old, int new)
{
  maybe_init_thread();
  int ret = unwrapped_dup2(old, new);
  return ret;
}

int dup3(int old, int new, int flags)
{
  maybe_init_thread();
  int ret = unwrapped_dup3(old, new, flags);
  return ret;
}

int fcntl(int filedes, int command, ...)
{
  maybe_init_thread();
  bool int_arg = (((((((((command == F_DUPFD) || (command == F_DUPFD_CLOEXEC)) || (command == F_SETFD)) || (command == F_SETFL)) || (command == F_SETOWN)) || (command == F_SETSIG)) || (command == F_SETLEASE)) || (command == F_NOTIFY)) || (command == F_SETPIPE_SZ)) || (command == F_ADD_SEALS);
  bool ptr_arg = ((((((((command == F_SETLK) || (command == F_SETLKW)) || (command == F_GETLK)) || (command == F_GETOWN_EX)) || (command == F_SETOWN_EX)) || (command == F_GET_RW_HINT)) || (command == F_SET_RW_HINT)) || (command == F_GET_FILE_RW_HINT)) || (command == F_SET_FILE_RW_HINT);
  assert((!int_arg) || (!ptr_arg));
  size_t varargs_size = ((sizeof(filedes)) + (sizeof(command))) + ((int_arg) ? (sizeof(int)) : ((ptr_arg) ? (sizeof(void *)) : (0)));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_fcntl, __builtin_apply_args(), varargs_size));
  return ret;
}

int chdir(const char *filename)
{
  maybe_init_thread();
  struct Op op = {chdir_op_code, {.chdir = {create_path_lazy(AT_FDCWD, filename), 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_chdir(filename);
  if (likely(prov_log_is_enabled()))
  {
    op.data.chdir.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

int fchdir(int filedes)
{
  maybe_init_thread();
  struct Op op = {chdir_op_code, {.chdir = {create_path_lazy(filedes, NULL), 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_fchdir(filedes);
  if (likely(prov_log_is_enabled()))
  {
    op.data.chdir.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

DIR * opendir(const char *dirname)
{
  maybe_init_thread();
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, dirname), .flags = (O_RDONLY | O_DIRECTORY) | O_CLOEXEC, .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  DIR * ret = unwrapped_opendir(dirname);
  if (likely(prov_log_is_enabled()))
  {
    op.data.open.ferrno = (ret == NULL) ? (errno) : (0);
    op.data.open.fd = dirfd(ret);
    prov_log_record(op);
  }
  return ret;
}

DIR * fdopendir(int fd)
{
  maybe_init_thread();
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(fd, NULL), .flags = (O_RDONLY | O_DIRECTORY) | O_CLOEXEC, .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  DIR * ret = unwrapped_fdopendir(fd);
  if (likely(prov_log_is_enabled()))
  {
    op.data.open.ferrno = (ret == NULL) ? (errno) : (0);
    op.data.open.fd = dirfd(ret);
    prov_log_record(op);
  }
  return ret;
}

struct dirent * readdir(DIR *dirstream)
{
  maybe_init_thread();
  int fd = dirfd(dirstream);
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(fd, NULL), .child = NULL, .all_children = false, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  struct dirent * ret = unwrapped_readdir(dirstream);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == NULL)
    {
      op.data.readdir.ferrno = errno;
    }
    else
    {
      op.data.readdir.child = arena_strndup(&data_arena, ret->d_name, PATH_MAX);
    }
    prov_log_record(op);
  }
  return ret;
}

int readdir_r(DIR *dirstream, struct dirent *entry, struct dirent **result)
{
  maybe_init_thread();
  int fd = dirfd(dirstream);
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(fd, NULL), .child = NULL, .all_children = false, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_readdir_r(dirstream, entry, result);
  if (likely(prov_log_is_enabled()))
  {
    if ((*result) == NULL)
    {
      op.data.readdir.ferrno = errno;
    }
    else
    {
      op.data.readdir.child = arena_strndup(&data_arena, entry->d_name, PATH_MAX);
    }
    prov_log_record(op);
  }
  return ret;
}

struct dirent64 * readdir64(DIR *dirstream)
{
  maybe_init_thread();
  int fd = dirfd(dirstream);
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(fd, NULL), .child = NULL, .all_children = false, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  struct dirent64 * ret = unwrapped_readdir64(dirstream);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == NULL)
    {
      op.data.readdir.ferrno = errno;
    }
    else
    {
      op.data.readdir.child = arena_strndup(&data_arena, ret->d_name, PATH_MAX);
    }
    prov_log_record(op);
  }
  return ret;
}

int readdir64_r(DIR *dirstream, struct dirent64 *entry, struct dirent64 **result)
{
  maybe_init_thread();
  int fd = dirfd(dirstream);
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(fd, NULL), .child = NULL, .all_children = false, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_readdir64_r(dirstream, entry, result);
  if (likely(prov_log_is_enabled()))
  {
    if ((*result) == NULL)
    {
      op.data.readdir.ferrno = errno;
    }
    else
    {
      op.data.readdir.child = arena_strndup(&data_arena, entry->d_name, PATH_MAX);
    }
    prov_log_record(op);
  }
  return ret;
}

int closedir(DIR *dirstream)
{
  maybe_init_thread();
  int fd = dirfd(dirstream);
  struct Op op = {close_op_code, {.close = {fd, fd, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_closedir(dirstream);
  if (likely(prov_log_is_enabled()))
  {
    op.data.close.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

void rewinddir(DIR *dirstream)
{
  maybe_init_thread();
  unwrapped_rewinddir(dirstream);
}

long int telldir(DIR *dirstream)
{
  maybe_init_thread();
  long int ret = unwrapped_telldir(dirstream);
  return ret;
}

void seekdir(DIR *dirstream, long int pos)
{
  maybe_init_thread();
  unwrapped_seekdir(dirstream, pos);
}

int scandir(const char *dir, struct dirent ***namelist, int (*selector)(const struct dirent *), int (*cmp)(const struct dirent **, const struct dirent **))
{
  maybe_init_thread();
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(AT_FDCWD, dir), .child = NULL, .all_children = true}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_scandir(dir, namelist, selector, cmp);
  if (likely(prov_log_is_enabled()))
  {
    if (ret != 0)
    {
      op.data.readdir.ferrno = errno;
    }
    prov_log_record(op);
  }
  return ret;
}

int scandir64(const char *dir, struct dirent64 ***namelist, int (*selector)(const struct dirent64 *), int (*cmp)(const struct dirent64 **, const struct dirent64 **))
{
  maybe_init_thread();
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(AT_FDCWD, dir), .child = NULL, .all_children = true}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_scandir64(dir, namelist, selector, cmp);
  if (likely(prov_log_is_enabled()))
  {
    if (ret != 0)
    {
      op.data.readdir.ferrno = errno;
    }
    prov_log_record(op);
  }
  return ret;
}

int scandirat(int dirfd, const char * restrict dirp, struct dirent *** restrict namelist, int (*filter)(const struct dirent *), int (*compar)(const struct dirent **, const struct dirent **))
{
  maybe_init_thread();
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(dirfd, dirp), .child = NULL, .all_children = true}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_scandirat(dirfd, dirp, namelist, filter, compar);
  if (likely(prov_log_is_enabled()))
  {
    if (ret != 0)
    {
      op.data.readdir.ferrno = errno;
    }
    prov_log_record(op);
  }
  return ret;
}

ssize_t getdents64(int fd, void *buffer, size_t length)
{
  maybe_init_thread();
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(fd, NULL), .child = NULL, .all_children = true}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  ssize_t ret = unwrapped_getdents64(fd, buffer, length);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == (-1))
    {
      op.data.readdir.ferrno = errno;
    }
    prov_log_record(op);
  }
  return ret;
}

int ftw(const char *filename, __ftw_func_t func, int descriptors)
{
  maybe_init_thread();
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(AT_FDCWD, filename), .child = NULL, .all_children = true}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_ftw(filename, func, descriptors);
  if (likely(prov_log_is_enabled()))
  {
    if (ret != 0)
    {
      op.data.readdir.ferrno = errno;
    }
    prov_log_record(op);
  }
  return ret;
}

int ftw64(const char *filename, __ftw64_func_t func, int descriptors)
{
  maybe_init_thread();
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(AT_FDCWD, filename), .child = NULL, .all_children = true}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_ftw64(filename, func, descriptors);
  if (likely(prov_log_is_enabled()))
  {
    if (ret != 0)
    {
      op.data.readdir.ferrno = errno;
    }
    prov_log_record(op);
  }
  return ret;
}

int nftw(const char *filename, __nftw_func_t func, int descriptors, int flag)
{
  maybe_init_thread();
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(AT_FDCWD, filename), .child = NULL, .all_children = true}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_nftw(filename, func, descriptors, flag);
  if (likely(prov_log_is_enabled()))
  {
    if (ret != 0)
    {
      op.data.readdir.ferrno = errno;
    }
    prov_log_record(op);
  }
  return ret;
}

int nftw64(const char *filename, __nftw64_func_t func, int descriptors, int flag)
{
  maybe_init_thread();
  struct Op op = {readdir_op_code, {.readdir = {.dir = create_path_lazy(AT_FDCWD, filename), .child = NULL, .all_children = true}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_nftw64(filename, func, descriptors, flag);
  if (likely(prov_log_is_enabled()))
  {
    if (ret != 0)
    {
      op.data.readdir.ferrno = errno;
    }
    prov_log_record(op);
  }
  return ret;
}

int link(const char *oldname, const char *newname)
{
  maybe_init_thread();
  int ret = unwrapped_link(oldname, newname);
  return ret;
}

int linkat(int oldfd, const char *oldname, int newfd, const char *newname, int flags)
{
  maybe_init_thread();
  int ret = unwrapped_linkat(oldfd, oldname, newfd, newname, flags);
  return ret;
}

int symlink(const char *oldname, const char *newname)
{
  maybe_init_thread();
  int ret = unwrapped_symlink(oldname, newname);
  return ret;
}

int symlinkat(const char *target, int newdirfd, const char *linkpath)
{
  maybe_init_thread();
  int ret = unwrapped_symlinkat(target, newdirfd, linkpath);
  return ret;
}

ssize_t readlink(const char *filename, char *buffer, size_t size)
{
  maybe_init_thread();
  ssize_t ret = unwrapped_readlink(filename, buffer, size);
  return ret;
}

ssize_t readlinkat(int dirfd, const char *filename, char *buffer, size_t size)
{
  maybe_init_thread();
  ssize_t ret = unwrapped_readlinkat(dirfd, filename, buffer, size);
  return ret;
}

char * canonicalize_file_name(const char *name)
{
  maybe_init_thread();
  char * ret = unwrapped_canonicalize_file_name(name);
  return ret;
}

char * realpath(const char * restrict name, char * restrict resolved)
{
  maybe_init_thread();
  char * ret = unwrapped_realpath(name, resolved);
  return ret;
}

int unlink(const char *filename)
{
  maybe_init_thread();
  int ret = unwrapped_unlink(filename);
  return ret;
}

int rmdir(const char *filename)
{
  maybe_init_thread();
  int ret = unwrapped_rmdir(filename);
  return ret;
}

int remove(const char *filename)
{
  maybe_init_thread();
  int ret = unwrapped_remove(filename);
  return ret;
}

int rename(const char *oldname, const char *newname)
{
  maybe_init_thread();
  int ret = unwrapped_rename(oldname, newname);
  return ret;
}

int mkdir(const char *filename, mode_t mode)
{
  maybe_init_thread();
  int ret = unwrapped_mkdir(filename, mode);
  return ret;
}

int mkdirat(int dirfd, const char *pathname, mode_t mode)
{
  maybe_init_thread();
  int ret = unwrapped_mkdirat(dirfd, pathname, mode);
  return ret;
}

int stat(const char *filename, struct stat *buf)
{
  maybe_init_thread();
  int ret = unwrapped_stat(filename, buf);
  return ret;
}

int stat64(const char *filename, struct stat64 *buf)
{
  maybe_init_thread();
  int ret = unwrapped_stat64(filename, buf);
  return ret;
}

int fstat(int filedes, struct stat *buf)
{
  maybe_init_thread();
  int ret = unwrapped_fstat(filedes, buf);
  return ret;
}

int fstat64(int filedes, struct stat64 * restrict buf)
{
  maybe_init_thread();
  int ret = unwrapped_fstat64(filedes, buf);
  return ret;
}

int lstat(const char *filename, struct stat *buf)
{
  maybe_init_thread();
  int ret = unwrapped_lstat(filename, buf);
  return ret;
}

int lstat64(const char *filename, struct stat64 *buf)
{
  maybe_init_thread();
  int ret = unwrapped_lstat64(filename, buf);
  return ret;
}

int statx(int dirfd, const char * restrict pathname, int flags, unsigned int mask, struct statx * restrict statxbuf)
{
  maybe_init_thread();
  int ret = unwrapped_statx(dirfd, pathname, flags, mask, statxbuf);
  return ret;
}

int fstatat(int dirfd, const char * restrict pathname, struct stat * restrict buf, int flags)
{
  maybe_init_thread();
  int ret = unwrapped_fstatat(dirfd, pathname, buf, flags);
  return ret;
}

int fstatat64(int fd, const char * restrict file, struct stat64 * restrict buf, int flags)
{
  maybe_init_thread();
  int ret = unwrapped_fstatat64(fd, file, buf, flags);
  return ret;
}

int chown(const char *filename, uid_t owner, gid_t group)
{
  maybe_init_thread();
  int ret = unwrapped_chown(filename, owner, group);
  return ret;
}

int fchown(int filedes, uid_t owner, gid_t group)
{
  maybe_init_thread();
  int ret = unwrapped_fchown(filedes, owner, group);
  return ret;
}

int chmod(const char *filename, mode_t mode)
{
  maybe_init_thread();
  int ret = unwrapped_chmod(filename, mode);
  return ret;
}

int fchmod(int filedes, mode_t mode)
{
  maybe_init_thread();
  int ret = unwrapped_fchmod(filedes, mode);
  return ret;
}

int access(const char *filename, int how)
{
  maybe_init_thread();
  struct Op op = {access_op_code, {.access = {create_path_lazy(AT_FDCWD, filename), how, 0, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_access(filename, how);
  if (likely(prov_log_is_enabled()))
  {
    op.data.access.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

int faccessat(int dirfd, const char *pathname, int mode, int flags)
{
  maybe_init_thread();
  struct Op op = {access_op_code, {.access = {create_path_lazy(dirfd, pathname), mode, flags, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_faccessat(dirfd, pathname, mode, flags);
  if (likely(prov_log_is_enabled()))
  {
    op.data.access.ferrno = (ret == 0) ? (0) : (errno);
    prov_log_record(op);
  }
  return ret;
}

int utime(const char *filename, const struct utimbuf *times)
{
  maybe_init_thread();
  int ret = unwrapped_utime(filename, times);
  return ret;
}

int utimes(const char *filename, const struct timeval tvp[2])
{
  maybe_init_thread();
  int ret = unwrapped_utimes(filename, tvp);
  return ret;
}

int lutimes(const char *filename, const struct timeval tvp[2])
{
  maybe_init_thread();
  int ret = unwrapped_lutimes(filename, tvp);
  return ret;
}

int futimes(int fd, const struct timeval tvp[2])
{
  maybe_init_thread();
  int ret = unwrapped_futimes(fd, tvp);
  return ret;
}

int truncate(const char *filename, off_t length)
{
  maybe_init_thread();
  int ret = unwrapped_truncate(filename, length);
  return ret;
}

int truncate64(const char *name, off64_t length)
{
  maybe_init_thread();
  int ret = unwrapped_truncate64(name, length);
  return ret;
}

int ftruncate(int fd, off_t length)
{
  maybe_init_thread();
  int ret = unwrapped_ftruncate(fd, length);
  return ret;
}

int ftruncate64(int id, off64_t length)
{
  maybe_init_thread();
  int ret = unwrapped_ftruncate64(id, length);
  return ret;
}

int mknod(const char *filename, mode_t mode, dev_t dev)
{
  maybe_init_thread();
  int ret = unwrapped_mknod(filename, mode, dev);
  return ret;
}

FILE * tmpfile()
{
  maybe_init_thread();
  FILE * ret = unwrapped_tmpfile();
  return ret;
}

FILE * tmpfile64()
{
  maybe_init_thread();
  FILE * ret = unwrapped_tmpfile64();
  return ret;
}

char * tmpnam(char *result)
{
  maybe_init_thread();
  char * ret = unwrapped_tmpnam(result);
  return ret;
}

char * tmpnam_r(char *result)
{
  maybe_init_thread();
  char * ret = unwrapped_tmpnam_r(result);
  return ret;
}

char * tempnam(const char *dir, const char *prefix)
{
  maybe_init_thread();
  char * ret = unwrapped_tempnam(dir, prefix);
  return ret;
}

char * mktemp(char *template)
{
  maybe_init_thread();
  char * ret = unwrapped_mktemp(template);
  return ret;
}

int mkstemp(char *template)
{
  maybe_init_thread();
  int ret = unwrapped_mkstemp(template);
  return ret;
}

char * mkdtemp(char *template)
{
  maybe_init_thread();
  char * ret = unwrapped_mkdtemp(template);
  return ret;
}

int execv(const char *filename, char * const argv[])
{
  maybe_init_thread();
  struct Op op = {exec_op_code, {.exec = {.path = create_path_lazy(0, filename), .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  int ret = unwrapped_execv(filename, argv);
  if (likely(prov_log_is_enabled()))
  {
    assert(errno > 0);
    op.data.exec.ferrno = errno;
    prov_log_record(op);
  }
  return ret;
}

int execl(const char *filename, const char *arg0, ...)
{
  maybe_init_thread();
  struct Op op = {exec_op_code, {.exec = {.path = create_path_lazy(0, filename), .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  size_t varargs_size = (sizeof(char *)) + ((COUNT_NONNULL_VARARGS(arg0) + 1) * (sizeof(char *)));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_execl, __builtin_apply_args(), varargs_size));
  if (likely(prov_log_is_enabled()))
  {
    assert(errno > 0);
    op.data.exec.ferrno = errno;
    prov_log_record(op);
  }
  return ret;
}

int execve(const char *filename, char * const argv[], char * const env[])
{
  maybe_init_thread();
  struct Op op = {exec_op_code, {.exec = {.path = create_path_lazy(0, filename), .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  int ret = unwrapped_execve(filename, argv, env);
  if (likely(prov_log_is_enabled()))
  {
    assert(errno > 0);
    op.data.exec.ferrno = errno;
    prov_log_record(op);
  }
  return ret;
}

int fexecve(int fd, char * const argv[], char * const env[])
{
  maybe_init_thread();
  struct Op op = {exec_op_code, {.exec = {.path = create_path_lazy(fd, NULL), .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  int ret = unwrapped_fexecve(fd, argv, env);
  if (likely(prov_log_is_enabled()))
  {
    assert(errno > 0);
    op.data.exec.ferrno = errno;
    prov_log_record(op);
  }
  return ret;
}

int execle(const char *filename, const char *arg0, ...)
{
  maybe_init_thread();
  struct Op op = {exec_op_code, {.exec = {.path = create_path_lazy(0, filename), .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  size_t varargs_size = (sizeof(char *)) + ((COUNT_NONNULL_VARARGS(arg0) + 1) * (sizeof(char *)));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_execle, __builtin_apply_args(), varargs_size));
  if (likely(prov_log_is_enabled()))
  {
    assert(errno > 0);
    op.data.exec.ferrno = errno;
    prov_log_record(op);
  }
  return ret;
}

int execvp(const char *filename, char * const argv[])
{
  maybe_init_thread();
  char *bin_path = arena_calloc(&data_arena, PATH_MAX + 1, sizeof(char));
  bool found = lookup_on_path(filename, bin_path);
  struct Op op = {exec_op_code, {.exec = {.path = (found) ? (create_path_lazy(0, bin_path)) : (null_path), .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  int ret = unwrapped_execvp(filename, argv);
  if (likely(prov_log_is_enabled()))
  {
    assert(errno > 0);
    op.data.exec.ferrno = errno;
    prov_log_record(op);
  }
  return ret;
}

int execlp(const char *filename, const char *arg0, ...)
{
  maybe_init_thread();
  char *bin_path = arena_calloc(&data_arena, PATH_MAX + 1, sizeof(char));
  bool found = lookup_on_path(filename, bin_path);
  struct Op op = {exec_op_code, {.exec = {.path = (found) ? (create_path_lazy(0, bin_path)) : (null_path), .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  size_t varargs_size = (sizeof(char *)) + ((COUNT_NONNULL_VARARGS(arg0) + 1) * (sizeof(char *)));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_execlp, __builtin_apply_args(), varargs_size));
  if (likely(prov_log_is_enabled()))
  {
    assert(errno > 0);
    op.data.exec.ferrno = errno;
    prov_log_record(op);
  }
  return ret;
}

int execvpe(const char *filename, char * const argv[], char * const envp[])
{
  maybe_init_thread();
  char *bin_path = arena_calloc(&data_arena, PATH_MAX + 1, sizeof(char));
  bool found = lookup_on_path(filename, bin_path);
  struct Op op = {exec_op_code, {.exec = {.path = (found) ? (create_path_lazy(0, bin_path)) : (null_path), .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  int ret = unwrapped_execvpe(filename, argv, envp);
  if (likely(prov_log_is_enabled()))
  {
    assert(errno > 0);
    op.data.exec.ferrno = errno;
    prov_log_record(op);
  }
  return ret;
}

pid_t fork()
{
  maybe_init_thread();
  struct Op op = {clone_op_code, {.clone = {.flags = 0, .run_pthread_atfork_handlers = true, .child_process_id = -1, .child_thread_id = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  pid_t ret = unwrapped_fork();
  if (likely(prov_log_is_enabled()))
  {
    if (ret == (-1))
    {
      op.data.clone.ferrno = errno;
      prov_log_record(op);
    }
    else
      if (ret == 0)
    {
      __process_inited = false;
      __thread_inited = false;
      maybe_init_thread();
    }
    else
    {
      op.data.clone.child_process_id = ret;
      op.data.clone.child_thread_id = ret;
      prov_log_record(op);
    }
  }
  return ret;
}

pid_t _Fork()
{
  maybe_init_thread();
  struct Op op = {clone_op_code, {.clone = {.flags = 0, .run_pthread_atfork_handlers = false, .child_process_id = -1, .child_thread_id = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
  }
  else
  {
    prov_log_save();
  }
  pid_t ret = unwrapped__Fork();
  if (likely(prov_log_is_enabled()))
  {
    if (ret == (-1))
    {
      op.data.clone.ferrno = errno;
      prov_log_record(op);
    }
    else
      if (ret == 0)
    {
      __process_inited = false;
      __thread_inited = false;
      maybe_init_thread();
    }
    else
    {
      op.data.clone.child_process_id = ret;
      op.data.clone.child_thread_id = ret;
      prov_log_record(op);
    }
  }
  return ret;
}

pid_t vfork()
{
  maybe_init_thread();
  struct Op op = {clone_op_code, {.clone = {.flags = CLONE_VFORK, .run_pthread_atfork_handlers = false, .child_process_id = -1, .child_thread_id = -1, .ferrno = 0}}, {0}};
  bool was_prov_log_enabled = prov_log_is_enabled();
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
    prov_log_disable();
    NOT_IMPLEMENTED("vfork");
  }
  else
  {
    prov_log_save();
    prov_log_disable();
  }
  pid_t ret = unwrapped_vfork();
  if (ret == (-1))
  {
    prov_log_set_enabled(was_prov_log_enabled);
    if (likely(prov_log_is_enabled()))
    {
      op.data.clone.ferrno = errno;
      prov_log_record(op);
    }
  }
  else
    if (ret == 0)
  {
  }
  else
  {
    prov_log_set_enabled(was_prov_log_enabled);
    if (likely(prov_log_is_enabled()))
    {
      op.data.clone.child_process_id = ret;
      op.data.clone.child_thread_id = ret;
      prov_log_record(op);
    }
  }
  return ret;
}

int clone(fn_ptr_int_void_ptr fn, void *stack, int flags, void *arg, ...)
{
  maybe_init_thread();
  (void) fn;
  (void) stack;
  struct Op op = {clone_op_code, {.clone = {.flags = flags, .run_pthread_atfork_handlers = false, .child_process_id = -1, .child_thread_id = -1, .ferrno = 0}}, {0}};
  bool was_prov_log_enabled = prov_log_is_enabled();
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
    prov_log_save();
    if (flags & CLONE_VFORK)
    {
      prov_log_disable();
      NOT_IMPLEMENTED("vfork");
    }
  }
  else
  {
    prov_log_save();
  }
  size_t varargs_size = ((((((sizeof(void *)) + (sizeof(void *))) + (sizeof(int))) + ((COUNT_NONNULL_VARARGS(arg) + 1) * (sizeof(void *)))) + (sizeof(pid_t *))) + (sizeof(void *))) + (sizeof(pid_t *));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_clone, __builtin_apply_args(), varargs_size));
  if (ret == (-1))
  {
    if (flags & CLONE_VFORK)
    {
      prov_log_set_enabled(was_prov_log_enabled);
    }
    if (likely(prov_log_is_enabled()))
    {
      op.data.clone.ferrno = errno;
      prov_log_record(op);
    }
  }
  else
    if (ret == 0)
  {
    __thread_inited = false;
    __process_inited = !(flags & CLONE_THREAD);
    maybe_init_thread();
  }
  else
  {
    if (flags & CLONE_VFORK)
    {
      prov_log_set_enabled(was_prov_log_enabled);
    }
    if (likely(prov_log_is_enabled()))
    {
      op.data.clone.child_process_id = (flags & CLONE_THREAD) ? (getpid()) : (ret);
      op.data.clone.child_thread_id = ret;
      prov_log_record(op);
    }
  }
  return ret;
}

pid_t waitpid(pid_t pid, int *status_ptr, int options)
{
  maybe_init_thread();
  struct Op op = {wait_op_code, {.wait = {.pid = pid, .options = options, .status = 0, .ret = 0, .ferrno = 0}}, {0}};
  prov_log_try(op);
  pid_t ret = unwrapped_waitpid(pid, status_ptr, options);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == (-1))
    {
      op.data.wait.ferrno = errno;
    }
    else
    {
      op.data.wait.ret = ret;
      op.data.wait.status = *status_ptr;
    }
    prov_log_record(op);
  }
  return ret;
}

pid_t wait(int *status_ptr)
{
  maybe_init_thread();
  struct Op op = {wait_op_code, {.wait = {.pid = -1, .options = 0, .status = 0, .ret = 0, .ferrno = 0}}, {0}};
  prov_log_try(op);
  pid_t ret = unwrapped_wait(status_ptr);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == (-1))
    {
      op.data.wait.ferrno = errno;
    }
    else
    {
      op.data.wait.ret = ret;
      op.data.wait.status = *status_ptr;
    }
    prov_log_record(op);
  }
  return ret;
}

pid_t wait4(pid_t pid, int *status_ptr, int options, struct rusage *usage)
{
  maybe_init_thread();
  struct Op wait_op = {wait_op_code, {.wait = {.pid = pid, .options = options, .status = 0, .ret = 0, .ferrno = 0}}, {0}};
  prov_log_try(wait_op);
  struct GetRUsageOp data = {.waitpid_arg = pid, .getrusage_arg = 0, .usage = {{0}}, .ferrno = 0};
  struct Op getrusage_op = {getrusage_op_code, {.getrusage = data}, {0}};
  if (usage)
  {
    prov_log_try(getrusage_op);
  }
  pid_t ret = unwrapped_wait4(pid, status_ptr, options, usage);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == (-1))
    {
      wait_op.data.wait.ferrno = errno;
      if (usage)
      {
        getrusage_op.data.getrusage.ferrno = errno;
      }
    }
    else
    {
      wait_op.data.wait.ret = ret;
      wait_op.data.wait.status = *status_ptr;
      if (usage)
      {
        memcpy(&getrusage_op.data.getrusage.usage, usage, sizeof(struct rusage));
      }
    }
    prov_log_record(wait_op);
    if (usage)
    {
      prov_log_record(getrusage_op);
    }
  }
  return ret;
}

pid_t wait3(int *status_ptr, int options, struct rusage *usage)
{
  maybe_init_thread();
  struct Op wait_op = {wait_op_code, {.wait = {.pid = -1, .options = options, .status = 0, .ret = 0, .ferrno = 0}}, {0}};
  prov_log_try(wait_op);
  struct Op getrusage_op = {getrusage_op_code, {.getrusage = {.waitpid_arg = -1, .getrusage_arg = 0, .usage = {{0}}, .ferrno = 0}}, {0}};
  if (usage)
  {
    prov_log_try(getrusage_op);
  }
  pid_t ret = unwrapped_wait3(status_ptr, options, usage);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == (-1))
    {
      wait_op.data.wait.ferrno = errno;
      if (usage)
      {
        getrusage_op.data.getrusage.ferrno = errno;
      }
    }
    else
    {
      wait_op.data.wait.ret = ret;
      wait_op.data.wait.status = *status_ptr;
      if (usage)
      {
        memcpy(&getrusage_op.data.getrusage.usage, usage, sizeof(struct rusage));
      }
    }
    prov_log_record(wait_op);
    if (usage)
    {
      prov_log_record(getrusage_op);
    }
  }
  return ret;
}

FILE * fopen64(const char *filename, const char *opentype)
{
  maybe_init_thread();
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, filename), .flags = fopen_to_flags(opentype), .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  FILE * ret = unwrapped_fopen64(filename, opentype);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == NULL)
    {
      op.data.open.ferrno = errno;
    }
    else
    {
      op.data.open.fd = fileno(ret);
    }
    prov_log_record(op);
  }
  return ret;
}

FILE * freopen64(const char *filename, const char *opentype, FILE *stream)
{
  maybe_init_thread();
  int original_fd = fileno(stream);
  struct Op open_op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, filename), .flags = fopen_to_flags(opentype), .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  struct Op close_op = {close_op_code, {.close = {original_fd, original_fd, 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(open_op);
    prov_log_try(close_op);
  }
  FILE * ret = unwrapped_freopen64(filename, opentype, stream);
  if (likely(prov_log_is_enabled()))
  {
    if (ret == NULL)
    {
      open_op.data.open.ferrno = errno;
      close_op.data.close.ferrno = errno;
    }
    else
    {
      open_op.data.open.fd = fileno(ret);
    }
    prov_log_record(open_op);
    prov_log_record(close_op);
  }
  return ret;
}

int openat64(int dirfd, const char *filename, int flags, ...)
{
  maybe_init_thread();
  bool has_mode_arg = ((flags & O_CREAT) != 0) || ((flags & __O_TMPFILE) == __O_TMPFILE);
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(dirfd, filename), .flags = flags, .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    if (has_mode_arg)
    {
      va_list ap;
      va_start(ap, flags);
      op.data.open.mode = va_arg(ap, __type_mode_t);
      va_end(ap);
    }
    prov_log_try(op);
  }
  size_t varargs_size = (((sizeof(dirfd)) + (sizeof(filename))) + (sizeof(flags))) + ((has_mode_arg) ? (sizeof(mode_t)) : (0));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_openat64, __builtin_apply_args(), varargs_size));
  if (likely(prov_log_is_enabled()))
  {
    op.data.open.ferrno = (ret == (-1)) ? (errno) : (0);
    op.data.open.fd = ret;
    prov_log_record(op);
  }
  return ret;
}

int open64(const char *filename, int flags, ...)
{
  maybe_init_thread();
  bool has_mode_arg = ((flags & O_CREAT) != 0) || ((flags & __O_TMPFILE) == __O_TMPFILE);
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, filename), .flags = flags, .mode = 0, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    if (has_mode_arg)
    {
      va_list ap;
      va_start(ap, flags);
      op.data.open.mode = va_arg(ap, __type_mode_t);
      va_end(ap);
    }
    prov_log_try(op);
  }
  size_t varargs_size = ((sizeof(filename)) + (sizeof(flags))) + ((has_mode_arg) ? (sizeof(mode_t)) : (0));
  int ret = *((int *) __builtin_apply((void (*)()) unwrapped_open64, __builtin_apply_args(), varargs_size));
  if (likely(prov_log_is_enabled()))
  {
    op.data.open.ferrno = (ret == (-1)) ? (errno) : (0);
    op.data.open.fd = ret;
    prov_log_record(op);
  }
  return ret;
}

int create64(const char *filename, mode_t mode)
{
  maybe_init_thread();
  struct Op op = {open_op_code, {.open = {.path = create_path_lazy(AT_FDCWD, filename), .flags = (O_WRONLY | O_CREAT) | O_TRUNC, .mode = mode, .fd = -1, .ferrno = 0}}, {0}};
  if (likely(prov_log_is_enabled()))
  {
    prov_log_try(op);
  }
  int ret = unwrapped_create64(filename, mode);
  if (likely(prov_log_is_enabled()))
  {
    op.data.open.ferrno = (ret == (-1)) ? (errno) : (0);
    op.data.open.fd = ret;
    prov_log_record(op);
  }
  return ret;
}


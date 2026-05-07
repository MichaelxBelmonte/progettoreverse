// Reconstructed from MikeCore binary
// 20 methods, 0 fields
// WARNING: This is reverse-engineered pseudocode, not compilable C++

class TSocket {

    // ===== Methods (20) =====
    // @00ae139a (5501 bytes, calls 2 functions)
    void method_00ae139a(void);

    // @00adb8e0 (4355 bytes, calls 8 functions)
    // str: ""TSocket::open() Abstract Namespace Domain sockets only supported on linux: ""
    // str: ""TSocket::open() socket() ""
    // str: ""TSocket::open() THRIFT_FCNTL() ""
    void open(ulong param_1, undefined8 param_2, int param_3, void *param_4);

    // @00add580 (2374 bytes, calls 5 functions)
    // str: ""TSocket::read() THRIFT_POLL() ""
    // str: ""TSocket::read() recv() ""
    void read(ulong param_1, timeval *param_2, size_t param_3, int param_4);

    // @00ae2ab5 (1353 bytes, calls 2 functions)
    void method_00ae2ab5(void);

    // @00adf7bd (1253 bytes, calls 2 functions)
    void method_00adf7bd(void);

    // @00ae0e0c (1008 bytes, calls 2 functions)
    void method_00ae0e0c(void);

    // @00adcfd0 (972 bytes, calls 4 functions)
    // str: ""%d""
    // str: ""TSocket::open() getaddrinfo() ""
    void open(char *param_1, undefined8 param_2, undefined8 param_3, addrinfo **param_4);

    // @00ad99e0 (900 bytes, calls 2 functions)
    void method_00ad99e0(undefined8 param_1, string *param_2);

    // @00ae0357 (895 bytes, calls 2 functions)
    void method_00ae0357(void);

    // @00adb250 (785 bytes, calls 4 functions)
    // str: ""<Host: ""
    // str: "" Port: ""
    // str: ""<Path: ""
    void method_00adb250(void);

    // @00ade1d0 (760 bytes, calls 5 functions)
    // str: ""TSocket::write_partial() send() ""
    void write_partial(ulong param_1, string *param_2, size_t param_3, int param_4);

    // @00adfca2 (662 bytes, calls 2 functions)
    void method_00adfca2(void);

    // @00adfffe (662 bytes, calls 2 functions)
    void method_00adfffe(void);

    // @00ae0b7f (653 bytes, calls 2 functions)
    void method_00ae0b7f(void);

    // @00adb600 (615 bytes, calls 5 functions)
    // str: ""TSocket::peek() THRIFT_POLL() ""
    // str: ""TSocket::peek() recv() ""
    void peek(undefined8 param_1, undefined8 param_2, size_t param_3, int param_4);

    // @00ad9ff0 (579 bytes, calls 2 functions)
    void method_00ad9ff0(ulong param_1, string *param_2);

    // @00ae3262 (536 bytes, calls 2 functions)
    void method_00ae3262(void);

    // @00ae3664 (534 bytes, calls 2 functions)
    void method_00ae3664(void);

    // @00ade570 (530 bytes, calls 1 functions)
    void method_00ade570(string *param_1, sockaddr *param_2, socklen_t *param_3);

    // @00ade790 (513 bytes, calls 1 functions)
    void method_00ade790(string *param_1, sockaddr *param_2, socklen_t *param_3);

};
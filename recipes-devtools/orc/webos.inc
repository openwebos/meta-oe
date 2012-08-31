
INC_PR = "r1"

SRC_URI += "file://disable-mmap.patch;patch=1"

do_configure_prepend() {
    sed -i -e '/doc\//d' configure.ac
    sed -i -e 's/doc//' Makefile.am
    sed -i -e 's/doc//' Makefile.in

    # required to complete the rootfs install
    #sed -i -e '/tools\//d' configure.ac
    #sed -i -e 's/tools//' Makefile.am
    #sed -i -e 's/tools//' Makefile.in

    sed -i -e '/examples\//d' configure.ac
    sed -i -e 's/examples//' Makefile.am
    sed -i -e 's/examples//' Makefile.in
    
    sed -i -e '/testsuite\//d' configure.ac
    sed -i -e 's/testsuite//' Makefile.am
    sed -i -e 's/testsuite//' Makefile.in
}


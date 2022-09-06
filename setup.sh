export MY_INSTALL_DIR=~/micro/grpc/   

export C_INCLUDE_PATH=$MY_INSTALL_DIR/include/
export CPLUS_INCLUDE_PATH=$MY_INSTALL_DIR/include/
export LD_LIBRARY_PATH=$MY_INSTALL_DIR/lib/:$LD_LIBRARY_PATH
export PATH="$MY_INSTALL_DIR/bin:$PATH"
export LD_LIBRARY_PATH=$MY_INSTALL_DIR/../../intel/oneapi/mkl/2021.3.0/lib/intel64/lib:$LD_LIBRARY_PATH
export TMPDIR=~/tmp
export PKG_CONFIG_PATH=$MY_INSTALL_DIR/lib/pkgconfig

export LD_LIBRARY_PATH=$MY_INSTALL_DIR/../flann/lib/:$LD_LIBRARY_PATH


@echo off
set MATLAB=I:\MATLAB\R2012b
set MATLAB_ARCH=win32
set MATLAB_BIN="I:\MATLAB\R2012b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=randInitializeWeights_mex
set MEX_NAME=randInitializeWeights_mex
set MEX_EXT=.mexw32
call mexopts.bat
echo # Make settings for randInitializeWeights > randInitializeWeights_mex.mki
echo COMPILER=%COMPILER%>> randInitializeWeights_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> randInitializeWeights_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> randInitializeWeights_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> randInitializeWeights_mex.mki
echo LINKER=%LINKER%>> randInitializeWeights_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> randInitializeWeights_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> randInitializeWeights_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> randInitializeWeights_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> randInitializeWeights_mex.mki
echo BORLAND=%BORLAND%>> randInitializeWeights_mex.mki
echo OMPFLAGS= >> randInitializeWeights_mex.mki
echo OMPLINKFLAGS= >> randInitializeWeights_mex.mki
echo EMC_COMPILER=msvc90>> randInitializeWeights_mex.mki
echo EMC_CONFIG=optim>> randInitializeWeights_mex.mki
"I:\MATLAB\R2012b\bin\win32\gmake" -B -f randInitializeWeights_mex.mk

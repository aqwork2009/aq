#!/bin/bash
function copy_dep_file(){
	lib_array=($(ldd $1 | grep -o "/.*" | grep -o "/.*/[^[:space:]]*"))
	dst_path=$2
	for Variable in ${lib_array[@]}
	do
	    cp "$Variable" $dst_path
	done
}

src_path=$1
dst_path=$2
exe_file=$3
qtlib_path="/usr/Qt5.11.0/5.11.0/gcc_64/plugins/platforms"
cp -r $qtlib_path $dst_path


dst_dep=`pwd`/dplib
mkdir -p $dst_dep
copy_dep_file $src_path/$exe_file $dst_dep

cd $qtlib_path
qtlib_file1="libqxcb.so"
copy_dep_file $qtlib_path/$qtlib_file1 $dst_dep







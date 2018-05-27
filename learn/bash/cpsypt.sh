#!/bin/sh
name=pt

module_name=lib_sy_$name
cd $module_name
head_inc_file=sy_$name.h
lib_name=$module_name.a
head_dir=$module_name
bin_dir=../bin/$module_name
inc_dir=../../common/inc
dst_dir=$inc_dir/$head_dir
dst_lib=../../common/lib64


if [  -d $dst_dir ];then
    echo "rm -f $dst_dir/*"
    rm -f $dst_dir/*
else
    mkdir $dst_dir
    echo "create dir $dst_dir"
fi

echo "cp -rf $head_dir/*.h $dst_dir"
cp -f $head_dir/*.h $dst_dir


if [ -f $inc_dir/$head_inc_file ];then
    echo "rm -f $inc_dir/$head_inc_file"
    rm -f $inc_dir/$head_inc_file
fi

cp -f $head_inc_file $inc_dir
echo "cp -f $head_inc_file $inc_dir"

if [ -f $dst_lib/$lib_name ];then
    echo "rm -f $dst_lib/$lib_name"
    rm -f $dst_lib/$lib_name
fi

cp -f $bin_dir/lib$lib_name $dst_lib/$lib_name

echo "$bin_dir/lib$lib_name $dst_lib/$lib_name"
echo $?

echo "done"

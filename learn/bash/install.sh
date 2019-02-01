#!/bin/bash
lc_dir=$( cd $( dirname ${BASH_SOURCE[0]} ) && pwd )
cd $lc_dir
#echo "cd $lc_dir" 

copy_file()
{
    src_path=$1
    dst_path=$2
    echo "\cp -rf $src_path $dst_path"
    \cp -rf $src_path $dst_path
}

clean_dir()
{
    root_dir=$1
    hold_file1=$2
    hold_file2=$3
    for cur_dir in `ls $root_dir`
    do
	rm_dir=$root_dir/$cur_dir
	if [ ! "$cur_dir"x = "$hold_file1"x -a ! "$cur_dir"x = "$hold_file2"x  ];then
	    echo "remove $rm_dir"
	    rm -rf $rm_dir
	fi
    done
}

ins_prog()
{
    root_dir=$1
    dst_path=$2
    echo $dst_dir
    for cur_dir in `ls $root_dir`
    do
	src_dir=$root_dir/$cur_dir

	if [ ! "$cur_dir"x = "$hold_file1"x -a ! "$cur_dir"x = "$hold_file2"x  ];then
	    copy_file $src_dir $dst_path
	fi
    done    
}
ins_pack=install.sh
file_pack=pack.tar.bz2
dst_path=/home/xhg

clean_dir $lc_dir $ins_pack $file_pack
tar -xvf pack.tar.bz2
ins_prog $lc_dir $dst_path

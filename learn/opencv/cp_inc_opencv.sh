#!/bin/bash
function getdir(){
    tag_dir=$3
    dst_dir=$2
    echo "param:$1, $2, $3"
    for element in `ls $1`
    do  
        dir1=$1"/"$element
        if [ -d $dir1 ]
        then 
	    for element2 in `ls $dir1`;do
		
		if [ "$element2"x = "$tag_dir"x ]
		then
		    dir2=$dir1"/"$element2
		    echo $dir2
		    cp -r $dir2 $dst_dir
		fi
	    done
#        else
#            echo $dir1
        fi  
    done
}

src_dir="/home/work/source/opencv/modules"
dst_dir="/home/work/dynamic_git/public/common/three_lib/opencv"
mkdir -p dest_dir
tag_dir="include"
getdir $src_dir $dst_dir $tag_dir
cp -r "/home/work/source/opencv/include" $dst_dir
cp -r "/home/work/source/opencv/build/lib" $dst_dir
cp -r "/home/work/source/opencv/build/opencv2" $dst_dir/include

#!/bin/bash
echo "* soft nofile 640000">>/etc/security/limits.conf
echo "* hard nofile 640000">>/etc/security/limits.conf
echo "root soft nofile 640000">>/etc/security/limits.conf
echo "root hard nofile 640000">>/etc/security/limits.conf
echo "session    required    /lib/security/pam_limits.so">>/etc/pam.d/login
echo "10240000" > /proc/sys/fs/file-max

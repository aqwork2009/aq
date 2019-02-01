#!/bin/bash
chmod u+w /etc/sudoers
echo "aq        ALL=(ALL)       NOPASSWD: ALL" >> /etc/sudoers
chmod u-w /etc/sudoers

#!/bin/zsh

convert flag.png lemur.png -evaluate-sequence xor op.png
echo $? 

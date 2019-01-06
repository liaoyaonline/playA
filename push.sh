#!/bin/bash
function push_all() #将标签上传到github
{
    git add /home/liaoya/github/playA/*
    git commit -m "日常更新"
    git push origin master
}
  push_all


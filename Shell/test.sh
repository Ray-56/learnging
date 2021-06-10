#!/bin/sh

## 变量声明  
your_name=ray


# 变量使用 $your_name
# 只读变量 readonly
# 删除变量 unset ；删除后不能再次使用
echo "your_name: $your_name"
your_name=kk
echo "your_name: $your_name"
for skill in Type Java; do
  # 识别变量 skill
  echo "I am good at ${skill}Script"
done

string="abcdefghijk"
# 获取字符串长度
echo ${#string} # 输出 11
# 提取子字符串
echo ${string:1:4} # 输出 bcde

# 定义数组
array_name=(value0 value1 value2)
echo "array_name #1 = ${array_name[1]}"
echo "array_name = ${array_name[@]}" # @ 获取所有元素
echo "array_name length = ${#array_name[@]}"
echo "array_name length = ${#array_name[*]}"
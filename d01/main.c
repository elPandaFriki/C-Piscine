//ex1
groups $FT_USER | tr " " ","
//ex2
find . -name "*.sh" | cut -d "." -f 2 | cut -d "/" -f 2
//ex3
find . -type d -or -type f | wc -l
//ex4
ifconfig | grep "ether " | cut -d " " -f 2
//ex5
42
//ex6
ls -l | sed "n;d"
//ex7
cat /etc/passwd | grep

<<com
  To check the file is identical or not
  and to display the permissions
com
=======
#Write a shell script that accepts two filenames as arguments, checks if the permissions for
#these files are identical and if the permissions are identical, output common permissions
#otherwise output each filename followed by its permissions.
>>>>>>> 

echo -n "Enter file name 1:"
read f1
if [ -e $f1 ]
then
set -- `ls -ld $f1`
<<<<<<< HEAD
f1perm=$1
=======
file1perm=$1
>>>>>>> c92564507a5b99750a467c975ecadafbf2700155
else
echo "file does not exit"
exit
fi
echo -n "Enter a file name2:"
read f2
if [ -e $f2 ]
then
<<<<<<< HEAD
set -- `ls -ld $f2`
f2perm=$1
=======
set -- `ls -ld $f1`
file1perm=$1
else
echo "File does not exit"
exit
fi
<<<<<<< HEAD
if [ $f1perm = $f2perm ]
then
echo "File permmision are identical"
echo "Permission is $f1perm"
exit
else
echo "File permisssion are not identical"
echo "f1 permission is $f1perm"
echo "f2 permission is $f2perm"
=======
if [ $file1perm = $file2perm ]
then
echo "File permmision are identical"
echo "Permission is $file1perm"
else
echo "File permisssion are not identical"
echo "$f1 permission is $file1perm"
echo "$f2 permission is $file2perm"

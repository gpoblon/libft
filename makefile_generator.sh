MYPATH=$(pwd)
CUR_MAKEFILE=$MYPATH/Makefile
if [ -e $CUR_MAKEFILE ]
then
	echo "regenerate Makefile"
	sed "`grep -n 'SRC			=' $CUR_MAKEFILE | sed 's/:.*//'`, \$d" $CUR_MAKEFILE > NEWMAKEFILE
	grep 'SRC			=' $CUR_MAKEFILE >> NEWMAKEFILE
	expr "$(find ./src | grep "\.c$" | sed -e 's/src\///' -e 's/\.\///' -e 's/$/\\/')" : "\(.*\).$" >> NEWMAKEFILE
	echo "" >> NEWMAKEFILE
	echo "INC_D		=	inc/" >> NEWMAKEFILE
	sed "1, `grep -n 'INC_D		=' $CUR_MAKEFILE | sed 's/:.*//'`d" $CUR_MAKEFILE >> NEWMAKEFILE
	mv $CUR_MAKEFILE ~/Documents/.OLDMakefile
	mv NEWMAKEFILE $CUR_MAKEFILE
	echo "Makefile done (copy still alive in ~/Documents/.OLDMakefile)"
else
	echo "Makefile not found."
fi

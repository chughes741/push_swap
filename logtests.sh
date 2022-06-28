#!/bin/bash

temp_log=$(mktemp)
RESULTS="results.txt"

COUNT=100
SETS=( 10 50 100 150 200 250 300 350 400 450 500)

rm $RESULTS
touch $RESULTS

for i in ${SETS[@]}
do 
	printf "Testing %d random numbers %d times\n" $i $COUNT
	bash ./loop.sh $i $COUNT  1>>${temp_log}
	grep 'average instructions' ${temp_log} | tail -1 >> $RESULTS
done

rm ${temp_log}

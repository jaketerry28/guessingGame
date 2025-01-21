# guessingGame

## Libraries

[ ] <stdio.h>

[ ] <stdlib.h>

[ ] <time.h>

## Algorithm


define true and false constants
initialize int for correct
initialize int for guess
initialize int for turn to 0
create boolean Guessing
create char[] for name

ask user their name
greet user with their name

generate a random number from 1-100

while guessing is true:
	increment turn by 1
	ask user for guess, put in guess
	if guess < correct:
		print "too low"
	if guess > correct:
		print "too high"
	if guess = correct:
		print "correct"
		guessing set to False

score users game
if turns < 7:
	print "great"
if turns == 7:
	print "good"
if turns > 7:
	print "You can do better"

end main

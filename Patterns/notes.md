The difference that I noted while printing pattern2():

Python strings are immutable and don't support incrementing.

You have to explicitly convert between characters and their ASCII values.

Python provides:

ord() → Character to ASCII value
chr() → ASCII value to Character
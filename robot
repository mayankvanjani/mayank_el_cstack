#body
push
translate
250 250 0
yrotate
45
box
-100 150 25 200 300 50
#head
push
translate
0 201 0
sphere
0 0 50
#right arm
pop
push
translate
100 150 0
xrotate
50
box
0 0 20 50 200 40
#left arm
pop
push
translate
-100 150 0
xrotate
-50
box
-50 0 0 50 200 40
#right leg
pop
push
translate
100 -150 0
xrotate
-20
box
-60 0 20 60 100 40
#left leg
pop
push
translate
-100 -150 0
xrotate
20
box
0 0 20 60 100 40
save
pic.png
display
quit


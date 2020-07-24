import random

score=0
score_com=0
round=1

def change(a):
    if a==1:
        return "剪刀"
    if a==2:
        return "石頭"
    if a==3:
        return "布"
    
def judge(a,b):
    global round,score,score_com
    c=a-b
    round+=1
    if c==0:
        return "平手"
    if c==-1 or c== 2:
        score_com+=1
        return "敵方勝利"
    if c==1 or c==-2:
        score+=1
        return "我方勝利"

print("歡迎來到 猜拳-三戰兩勝 ")
print("說明:剪刀、石頭和布以數字代替，剪刀為1，石頭為2，布為3，若當回平手則不增加回合數")

while score<=1 and score_com<=1:
    print("======================================================")
    print("目前是第{}回合,敵方分數:{},我方分數{}".format(round,score_com,score))
    choose=int(input("剪刀、石頭還是布?"))
    choose_com=random.randint(1,3)
    print("你出{}，電腦出{}".format(change(choose),change(choose_com)))
    print("本回合{}".format(judge(choose,choose_com)))

if score>score_com:
    final_message="我方"
else:
    final_message="敵方"

print("******************************************************")
print("敵方分數:{},我方分數{}".format(score_com,score))
print("本局猜拳已結束，恭喜{}勝利".format(final_message))
print("******************************************************")

#2019-12-21

import sys
sys.path.append('../Repository/')
import repository

class Plan:
    def __init__(self,plan):
        for i in range(0,4):
            for j in range(0,5):
                if(j==plan.course.routine[i][2]):
                    print(str(plan.course.routine[i][0])+" "+str(plan.course.routine[i][1])+" "+str(plan.course.classes[j]))
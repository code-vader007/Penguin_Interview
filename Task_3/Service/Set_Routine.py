import sys
sys.path.append('../Repository/')
import repository


class Set_Plan:
    def __init__(self):
        self.course=repository.Course_Data()
    def return_plan(self):
        for i in range(0,5):
            print(str(i+1)+". "+self.course.classes[i])
        for i in range(0,4):
            datas=input().split(" ")
            self.course.routine[i][0]=int(datas[0])
            self.course.routine[i][1]=int(datas[1])
            self.course.routine[i][2]=int(datas[2])
        return self.course

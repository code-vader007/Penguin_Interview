import sys
sys.path.append('../Repository/')
import repository


class Schedule:
    def __init__(self):
        data=repository.Course_Data()
        for i in range(0,5):
            print(data.classes[i]+", "+data.teachers[i])




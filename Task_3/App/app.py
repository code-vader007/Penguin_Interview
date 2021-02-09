
import sys
sys.path.append('../Service/')

import Print_Course
import Get_Routine
import Set_Routine

class App:
    def __init__(self):
        new_plan=Set_Routine.Set_Plan()
        check=None
        cont=True
        while(cont):
            print("A. Create Routine\n")
            print("B. Display routine\n")
            print("C. Print List with Course\n")
            print("If you want to quit type Q")
            ans=input()
            if(ans=="C"):
                schedule=Print_Course.Schedule()
            elif(ans=="B"):
                if(check==None):
                    print("Routine Not Set yet.\n")
                else:
                    plan=Get_Routine.Plan(new_plan)
            elif(ans=="A"):
                check=new_plan.return_plan()
            else:
                cont=False

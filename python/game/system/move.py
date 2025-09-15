class move:
    def __init__(self,x,y):
        self.x = 0
        self.y = 0
        self.x += x
        self.y += y
    def up(self):
        if(self.y!=0):
            self.y -=1
        return self.y
    def down(self):
        if(self.y!=99):
            self.y +=1
        return self.y
    def left(self):
        if(self.x!=0):
            self.x -=1
        return self.x
    def right(self):
        if(self.x!=99):
            self.x +=1
        return self.x

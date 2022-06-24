class MovingPoint:

    def __init__(self):
        #instance fields found by C++ to Python Converter:
        self._x = 0
        self._y = 0

    @staticmethod
    def initialize(a, b):
        self._x = a
        self._y = b
    def move_left(self, a):
        self._x = self._x - a
    def move_right(self, a):
        self._x = self._x + a
    def move_up(self, b):
        self._y = self._y + b
    def move_down(self, b):
        self._y = self._y - b
    def print_current_position(self):
        print(self._x, end = '')
        print(" ", end = '')
        print(self._y, end = '')





def main():

    mp = MovingPoint()
    x = None
    y = None
    n = None
    i = None
    units = None
    direction = None

    std::cin >> x >> y
    MovingPoint.initialize(x, y)

    cin >> n
    for i in range(0, n):
        std::cin >> direction >> units
        if direction == 'L':
            mp.move_left(units)
        elif direction == 'R':
            mp.move_right(units)
        elif direction == 'U':
            mp.move_up(units)
        elif direction == 'D':
            mp.move_down(units)

    # This call to initialize method should be ingored
    # If this method is called twice, it should be ignored as per specification
    # This call should not change the state of the object
    MovingPoint.initialize(0, 0)

    # Printing final position of the point as output
    mp.print_current_position()

if __name__ == "__main__":
    main()

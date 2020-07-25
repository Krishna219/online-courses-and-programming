

class Points(object):
    def __init__(self, x, y, z):
        self._x = x
        self._y = y
        self._z = z

    def __sub__(self, no):
        val = Points(self._x - no._x, self._y - no._y, self._z - no._z)
        #print self._x - no._x, self._y - no._y, self._z - no._z
        return val

    def dot(self, no):
        val = self._x * no._x + self._y * no._y + self._z * no._z

        #print val
        return val

    def cross(self, no):
        x_comp = self._y * no._z - self._z * no._y
        y_comp = self._z * no._x - self._x * no._z
        z_comp = self._x * no._y - self._y * no._x

        #print x_comp, y_comp, z_comp
        return Points(x_comp, y_comp, z_comp)
        
    def absolute(self):
        #print pow((self._x ** 2 + self._y ** 2 + self._z ** 2), 0.5)
        return pow((self._x ** 2 + self._y ** 2 + self._z ** 2), 0.5)


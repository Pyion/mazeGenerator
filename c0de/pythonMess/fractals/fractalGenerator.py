import cmath
from math import *
import numpy
from PIL import Image
from random import randint

def calculateForPoint(fractalConstant, pointGiven, maxIteration=10, iterationNumber=0):
    pointAnswer = pointGiven + fractalConstant * fractalConstant
    if(sqrt((pointAnswer.real) ** 2 + (pointAnswer.imag) ** 2) > 2):
        return 2.0
    elif(iterationNumber >= maxIteration):
        return sqrt((pointAnswer.real) ** 2 + (pointAnswer.imag) ** 2)
    else:
        return calculateForPoint(pointAnswer, pointGiven, maxIteration, iterationNumber+1)

def generateFractalNumpyTable(tableDimensions,pointLeftDown,pointRightUp,globalFractalConstant = 0+0j):
    generatedFractalTable = numpy.zeros(tableDimensions)
    linspaceOfX = numpy.linspace(pointLeftDown.real, pointRightUp.real, tableDimensions[0])
    linspaceOfY = numpy.linspace(pointLeftDown.imag, pointRightUp.imag, tableDimensions[1])
    for y in range(tableDimensions[1]):
        for x in range(tableDimensions[0]):
            generatedFractalTable[y][x] = calculateForPoint(globalFractalConstant, linspaceOfX[x], linspaceOfY[y])
    return generatedFractalTable


generatedFractalImage = Image.fromarray(generateFractalNumpyTable((100,100),-2-2j,+2+2j, 476132846.9-2.13j),"RGB")
generatedFractalImage.save("returnedFractal.jpg")

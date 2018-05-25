from math import *


class GaussLegrandeAlgorithm:
    aRecurention = 1.0
    bRecurention = sqrt(2.0)/2.0
    tRecurention = 1.0/4.0
    pRecurention = 1.0
    numberOfRecurention = 0

    def increaseNumberOfRecurention():
        aRecurentionUpdate = (GaussLegrandeAlgorithm.aRecurention + GaussLegrandeAlgorithm.bRecurention)/2
        bRecurentionUpdate = sqrt(GaussLegrandeAlgorithm.aRecurention * GaussLegrandeAlgorithm.bRecurention)
        tRecurentionUpdate = GaussLegrandeAlgorithm.tRecurention + GaussLegrandeAlgorithm.pRecurention * (GaussLegrandeAlgorithm.aRecurention - aRecurentionUpdate)**2
        pRecurentionUpdate = 2 * GaussLegrandeAlgorithm.pRecurention
        GaussLegrandeAlgorithm.aRecurention = aRecurentionUpdate
        GaussLegrandeAlgorithm.bRecurention = bRecurentionUpdate
        GaussLegrandeAlgorithm.tRecurention = tRecurentionUpdate
        GaussLegrandeAlgorithm.pRecurention = pRecurentionUpdate
        GaussLegrandeAlgorithm.numberOfRecurention += 1

piCalculating = GaussLegrandeAlgorithm
piCalculating.increaseNumberOfRecurention()


return {
    emitterType = kCCParticleModeGravity, -- kCCParticleModeGravity, kCCParticleModeRadius
    angle = 0.0,
    angleVariance = 360.0,
    duration = 0.1, -- kCCParticleDurationInfinity 
    maxParticules = 50,
    blendFuncSource = GL_ONE_MINUS_SRC_ALPHA,
    blendFuncDestination = GL_ONE_MINUS_SRC_ALPHA,
    blendAdditive = false,
    startColor = {1,1,1,0.2},
    startColorVariance = {0,0,0,0},
    finishColor = {0.52,0.63,0.5,0.3},
    finishColorVariance = {0.52,0.63,0.5,0},
    startSize = 30.0,
    startSizeVariance = 20.0,
    finishSize = 5.0,
    finishSizeVariance = 5.0,
    lifespan = 0.7,
    lifespanVariance = 0.0,
    rotationStart = 0,
    rotationStartVariance = 0,
    rotationEnd = 180,
    rotationEndVariance = 0,
    sourcePosition = {0,0},
    sourcePositionVariance = {0,0},
    textureFileName = '',
    textureImageData = '',
    -- Mode Radius
    maxRadius = 1.0,
    maxRadiusVariance = 1.0,
    minRadius = 1.0,
    rotatePerSecond = 0.0,
    rotatePerSecondVariance = 0.0,
    -- Mode gravity 
    gravity = {0,0},
    speed = 50.0,
    speedVariance = 2.0,
    radialAcceleration = 0.0,
    radialAccelVariance = 0.0,
    tangentialAcceleration = 220.0,
    tangentialAccelVariance = 0.0,
    -- rotationIsDir = false , -- not supported in Lua
}

{
    margin: 0;
    padding: 0;
}
body{
    overflow: hidden;
    animation: shakebody linear 6s infinite;
}
.sky{
    height: 100vh;
    width: 100%;
    background-image: url(background.jpg);
    background-repeat: no-repeat;
    position: absolute;
}

.trees{
    height: 100vh;
    width: 100%;
    background-image: url(trees.png);
    background-size: cover;
    position: absolute;
    top: -144px;
}
.track{
    height: 60vh;
    width: 800vw;
    background-image: url(track.png);
    background-repeat: repeat-x;
    position: absolute;
    top: 70vh;
    animation: carMove linear 13s infinite;

}

.car{
    height: 100px;
    width: 380px;
    background-image: url(car_body.png);
    background-size: cover;
    background-repeat: no-repeat;
    position: absolute;
    left: 444px;
    bottom:30vh;
    animation: shake linear .3s infinite;

}


.wheel1 img{
    width: 77px;
    position: relative;
    top:42px;
    left:42px;
    animation: wheelRotation linear .16s infinite;
}


.wheel2 img{
    width: 77px;
    position: relative;
    top: -39px;
    left: 235px;
    animation: wheelRotation linear .16s infinite;

}

@keyframes wheelRotation
{
    100%{
        transform: rotate(360deg);
    }
}

@keyframes carMove
{
    100%{
        transform: translateX(-500vw);
    }
}

@keyframes shake
{
    0%{
        transform: translateY(-5px);
    }
    50%{
        transform: translateY(5px);
    }
    100%{
        transform: translateY(-5px);
    }
}
@keyframes shakebody
{
    0%{
        transform: translateY(-50px);
    }
    50%{
        transform: translateY(50px);
    }
    100%{
        transform: translateY(-50px);
    }
}

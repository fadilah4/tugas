footer{
    background-color: #222831;
    border-top: solid;
    width: 100%;
    min-height: fit-content;
    padding-bottom: 1px;
    margin-top: 50px;
}
footer video {
    width: 100%;
    margin-bottom: 10px;
    margin-top: -28px;
}
#autoplay {
    display: block;
    width: 100%;
    max-height: 420px;
    object-fit: cover;
    position: relative;
  }
.fkiri{
    width: 30%;
    height: 220px;
    background-color: #222831;
    float: left;
}
.fkiri img{
 padding-left: 80px; 
}

.fkiri h2{
    border-bottom: solid #00adb5;
    color: white;
    padding-left: 50px;
}

.ftengah{
    margin: 0;
    width: 40%;
    height: 220px;
background-color: #222831;
   float: left;
}
.ftengah h2{
    border-bottom: solid #00adb5;
    margin-bottom: 12px;
    color: white;
}
.ftengah p{
 font-size: 19px;
 font-family: Arial, Helvetica, sans-serif;
 margin: 3px;
 margin-bottom: 30px;
 color: white;
}
.ftengah a{
    margin: 10px;
    color: #eeeeee;
    
}

.fkanan{
    width: 30%;
    height: 220px;
    background-color: #222831;
    float: right;

}
.fkanan h2{
    border-bottom: solid #00adb5;
    margin-bottom: 80px;
    color: white;
}
.fkanan div img{
    margin: 2px;
    width: 45px;
}
.fkanan div{
    float: right;
    margin-right: 90px;
}
.fkanan p{
    text-align: center;
    margin: 20px;
    color: white;
}

.bawah{
    width: 100%;
    padding-top: 20px;
    margin-left: -30px;
    display: flex;
    height: auto;
    position: relative;
}


/* list */

.bawah ul li{
    display: inline-block;
    text-decoration: none;
    margin-left:30px;
    margin-right: 30px;
    padding-top: 10px;
    padding-bottom: 15px ;
    
    
}
.bawah ul li a{
    list-style: none;
    text-decoration: none;
    color: #eeeeee;
}



/* resposive */
@media screen and (max-width: 1000px){

}

@media screen and (max-width:670px){

    footer{
    width: 100%;
}
    .fkiri{
    width: 100%;

}
    .ftengah{
    width: 100%;
}
    .fkanan{
    width: 100%;
    margin-top: 20px;
    }

.fkanan p{       
    padding-right: 50px;
    }

.fkanan img{
    margin-right: 30px !important;
}

}

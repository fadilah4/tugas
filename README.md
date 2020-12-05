<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css" integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">
    <link rel="stylesheet" href="awal.css">
    <link rel="stylesheet" href="nav.css">
    <link rel="stylesheet" href="carosel.css">
    <link rel="stylesheet" href="isi.css">
    <link rel="stylesheet" href="footer.css">

  </head>
  <body>
    <nav class="navbar navbar-expand-lg navbar-light navbar-fixed-top ">
        <div class="container">
        <a class="navbar-brand" href="#">Kelompok 3</a>
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNavAltMarkup" aria-controls="navbarNavAltMarkup" aria-expanded="false" aria-label="Toggle navigation">
          <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarNavAltMarkup">
          <div class="navbar-nav ml-auto">
            <a class="nav-link active" href="#">Home <span class="sr-only">(current)</span></a>
            <a class="nav-link" href="destinasi-home.html">Destination</a>
            <a class="nav-link" href="#">Team</a>
            <a class="nav-link" href="#">Contact Us</a>
          </div>
        </div>
        </div>
      </nav>

      <div id="carouselExampleCaptions" class="carousel slide" data-ride="carousel">
        
        <div class="carousel-inner">
          <div class="carousel-item active">
            <img src="image/bandung.jpg" class="d-block w-100" alt="...">
            <div class="carousel-caption  d-md-block">
              <h1>First slide label</h1>
              <p>Nulla vitae elit libero, a pharetra augue mollis interdum.</p>
            </div>
          </div>
          <div class="carousel-item">
            <img src="image/jakarta.jpg" class="d-block w-100" alt="...">
            <div class="carousel-caption  d-md-block">
              <h1>Second slide label</h1>
              <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
            </div>
          </div>
          <div class="carousel-item">
            <img src="image/lombok1.jpg" class="d-block w-100" alt="...">
            <div class="carousel-caption  d-md-block">
              <h1>Third slide label</h1>
              <p>Praesent commodo cursus magna, vel scelerisque nisl consectetur.</p>
            </div>
          </div>
        </div>
        <a class="carousel-control-prev" href="#carouselExampleCaptions" role="button" data-slide="prev">
          <span class="carousel-control-prev-icon" aria-hidden="true"></span>
          <span class="sr-only">Previous</span>
        </a>
        <a class="carousel-control-next" href="#carouselExampleCaptions" role="button" data-slide="next">
          <span class="carousel-control-next-icon" aria-hidden="true"></span>
          <span class="sr-only">Next</span>
        </a>
      </div>

      <div class="isi">
        <div class="container">
          <div class="heading">
            <h1>Pilihan anda tepat!</h1><br>
            <p>Diwebsite ini anda akan mendapatkan pelayanan yang terbaik!</p>
          </div>
          <div class="isi-dalam">
            <div class="isi-dalam2" href="#">
              <div class="isi-icon">              
                <img src="logo/Orang.png">
              </div>
                <div class="nimbul"><a type="button" class="buton" data-toggle="modal" data-target="#exampleModal1"> <b> SEE MORE </b></a>
                </div>
                <h2>Proffesional</h2>                               
            </div>
  
            <!-- Modal 1 -->
            <div class="modal fade" id="exampleModal1" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
              <div class="modal-dialog">
                <div class="modal-content">
                  <div class="modal-header">
                    <h5 class="modal-title" id="exampleModalLabel">Proffesional</h5>
                    <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                      <span aria-hidden="true">&times;</span>
                    </button>
                  </div>
                  <div class="modal-body">
                    Orang-orang disini telah proffesional dalam travelling.
                  </div>
                  <div class="modal-footer">
                    <button type="button" class="btn btn-primary" data-dismiss="modal">Oke</button>
                  </div>
                </div>
              </div>
            </div>
  
            <div class="isi-dalam2">
              <div class="isi-icon">
                <img src="logo/Senang.png">
              </div>
              <div class="nimbul"><a type="button" class="buton" data-toggle="modal" data-target="#exampleModal2"> <b> SEE MORE </b></a></div>          
              <h2>Menyenangkan</h2>
            </div>
  
            <!-- Modal 2 -->
            <div class="modal fade" id="exampleModal2" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
              <div class="modal-dialog">
                <div class="modal-content">
                  <div class="modal-header">
                    <h5 class="modal-title" id="exampleModalLabel">Menyenangkan</h5>
                    <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                      <span aria-hidden="true">&times;</span>
                    </button>
                  </div>
                  <div class="modal-body">
                    Dipandu oleh orang Proffesional sehingga perjalanan anda tidak membosankan, dan ada game-game disaat perjalanan.
                  </div>
                  <div class="modal-footer">
                    <button type="button" class="btn btn-primary" data-dismiss="modal">Oke</button>
                  </div>
                </div>
              </div>
            </div>
  
            <div class="isi-dalam2">
              <div class="isi-icon">
              <img src="logo/uang.png"  style="width:35%;">
              </div>
              <div class="nimbul"><a type="button" class="buton" data-toggle="modal" data-target="#exampleModal3"> <b> SEE MORE </b></a></div>
                  
              <h2>Hemat</h2>
            </div>
  
            <!-- Modal 3 -->
            <div class="modal fade" id="exampleModal3" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
              <div class="modal-dialog">
                <div class="modal-content">
                  <div class="modal-header">
                    <h5 class="modal-title" id="exampleModalLabel">Hemat</h5>
                    <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                      <span aria-hidden="true">&times;</span>
                    </button>
                  </div>
                  <div class="modal-body">
                    Di travel ini anda bisa menghemat uang anda, karena travel disini banyak potongan-potongan atau voucher.
                  </div>
                  <div class="modal-footer">
                    <button type="button" class="btn btn-primary" data-dismiss="modal">Oke</button>
                  </div>
                </div>
              </div>
            </div>
  
            <div class="isi-dalam2">
              <div class="isi-icon">
                <img src="logo/Nyantai.png">
              </div>
              <div class="nimbul"><a type="button" class="buton" data-toggle="modal" data-target="#exampleModal4"> <b> SEE MORE </b></a></div>               
              <h2>Bersantai</h2>
            </div>
  
            <!-- Modal 4 -->
            <div class="modal fade" id="exampleModal4" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
              <div class="modal-dialog">
                <div class="modal-content">
                  <div class="modal-header">
                    <h5 class="modal-title" id="exampleModalLabel">Bersantai!</h5>
                    <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                      <span aria-hidden="true">&times;</span>
                    </button>
                  </div>
                  <div class="modal-body">
                    Di travel ini anda akan diberikan pelayanan yang sangat puas sehingga menciptakan kenyamanan saat perjalanan.
                  </div>
                  <div class="modal-footer">
                    <button type="button" class="btn btn-primary" data-dismiss="modal">Oke</button>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>

      <div class="container">
          <div class="desti">
            <div class="gmb-desti">
                <img src="image/raja_ampat.jpg" width="100%" >
              </div>
              <div class="txt-desti">
                <h1>Destination</h1>
                <p>Destination yg terbaik ada disini, cocok untuk instagrammer untuk berfoto-foto!</p>
                <a class="buton" href="destinasi-home.html"><b> See More</b></a>
              </div>
          </div>
      </div>

      <div class="aud">
        <audio controls Autoplay src="audi/selamat.mp3" type="audio/mp3"></audio>
        <audio controls autoplay loop src="audi/spon.mp3" type="audio/mp3"></audio>
    </div>

    <footer>
      <div class="atas"><img src="/project0000/kelompok3/image/goexplore.png" alt="" srcset=""></a></div>
  
  <video id="autoplay" autoplay muted playsinline>
      <source src="Wonderful Indonesia A Visual Journey.mp4" type="video/mp4">
  </video>
  <div class="fkiri">
      <h2>Explore Indonesia</h2>
  <img src="image/logo.png" alt="img">
  </div>
  <div class="ftengah">
      <h2>Inspiration</h2>
      <p>sumber content, inspirasi, video & gambar website ini :</p>
      <a href="https://www.youtube.com/channel/UCkXmLjEr95LVtGuIm3l2dPg">Chanel youtube Web Pemograming Unpas</a> <br>
      <a href="https://www.youtube.com/channel/UC7AArQOS1gDZzaTGUQ2ZcQw">Chanel youtube Indonesia.Travel</a>
      <br>
      <a href="https://www.indonesia.travel/">Website Indonesia.Travel</a><br>
      <a href="https://www.flaticon.com/">Flaticon.com</a><br>
      <a href="https://www.w3schools.com/">w3Schools.com</a>
  </div>
  <div class="fkanan">
      <h2>Follow social media</h2>
  
      <p>follow us:</p>
      <div>
        <img src="logo/facebook.png" alt="" >
        <img src="logo/instagram.png" alt="">
        <img src="logo/twitter.png" alt="">
        <img src="logo/youtube.png" alt="">
      </div>
  </div>
  <div class="bawah">
      <ul>
          <li><a href="#">Kebijakan cookie</a></li>
          <li><a href="#">kebijakan privasi</a> </li>
          <li><a href="#">syarat & ketentuan</a></li>
          <li><a href="#">hubungi kami</a></li>
        </ul>
  </div>
  </footer>

    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js" integrity="sha384-9/reFTGAW83EW2RDu2S0VKaIzap3H66lZH81PoYlFhbGU+6BZp6G7niu735Sk7lN" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.min.js" integrity="sha384-w1Q4orYjBQndcko6MimVbzY0tgp4pWB4lZ7lr30WKz0vr/aWKhXdBNmNb5D92v7s" crossorigin="anonymous"></script>
   
  </body>
</html>

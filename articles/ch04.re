
= トップページを作る


第3章では共通の構造部分を作っていきました。そこではヘッダーやフッターなどはマークアップしましたが、@<tt>{main}要素の中身は空だったと思います。
この章では空のままだった@<tt>{main}要素の中をHTMLでマークアップしていきます。


//emlist[][html]{
<main>
</main>
//}

== カルーセル部分のマークアップ


カルーセル部分のマークアップをしていきます。
あらためてカルーセルの説明をすると、@<href>{http://www.nike.com/jp/ja_jp/,Nike}などで使われている「注目させたい複数の画像などをつぎつぎと横にスライド表示する」ものです。



今回カルーセルの実装に使う@<href>{http://kenwheeler.github.io/slick/,slick}用に次のHTMLを用意します。
とはいっても切り替え表示させる画像を@<tt>{js_slides ll-slides}というクラスを付けた@<tt>{div}要素で囲むだけです。


//emlist[][html]{
<div class="js_slides ll-slides">
  <img src="images/image_01.jpg" alt="">
  <img src="images/image_02.jpg" alt="">
</div>
//}

== ページネーション部分のマークアップ


カルーセルと連携したページネーション部分のマークアップをしていきます。
ページネーションを画像で示すと、図の赤丸部分になります。



//image[pagination][ページネーション（ラブライブ！第2期 1話より）© プロジェクトラブライブ！]{
//}




アニメではフッター部分に入っているページネーションですが、フッター内にページネーションを含める実装はあまり見ません。
そのため@<tt>{main}要素内へ、ページネーションを含めるようにします。



ページネーションは表示される順番が決まっているため、意図的に順序づけられた項目リストを示す@<tt>{ol}要素を使います。
ページネーションは後ほどCSSでスタイルを適用したり、JavaScriptでカルーセルと連携させたりします。


//emlist[][html]{
<ol class="js_slides-pagination ll-slides-pagination">
  <li>●</li>
  <li>●</li>
</ol>
//}

== ここまでのHTMLまとめ


トップページのHTMLについてはこれで完成です。
ここまでのHTMLをまとめると次のとおりになります。


//emlist[][html]{
<!DOCTYPE html>
<html>
<head>
  <meta charset="UTF-8">
  <title>LoveLive! 2nd トーナメント</title>
  <meta name="description" content="ラブライブ！の参加者募集サイトです">
  <meta name="keywords" content="ラブライブ,特設サイト">
  <meta name="viewport" content="width=device-width">
  <link rel="stylesheet" href="external/Nico/bootstrap.min.css">
  <link rel="stylesheet" href="styles/main.css">
  <script src="external/lory/lory.min.js" defer></script>
</head>

<body>
<header id="ll-header" class="navbar navbar-default">
  <div class="container-fluid">
    <div class="navbar-header">
      <h1 class="navbar-brand ll-logo">LoveLive!</h1>
    </div>

    <ul class="nav navbar-nav navbar-right">
      <li><a href="mail-magazine.html">Mail magazine</a></li>
      <li><a href="#">SNS</a></li>
      <li><a href="#">Share</a></li>
      <li><a href="#">Help</a></li>
    </ul>
  </div>

  <nav id="ll-nav" class="navbar navbar-inverse">
    <div class="container-fluid">
      <ul class="nav navbar-nav">
        <li class="active"><a href="/">Top</a></li>
        <li><a href="livestage.html">Live stage</a></li>
        <li><a href="#">Outline</a></li>
        <li><a href="#">Schedule</a></li>
        <li><a href="#">Special</a></li>
        <li><a href="#">Link</a></li>
        <li><a href="#">Faq</a></li>
      </ul>
    </div>
  </nav>
</header>

<main>
  <div class="js_slides ll-slides">
    <img src="images/image_01.jpg" alt="">
    <img src="images/image_02.jpg" alt="">
  </div>

  <ol class="js_slides-pagination ll-slides-pagination">
    <li>●</li>
    <li>●</li>
  </ol>
</main>

<footer id="ll-footer" class="navbar navbar-default">
  <div class="container-fluid">
    <p class="nav navbar-text navbar-left">
      このサイトは<a href="http://startdash.o2p.jp/">サイト制作のSTART:DASH!!</a>用に作られたものであり、プロジェクトラブライブ！とは関係ありません。
    </p>

    <ul class="nav navbar-nav navbar-right">
      <li><a href="#">Privacy policy</a></li>
      <li><a href="#">Sitemap</a></li>
    </ul>
  </div>
</footer>
</body>
</html>
//}

== カルーセルの見た目を整える


カルーセルに使う要素の見た目を整えます。スタイル定義は簡単でウィンドウの描画領域が狭いときに画像をはみ出させないよう、@<tt>{max-width}というプロパティで要素幅の最大値を指定します。


//emlist[][css]{
/* トップページ：カルーセル内の画像 */
.ll-slides img {
  max-width: 100%;
}
//}


次に、カルーセルと連携させるページネーションの見た目を整えます。
ここで適用するCSSは次のとおりになります。



ページネーションのマークアップに@<tt>{ol}要素を使っているため、●の左横に数字が表示されています。
その左横の数字を消すために@<tt>{.ll-slides-pagination}に対して@<tt>{list-style-type: none;}と指定して数字を無くします。



あとはページネーションを中央寄せかつ横並びに表示したり、前景色の指定をしています。


//emlist[][css]{
/* トップページ：カルーセル連携ページネーションの外枠 */
.ll-slides-pagination {
  list-style-type: none;
  text-align: center;
}

/* トップページ：カルーセル連携ページネーションの各要素 */
.ll-slides-pagination li {
  display: inline-block;
  color: #ff64b1;
}

/* トップページ：カルーセル連携ページネーションの現在のページを示す要素 */
.ll-slides-pagination .ll-slides-pagination__active {
  color: #fff;
}
//}

=== トップページのCSS

//emlist[][css]{
/* トップページ：カルーセル内の画像 */
.ll-slides img {
  max-width: 100%;
}

/* トップページ：カルーセル連携ページネーションの外枠 */
.ll-slides-pagination {
  list-style-type: none;
  text-align: center;
}

/* トップページ：カルーセル連携ページネーションの各要素 */
.ll-slides-pagination li {
  display: inline-block;
  color: #ff64b1;
}

/* トップページ：カルーセル連携ページネーションの現在のページを示す要素 */
.ll-slides-pagination .ll-slides-pagination__active {
  color: #fff;
}
//}

== JavaScriptを使ってカルーセルの実装をする


トップページのHTMLマークアップやCSSによるスタイル適用が終わったので、JavaScriptを使ってカルーセルの実装をします。



JavaScriptを書き始める前に、処理の流れを洗い出しておきしょう。
今回は次の流れでカルーセルやカルーセルと連携したページネーション（以下ページネーション）を実装していきます。

 1. 他のJavaScriptと競合しないようにする
 1. カルーセルのためにHTML要素を取得する
 1. カルーセルの実装をする
 1. ページネーションの実装をする
 1. カルーセルが動くようにする
 1. ページネーションが動くようにする
 1. カルーセル表示が切り替わったときの処理を設定する


処理の流れを洗い出したところで、上から順に説明します。


== 他のJavaScriptと競合しないようにする


はじめに定義した変数や関数が他のJavaScriptと競合しないようにするため、JavaScriptのソースコード全体を@<tt>{(function() { ... \});}で囲みます。
@<tt>{(function() { ... \})();}を書かなかった場合、他のJavaScriptと競合してしまい正常に動作しなくなる場合があります。



jQueryを使う場合は@<tt>{(function() { ... \})();}の前に@<tt>{$}を書きます。
つまり@<tt>{$(function() { ... \})();}となります。
@<tt>{$}を書く理由はブラウザーがHTMLを読み込んで解釈した後にJavaScriptを実行させるためです。
HTMLを解釈した後にJavaScriptの実行をしない場合、JavaScript内でHTMLの要素を取得できない可能性があるためです。



また、@<tt>{$(function() { ... \})();}の中には@<tt>{"use strict";}という文字列を書いています。
これはJavaScriptでミスしやすい物の一部をエラーとして検出してくれるものです。
将来に備えていくつかの単語を使えなくする（たとえば@<tt>{let}や@<tt>{yield}など）効果もあるので、@<tt>{"use strict";}は書いても損はありません。



ここまでをまとめると次のソースコードになります。


//emlist[][javascript]{
$(function() {
  "use strict";

  // ここにソースコードを書いていく
});
//}

== カルーセルのためにHTMLの要素を取得する


JavaScriptでHTMLの要素を扱えるようにします。
これはjQueryの@<tt>{$}関数を使って、HTMLの要素をJavaScriptから次のとおり取得します。



準備の節では、ブラウザーがJavaScriptをHTMLの解釈後に実行するため@<tt>{$}関数を使いました。
ここではHTMLの要素をJavaScriptで利用できるようにするため@<tt>{$}関数を使います。
jQueryの@<tt>{$}関数はこのように万能なものとなります。


//emlist[][javascript]{
var carouselE = $(".js_slides");
var paginationE = $(".js_slides-pagination");
var paginationItemElms = $(".js_slides-pagination li");
//}

== カルーセルの実装をする


HTMLの要素を取得したらカルーセルの実装をしていきます。
今回カルーセルの実装をする上でslickというライブラリを使っていきます。
このslickを使えるよう初期化する関数と、どのページがいま表示されているか示すための関数を実装していきます。



まずカルーセルの元になる@<tt>{Carousel}関数から説明します。
@<tt>{Carousel}関数はパラメーターとして、次のふたつがあります

 * カルーセルの要素を示す@<tt>{carouselE}
 * カルーセルの設定を示す@<tt>{config}


これらのパラメーターを元に@<tt>{Carousel}関数でslickが使えるようにします。



次に@<tt>{currentIndex}を説明します。これはページネーションで使う関数となります。
@<tt>{currentIndex}はカルーセルでいま表示しているページがどこか示す数字を返す関数です。
この実装にはslickで定義されている@<tt>{slickCurrentSlide}という関数を使います。


//emlist[][javascript]{
function Carousel(carouselE, config) {
  this.carouselE = carouselE;
  carouselE.slick(config);
}

Carousel.prototype.currentIndex = function() {
  return this.carouselE.slick("slickCurrentSlide");
};
//}


カルーセルの実装が終わったところで、現在どのページを表示しているのか視覚的に分かりやすくするページネーションの実装をしていきます。


== ページネーションの実装をする


ページネーションの元になる@<tt>{CarouselPagination}関数を説明します。
@<tt>{CarouselPagination}関数ではパラメーターとして、次の3つがあります。

 * ページネーションの要素を示す@<tt>{paginationE}
 * ページネーション内の要素を示す@<tt>{paginationItemElms}
 * アクティブなページを示す@<tt>{activePageName}


これらのパラメーターを元に@<tt>{CarouselPagination}関数でページネーションが使えるようにします。
あとはカルーセルの表示切り替え時に@<tt>{activatePage}関数と@<tt>{deactivatePage}関数を呼び出してページネーションの表示を変えられるようにします。


//emlist[][javascript]{
function CarouselPagination(paginationE, paginationItemElms, activePageName) {
  this.activePageName = activePageName;
  this.paginationE = paginationE;
  this.paginationItemElms = paginationItemElms;
}

CarouselPagination.prototype.activatePage = function(index) {
  this.paginationItemElms[index].classList.add(this.activePageName);
};

CarouselPagination.prototype.deactivatePage = function() {
  var _this = this;

  Array.prototype.map.call(this.paginationItemElms, function(paginationItemE) {
    paginationItemE.classList.remove(_this.activePageName);
  });
};
//}


いよいよカルーセルやページネーションが動作するようにします。


== カルーセルが動くようにする


先ほど実装したカルーセルを次のとおり呼び出して動くようにします。
カルーセルの設定として3項目設定します。

 * autoplay：カルーセルを自動的にページ送りするか
 * autoplaySpeed：カルーセルの自動ページ送りを何秒おきにするか
 * arrows：前・次へボタンを表示するか

//emlist[][javascript]{
var carousel = new Carousel(carouselE, {
  autoplay: true,
  autoplaySpeed: 5000,
  arrows: false
});
//}

== ページネーションが動くようにする


カルーセルと同じように、実装したページネーションを次のとおり呼び出してページネーションを動かします。
ページネーションの初期設定として、現在アクティブであることを示すクラス名が最初のドットへ付くようにします。


//emlist[][javascript]{
var carouselPagination = new CarouselPagination(paginationE, paginationItemElms, "ll-slides-pagination__active");
carouselPagination.activatePage(carousel.currentIndex());
//}

== カルーセル表示が切り替わったときの処理を設定する


カルーセル表示が切り替わったときに、連動してページネーションの表示を切り替えるようにします。
この実装にはslickで定義されている@<tt>{afterChange}というイベントをjQueryの@<tt>{on}関数を使って拾えるようにします。


//emlist[][javascript]{
carouselE.on("afterChange", function() {
  carouselPagination.deactivatePage();
  carouselPagination.activatePage(carousel.currentIndex());
});
//}

== トップページのJavaScriptまとめ


これまでのJavaScriptをまとめると次のとおりになります。


//emlist[][javascript]{
$(function() {
  "use strict";

  //////////////////////////////////////////////////

  function Carousel(carouselE, config) {
    this.carouselE = carouselE;
    carouselE.slick(config);
  }

  Carousel.prototype.currentIndex = function() {
    return this.carouselE.slick("slickCurrentSlide");
  };

  //////////////////////////////////////////////////

  function CarouselPagination(paginationE, paginationItemElms, activePageName) {
    this.activePageName = activePageName;
    this.paginationE = paginationE;
    this.paginationItemElms = paginationItemElms;
  }

  CarouselPagination.prototype.activatePage = function(index) {
    this.paginationItemElms[index].classList.add(this.activePageName);
  };

  CarouselPagination.prototype.deactivatePage = function() {
    var _this = this;

    Array.prototype.map.call(this.paginationItemElms, function(paginationItemE) {
      paginationItemE.classList.remove(_this.activePageName);
    });
  };

  //////////////////////////////////////////////////

  var carouselE = $(".js_slides");
  var paginationE = $(".js_slides-pagination");
  var paginationItemElms = $(".js_slides-pagination li");

  var carousel = new Carousel(carouselE, {
    autoplay: true,
    autoplaySpeed: 5000,
    arrows: false
  });

  var carouselPagination = new CarouselPagination(paginationE, paginationItemElms, "ll-slides-pagination__active");
  carouselPagination.activatePage(carousel.currentIndex());

  carouselE.on("afterChange", function() {
    carouselPagination.deactivatePage();
    carouselPagination.activatePage(carousel.currentIndex());
  });
});
//}


= サイトの企画をしてみよう


この章では、サイトの要件定義と要素整理について解説します。


== 要件定義をする


サイト制作を始める前に今回のサイトについて要件定義をします。
要件定義という言葉を検索すると難しく見える説明が出てきます。
しかし実際は次のふたつを考えれば問題ありません。

 * どんなサイトを作るか
 * どんな機能が必要か


要件定義する時は次のように自問自答をすると、どんなサイトを作りどの機能が必要か導けます。

 * 質問：どんなサイトを作る？
 * 回答：「ラブライブ！」というイベントの情報を発信するサイトを作りたい
 * 質問：どんな情報を発信しよう？
 * 回答：イベントの開催日・参加者・またはチケット情報などを発信しよう
 * 回答：現場へ来れない人のためにネットでライブを楽しめる機能があったらいいかも
 * 回答：イベントがいろんな人に知られるとうれしいから、SNSなどで簡単に拡散できる機能も欲しいなー

=== 要件定義をする理由


最初に要件定義をすることで「これも入れたい」といった思いつきのアイデアに影響されず、作業が巻き戻ることを最小限に抑えられます。
これにより、サイトをより良い物にする作業へ時間を割く事ができます。


=== ラブライブ！参加者募集サイトの要件定義


では実際に要件定義をしていきます。
まずどんなサイトを作るかというところから始めます。
今回は「ラブライブ！」というアイドルコンテストの参加者募集サイトを作ります。



手順としてはまずターゲットユーザーを定義します。そしてターゲットユーザーにどんな体験を与えたいのか考えます。
今回は主に見てもらいたいユーザーとして、スクールアイドルが挙げられます。
この参加者募集サイトを見た後にスクールアイドルが応募してくれるような体験を作ることが大事です。



次に機能です。今回は工数・スケジュールを考えた結果、トップページとライブ中継ページの2ページのみ作ることにしました。
このように期限と開発期間から現実的な範囲で判断する事も要件定義の一部となります。


== 要素を整理する


サイト内のボタン・画像・テキストなど、さまざまな表示・動作する情報を「要素」と呼びます。
どの要素をどの位置へ置くかは、設計者が最も合理的だと考えた場所になります。
そのため要素を置く場所が合理的なのか判断するため、ターゲットユーザーの分析が必要となります。
ユーザーが「最も合理的」と感じる方向に向かって、さまざまなことを考え設計するべきです。
たとえば以下のことが考えられます。

 * ターゲットユーザーがよく使いそうなボタン・機能をクリックしやすいところへ置く
 * ユーザーへ1番伝えたいことを見やすいところに置く

=== 今回の要素について整理


アニメのキャプチャ画像から、サイトを構成する要素について分析してみます。



//image[lovelive-screenshot-top][サイトトップ（ラブライブ！第2期 1話より）© プロジェクトラブライブ！]{
//}




まず、グローバルナビゲーションに表示されている内容は以下のとおりとなります。

 * TOP
 * LIVE STAGE
 * OUTLINE
 * SCHEDULE
 * SPECIAL
 * LINK
 * FAQ


ひとつずつ見ていきましょう。


==== TOP


字面どおりサイトのトップページを意味します。
ユーザーがサイトを見ている時、どのページにいたとしても1クリックでトップページへ戻れます。
サイトを見る時の習慣に準じて一番見やすい左上へ置いたのは、ターゲットユーザーにとって一番大事、一番クリックしてほしいという理由があります。


==== LIVE STAGE


ラブライブ！の状況をネットで生中継するページだと思われます。
参加するアイドルグループが見る、OUTLINEやSCHEDULEより左に位置しています。これは一体どういうことでしょうか？
これは参加するアイドルグループの他に、ライブをネット上で見るファンも大事という考えがあると思います。
ライブステージページ内にある要素をアニメのキャプチャ画像から推測してみると、以下の要素で構成されているように見えます。

 * 映像タイトル
 * 出演者
 * 映像生中継
 * 映像情報
 * ユーザーコメント
 * 投票
 * 広告スペース


ここで最初に書いた要件定義を思い出しましょう。
今回は「工数・スケジュールを考えた結果、トップページとライブ中継ページの2ページのみ作る」ということでした。
つまり他のページについて要素整理は必要なく、ここで終わらせることができます。
今回、どこまで資料が必要なのかは要件定義の段階で明確にしていました。
そのため余計な作業はなくなり、効率的に開発を進める事ができます。



ここからは今回のサイトについて推測を書いていきます。よければ参考にしてください。


==== OUTLINE


おそらくコンテスト概要や募集要項などの内容が記載されていると思われます。


==== SCHEDULE


おそらくコンテスト選考スケジュールや催行スケジュールなどの内容が記載されていると思われます。


==== SPECIAL


おそらく歴代優勝者コメントやコラボキャンペーンなどの情報が記載されていると思われます。これはテキストのみだと推測がしにくいです。


==== LINK


関連法人、個人の公式サイトなどが掲載されていると思われます。


==== FAQ


よくある質問やお問い合わせなどが掲載されていると思われます。



以上の要件定義、要素整理に基づき、サイトマップと仕様書を作成していきます。



//image[01][要素整理]{
//}



== サイトマップを作る


サイトのページ数と階層を表示する図がサイトマップです。
サイトマップは、サイトが何ページあるかということや、ページの関連性をひと目で見られます。それにより工数も推測できます。
サイトマップを用意するとメリットがふたつあります。ひとつめに、ページ数が多いサイトの場合は制作スピードを上げられます。ふたつめに、ページ漏れのリスクも減らすことができます。



サイトマップを書く時、個人的に推奨するツールはExcelです。
画像を作るイメージからPowerPointが良いと思う方もいるかもしれません。しかし実はセル結合や枠線を描画して作るほうが楽です。
Excelがない場合はGoogle Driveのスプレッドシートも最低限な機能がそろっているので代用できます。
作るときの心がけとして、階層を意識し外部リンクは明確に表示するよう作成するのをおすすめします。


=== 今回のサイトマップについて


要件整理をきちんとまとめれば、サイトマップはほぼ考えずに作れると思います。
今回作るのはトップとライブステージページの2ページです。またライブステージページ内にポップアップ画面を設計しました。



一番上層のページをトップとして下層にライブステージページを書きます。
他に外部リンクであるSNSボタンをつけて完成です。
今回は極めて簡単な内容のためこれで終わりです。



本来は各下層ページにさらなる下層ページがある、サイトのあらゆる表示可能なページ（ポップアップやエラーページなど）を全部作らないといけません。
そのためExcelに起こす前の段階で紙へ下書きを書いたほうが良いです。



//image[02][サイトマップ]{
//}



== ワイヤーフレームと仕様書の作成


ワイヤーフレームはサイト内にある要素の種類・数・位置を示す物です。
仕様書は要素の具体的な表示方法や演出をどうするか明記する物です。
場合によっては、ワイヤーフレームと仕様書両方をまとめたり分けて書きます。



サイトの内容が豊かであればあるほど仕様書も内容は多くなります。その時は分けて書くことをおすすめします。
また1ページごとにワイヤーフレームと仕様書は必要です。



ワイヤーフレームはPowerPointとExcelのどちらか好きなほうを使います。仕様書はExcelをおすすめします。
ワイヤーフレームや仕様書は作る際に3つ気をつけたいことがあります。それらを、ひとつずつ解説していきます。



はじめに気をつける事として、要素は色もしくは形で分けるように書くことです。
ワイヤーフレームの要素は大きく分けて画像・テキスト・ボタンの3種類に分けられます。
さらに動作の要素を入れると、スクロール・ポップアップなどがあります。
これらを見分けがつくように分けて書くことをおすすめします。



次に気をつける事として、ワイヤーフレームに余計な情報を入れないということです。
ワイヤーフレームはあくまで要素がページ内のどこにあるか示す資料です。そのため色など不要な情報はなるべく入れないほうがいいです。
なぜならデザイナーはグラフィックとUIの制作に、参考資料としてワイヤーフレームを使うためです。余計な情報があると資料は分かりづらくなり混乱を招きます。
グラフィックやUIの方向性を決めるのはアートディレクターの仕事なので、企画資料としては見やすいようにすることが最優先です。



最後に気をつける事として、仕様書は箇条書きにすることです。
それぞれの要素・動作に対して、箇条書きする必要があります。仕様書を見るエンジニアにとって不明な点がない状態でコーディングできるよう目指します。


== 今回のワイヤーフレームと仕様書について


要件定義の段階で判明していましたが今回はページ数・要素共に少ないです。
そのためワイヤーフレームと仕様書をまとめて書きました。1ページずつ見ていきましょう。


=== トップページのワイヤーフレームと仕様


//image[lovelive-screenshot-top][トップページ（ラブライブ！第2期 1話より）© プロジェクトラブライブ！]{
//}




画像から推測すると、共通のヘッダー・グローバルナビゲーション・フッター以外は画像表示のみに見えます。
トップページで訴求したいことは以下のふたつになると思います。これは華やかな画像をいっぱい見られるようにする意図があると思われます。

 * コンテストの盛り上がり
 * 歴代受賞者の宣伝


画像の表示方法はカルーセルということが分かります。
カルーセルは@<href>{http://www.nike.com/jp/ja_jp/,Nike}などで使われている「注目させたい複数の画像などをつぎつぎと横にスライド表示する」ものです。



またアニメのキャプチャ画像を見ると共通フッター内にはカルーセルと連携しそうなドットがあります。
しかしこの見た目は現実だと採用される可能性が極めて低いものです。
ライブステージページもドットが共通フッター内にあります。これも映像を見るページで普通こういう表示はしません。
そのため考えた結果として、トップページだけ画像をカルーセルで表示するようにしました。



//image[03][トップページのワイヤーフレーム]{
//}



=== ライブステージページのワイヤーフレームと仕様


//image[lovelive-screenshot-livestage][ライブステージページ（ラブライブ！第2期 3話より）© プロジェクトラブライブ！]{
//}




アニメのキャプチャ画像から推測すると、共通要素を除けば「ニコニコ動画」の仕様に似ています。
生中継はもちろん映像が中心と思われます。他の機能については映像と関連するものという想定です。



映像エリアの隣に広告スペースが見えます。おそらくここに広告が掲載されるでしょう。



また本来は「ニコニコ動画」のようなコメント機能があると思われます。
今回は工数が足りないため少し改造しSNSコメントという似ている機能へ変更しました。
「何かをコメントする」体験は変えず、より工数の少ないものに変えられたと思います。



//image[04][ライブステージページのワイヤーフレーム]{
//}



=== ほかポップアップ


サイトマップのところで書きましたがエラーページも想定しました。
ただしエラーページの検証はエラーが発生しない限りできません。
そのためエラーページの代わりに「まだ作ってない」というポップアップを用意しました。



他のポップアップとしてはSNSコメントポップアップを用意しました。
用意した理由は映像内のコメントを擬似的に再現するためです。



また投票結果を再現するために投票結果ポップアップも作りました。



これらのポップアップはページとして存在しないため、サイトマップでは仕様をページと区別して反映しました。



//image[05][まだ作っていないというポップアップのワイヤーフレーム]{
//}

//image[06][SNSのコメントポップアップのワイヤーフレーム]{
//}

//image[07][投票結果を再現するためのワイヤーフレーム]{
//}



== 注意する点


サイトを作る時いくつか注意点があります。それはライセンスや著作権です。


=== ライセンス


はじめにソースコードのライセンスです。
GitHub上にあるライブラリはだいたいライセンス情報を書いたファイルが置かれています。
ライセンスファイルが置かれていないライブラリは使わないようにします。
理由は今後どんなライセンスが適用されるか分からないという理由と、作者が再利用されたくないという意志の元、ライセンスファイルを置いていない可能性があるためです。



なおライセンスファイルが置いてある場合でもGPLライセンスの場合は注意します。
理由はライブラリに独自の改変を加えた際、GPLライセンスでソースコード公開が必要なためです。
MITライセンスや修正BSDライセンスについては、作者の名前を書いておけば問題ありません。



「サイト制作のSTART:DASH!!」ではソースコード部分をMITライセンスで提供しています。
そのためこの本に出てくるソースコードはMITライセンスである旨と@<tt>{Copyright (c) 2015 O2 Project}という著作権を表示すれば自由に使う事ができます。
ただしMITライセンスの特性上、ソースコードを使った事による責任は負いません。


=== 著作権


またサイト上で使う画像についても注意が必要です。
@<href>{http://law.e-gov.go.jp/htmldata/S45/S45HO048.html#1000000000002000000003000000005000000000000000000000000000000000000000000000000,著作権法 第三十条}には、次のような記述があります。


//quote{
著作権の目的となつている著作物（以下この款において単に「著作物」という。）は、個人的に又は家庭内その他これに準ずる限られた範囲内において使用すること（以下「私的使用」という。）を目的とするときは、次に掲げる場合を除き、その使用する者が複製することができる。

//}


たとえばPCの壁紙として、著作権情報が載っている画像を使ったとしてもそれは問題になりません。私的利用の範囲になるためです。
しかしインターネット上などで公開するために使った場合、@<href>{http://law.e-gov.go.jp/htmldata/S45/S45HO048.html#1000000000002000000003000000003000000000000000000000000000000000000000000000000,著作権法　第二十三条}の公衆送信権を侵害します。



またイラストをトレースし自分流に編集して公開する場合も問題となる場合があります。
このあたりは次の記事を見ると良いでしょう。


//quote{
@<href>{http://www.bengo4.com/houmu/17/1263/n_3282/,大人気ゲーム「刀剣乱舞」に「トレパク」疑惑が続々浮上――どんな問題があるのか？|弁護士ドットコムニュース}

//}


なおこの「サイト制作のSTART:DASH!!」は文章部分をクリエイティブ・コモンズの表示・非営利・継承4.0国際ライセンスで提供しています。
このライセンスは次の3つを満たすことにより文章部分を自由に使う事ができます。

 * 著作権を表示する
 * 非営利である
 * 同じライセンスを適用する


クリエイティブ・コモンズのライセンスは取り消せないため、ライセンスを付ける前に@<href>{http://creativecommons.jp/2015/07/15/cc%E3%83%A9%E3%82%A4%E3%82%BB%E3%83%B3%E3%82%B9%E3%83%BB%E3%83%90%E3%83%BC%E3%82%B8%E3%83%A7%E3%83%B34-0-%E6%97%A5%E6%9C%AC%E8%AA%9E%E7%89%88%E3%81%AE%E5%85%AC%E9%96%8B/,CCライセンス・バージョン4.0 日本語版の公開 | クリエイティブ・コモンズ・ジャパン}からリーガルコードを読んで理解する必要があります。
また@<href>{http://liskul.com/cr_ccnotrouble-4194,クリエイティブコモンズ｜商用利用でトラブルを避ける全知識}が分かりやすいです。


=== イラストや素材を自作できない場合どうしたら良いか？


とはいえ、イラストや素材を自作できない場合、サイトが殺風景な見た目になりがちです。
その場合は写真素材サイトを使うことで解決できます。写真素材サイトの一例として次のサイトがあります。

 * ぱくたそ
 ** 商用利用可かつクレジット表記が不要なサイト
 * GIRLY DROP（ガーリードロップ）
 ** 女性向けの写真素材サイト
 * タダピク
 ** 商用利用可かつ、クレジット表記が不要とうたっているサイトを横断的に検索できるサイト


写真素材サイトを使うことで、高品質な写真が使えます。
ただし写真を使う時は各写真素材サイトの注意項目を読んだ上で、それに沿って使う必要があります。


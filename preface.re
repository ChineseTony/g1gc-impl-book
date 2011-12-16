= はじめに

//comment[== TODO まえがき]
== 注意事項
G1GCのアルゴリズムの一部は米国で特許が取得されています@<fn>{g1gc_patent}。
G1GCを実装して公開する場合は注意してください。

//footnote[g1gc_patent][米国特許番号は7340494]
//footnote[openjdk][G1GCはOpenJDK7に実装済み。ソースコードは次のURLで取得可能。 @<href>{http://openjdk.java.net/}]

== 対象読者
OpenJDK 7のメモリ管理周りの実装に興味がある方、『徹底解剖「G1GC」 アルゴリズム編』@<bib>{g1gcbook}をすでに読んだ方を対象にしています。

== 図中の矢印

本書内の図にはさまざまな矢印が出てきます。本書で使う主要な矢印を@<img>{yazirushi}にまとめました。

//image[yazirushi][矢印のパターン]

矢印(a)は参照関係を表します。ルート@<fn>{root}からオブジェクトへの参照などに使われます。

矢印(b)は代入操作、移動操作に表します。変数への代入・オブジェクトコピー・移動などに使われます。

矢印(c)は時間の経過を表します。

//footnote[root][ルート:オブジェクトのポインタをたどる際の「起点」となる部分。]

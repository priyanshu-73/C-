<html>
<head>
<title>main.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #bbb529;}
.s1 { color: #a9b7c6;}
.s2 { color: #6a8759;}
.s3 { color: #cc7832;}
.s4 { color: #6897bb;}
</style>
</head>
<body bgcolor="#2b2b2b">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
main.cpp</font>
</center></td></tr></table>
<pre><span class="s0">#include </span><span class="s2">&lt;iostream&gt;</span>
<span class="s3">using namespace </span><span class="s1">std</span><span class="s3">;</span>

<span class="s3">int </span><span class="s1">main(){</span>
    <span class="s3">char </span><span class="s1">a</span><span class="s3">;</span>
    <span class="s1">cout &lt;&lt; </span><span class="s2">&quot;enter something&quot; </span><span class="s1">&lt;&lt; endl</span><span class="s3">;</span>
    <span class="s1">cin &gt;&gt; a</span><span class="s3">;</span>
    <span class="s3">if</span><span class="s1">(a &gt;= </span><span class="s2">'A' </span><span class="s3">and </span><span class="s1">a &lt;= </span><span class="s2">'Z'</span><span class="s1">){</span>
      <span class="s1">cout &lt;&lt; </span><span class="s2">&quot;a is an uppercase letter&quot;</span><span class="s1">&lt;&lt;endl</span><span class="s3">;</span>
    <span class="s1">}</span>
    <span class="s3">else if</span><span class="s1">(a&gt;=</span><span class="s2">'a' </span><span class="s3">and </span><span class="s1">a&lt;=</span><span class="s2">'z'</span><span class="s1">){</span>
        <span class="s1">cout&lt;&lt;</span><span class="s2">&quot;a is an lowercase letter&quot;</span><span class="s1">&lt;&lt;endl</span><span class="s3">;</span>
    <span class="s1">}</span>
    <span class="s3">else if</span><span class="s1">(a&gt;=</span><span class="s2">'0' </span><span class="s3">and </span><span class="s1">a&lt;=</span><span class="s2">'9'</span><span class="s1">){</span>
        <span class="s1">cout &lt;&lt; </span><span class="s2">&quot;a is a number&quot; </span><span class="s1">&lt;&lt; endl</span><span class="s3">;</span>
    <span class="s1">}</span>
    <span class="s3">return </span><span class="s4">0</span><span class="s3">;</span>
<span class="s1">}</span></pre>
</body>
</html>

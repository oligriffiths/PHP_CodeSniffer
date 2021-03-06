<?php

if ($something) echo 'hello';

if ($something) {
    echo 'hello';
} else echo 'hi';

if ($something) {
    echo 'hello';
} else if ($else) echo 'hi';

foreach ($something as $thing) echo 'hello';

for ($i; $i > 0; $i--) echo 'hello';

while ($something) echo 'hello';

do {
    $i--;
} while ($something);

if(true)
  $someObject->{$name};

if (true) :
    $foo = true;
endif;

while (true) :
    $foo = true;
endwhile;

for ($i; $i > 0; $i--) :
    echo 'hello';
endfor;

foreach ($array as $element) :
    echo 'hello';
endforeach;

while (!$this->readLine($tokens, $tag));
while (!$this->readLine($tokens, $tag)); //skip to end of file

foreach ($cookies as $cookie)
    if ($cookie->match($uri, $matchSessionCookies, $now))
        $ret[] = $cookie;

foreach ($stringParade as $hit)
    $hitParade[] = $hit + 0; //cast to integer

if ($foo) :
    echo 'true';
elseif ($something) :
    echo 'foo';
else:
    echo 'false';
endif;

function test()
{
    if ($a)
        $a.=' '.($b ? 'b' : ($c ? ($d ? 'd' : 'c') : ''));
}

if ($a)
    foreach ($b as $c) {
        if ($d) {
            $e=$f;
            $g=$h;
        } elseif ($i==0) {
            $j=$k;
        }
    }

?>
<div style="text-align: right;">
    <?php if ($model->scenario == 'simple') $widget->renderPager() ?>
</div>

<?php
switch ($this->error):
    case Shop_Customer :: ERROR_INVALID_GENDER: ?>
        Ung&uuml;ltiges Geschlecht!
    <?php break;
    case Shop_Customer :: ERROR_EMAIL_IN_USE: ?>
        Die eingetragene E-Mail-Adresse ist bereits registriert.
    <?php break;
endswitch;

if ($this->allowShopping !== true):
    if ($this->status != Shop_Cart :: OK):
        switch ($this->status):
            case Shop_Cart :: NOT_FOUND:
            echo 'foo';
        endswitch;
    endif;
else:
    echo 'foo';
endif;

// ELSE IF split over multiple lines (not inline)
if ($test) {
} else
    if ($test) {
    } else {
    }

switch($response = \Bar::baz('bat', function ($foo) {
    return 'bar';
})) {
    case 1:
        return 'test';

    case 2:
        return 'other';
}

$stuff = [1,2,3];
foreach($stuff as $num)
    if ($num %2 ) {
        echo "even";
    } else {
        echo "odd";
    }

$i = 0;
foreach($stuff as $num)
    do {
        echo $i;
        $i++;
    } while ($i < 5);

foreach($stuff as $num)
    if (true) {
        echo "true1\n";
    }
    if (true) {
        echo "true2\n";
    }

if ($foo) echo 'foo';
elseif ($bar) echo 'bar';
else echo 'baz';

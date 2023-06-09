# algorithm-for-adc-lol

https://leagueoflegends.fandom.com/wiki/Damage


$$dmg = a*((b*attackDMG*\textbf{protect[}armor*armorPenetration-lethalithy\textbf{]}+\\
c*attackDMG*\textbf{protect[}mgResist*mgPenetration-mgLethalithy\textbf{]})+ \\
e*(f*AdOnHitDmg*\textbf{protect[}armor*armorPenetration-lethalithy\textbf{]}+\\
g*ApOnHitDmg*\textbf{protect[}mgResist*mgPenetration-mgLethalithy\textbf{]}-d )
)$$

gdzie:
- $a$ - wpółczynnik zmieniający ogólny dmg (z wyjątkiem true dmg)
- $b$ - współczynnik zmieniający dmg fizyczny autoataków
- $c$ - współczynnik zmieniający dmg magiczny autoataków
- $d$ - zmniejszenie dmg autoataków
- $e$ - współczynnik zmieniający dmg fizyczny z efektów na autoatakach
- $f$ - współczynnik zmieniający dmg magiczny z efektów na autoatakach
- $armorPenetration$ - przebicie proc. pancerza
- $mgPenetration$ - przebicie proc. odporności magicznej
- $lethalithy$ - przebicie pancerza
- $mgLethalithy$ - przebicie odporności magicznej
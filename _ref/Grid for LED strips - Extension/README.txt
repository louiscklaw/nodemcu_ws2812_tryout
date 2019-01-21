                   .:                     :,                                          
,:::::::: ::`      :::                   :::                                          
,:::::::: ::`      :::                   :::                                          
.,,:::,,, ::`.:,   ... .. .:,     .:. ..`... ..`   ..   .:,    .. ::  .::,     .:,`   
   ,::    :::::::  ::, :::::::  `:::::::.,:: :::  ::: .::::::  ::::: ::::::  .::::::  
   ,::    :::::::: ::, :::::::: ::::::::.,:: :::  ::: :::,:::, ::::: ::::::, :::::::: 
   ,::    :::  ::: ::, :::  :::`::.  :::.,::  ::,`::`:::   ::: :::  `::,`   :::   ::: 
   ,::    ::.  ::: ::, ::`  :::.::    ::.,::  :::::: ::::::::: ::`   :::::: ::::::::: 
   ,::    ::.  ::: ::, ::`  :::.::    ::.,::  .::::: ::::::::: ::`    ::::::::::::::: 
   ,::    ::.  ::: ::, ::`  ::: ::: `:::.,::   ::::  :::`  ,,, ::`  .::  :::.::.  ,,, 
   ,::    ::.  ::: ::, ::`  ::: ::::::::.,::   ::::   :::::::` ::`   ::::::: :::::::. 
   ,::    ::.  ::: ::, ::`  :::  :::::::`,::    ::.    :::::`  ::`   ::::::   :::::.  
                                ::,  ,::                               ``             
                                ::::::::                                              
                                 ::::::                                               
                                  `,,`


https://www.thingiverse.com/thing:3017013
Grid for LED strips - Extension by parallyze is licensed under the Creative Commons - Attribution - Non-Commercial - Share Alike license.
http://creativecommons.org/licenses/by-nc-sa/3.0/

# Summary

This thing can be used to extend this led grid: https://www.thingiverse.com/thing:2930831

It is put in between the existing parts and extends the grid from 16x5 to 24x5.

I don't have any pictures of the build process but if you've built the grid then it's probably not hard to tell:

1. Unscrew everything so you have the leds on the plates lying in front of you. 
2. Make a clean cut through all led strips exactly in the center where the two plastic parts meet.
3. Now put the new part in between and solder in 5 pcs of led strips with 8 leds each
<b>Watch the alternating direction of the strips and put the new ones in accordingly!</b>
4. Put everything back together

I won't provide a sketch for this. If you're using the old sketch it'll look more like tetris as can be seen in one of the pictures. But if you change the supplied sketch (gridclock_v6) from the other thing it'll work without problems.

1. Change "#define RESX 16" to "#define RESX 24"
2. (optional) search for "showDigit". The second parameter is the position where the digit gets drawn. Change to your liking...
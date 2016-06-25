PROJECT="ofxSyntype"
replace 'ofxDmtrAddonSkeleton' '${PROJECT}' -- *.*
replace 'ofxDmtrAddonSkeleton' '${PROJECT}' -- src/*
mv src/ofxDmtrAddonSkeleton.cpp src/${PROJECT}.cpp
mv src/ofxDmtrAddonSkeleton.h src/${PROJECT}.h

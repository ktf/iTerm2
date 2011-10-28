#!/bin/sh

# env.sh
# iTerm
#
# Created by Giulio Eulisse on 10/27/11.
# Copyright 2011 __MyCompanyName__. All rights reserved.

export SCRAM_ARCH=osx106_amd64_gcc421
progname="$0"
dirname=`dirname "$progname"`

if [ -f $dirname/../../cmsset_default.sh ]
then
  source $dirname/../../cmsset_default.sh
fi

if [ -f $dirname/../../$SCRAM_ARCH/apt-init.sh ]
then
  source $dirname/../../$SCRAM_ARCH/apt-init.sh
fi
echo $SCRAM_ARCH
$dirname/iTerm
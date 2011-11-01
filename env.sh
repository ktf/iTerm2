#!/bin/sh

# env.sh
# iTerm
#
# Created by Giulio Eulisse on 10/27/11.
# Copyright 2011 __MyCompanyName__. All rights reserved.

export SCRAM_ARCH=osx106_amd64_gcc421
progname="$0"
dirname=`dirname "$progname"`
apppath=$dirname/../..
export PATH=$apppath/common:$apppath/bin:$PATH

if [ -f $apppath/cmsset_default.sh ]; then
  source $apppath/cmsset_default.sh
fi

if [ -f $apppath/$SCRAM_ARCH/apt-init.sh ]; then
  source $apppath/$SCRAM_ARCH/apt-init.sh
fi

exec $dirname/iTerm ${1+"$@"}

# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.helloworld.Debug:
/Users/min/dev/cpphelloworld/Debug/helloworld:
	/bin/rm -f /Users/min/dev/cpphelloworld/Debug/helloworld


PostBuild.src.Debug:
/Users/min/dev/cpphelloworld/Debug/libsrc.a:
	/bin/rm -f /Users/min/dev/cpphelloworld/Debug/libsrc.a


PostBuild.stack.Debug:
/Users/min/dev/cpphelloworld/Debug/stack:
	/bin/rm -f /Users/min/dev/cpphelloworld/Debug/stack


PostBuild.helloworld.Release:
/Users/min/dev/cpphelloworld/Release/helloworld:
	/bin/rm -f /Users/min/dev/cpphelloworld/Release/helloworld


PostBuild.src.Release:
/Users/min/dev/cpphelloworld/Release/libsrc.a:
	/bin/rm -f /Users/min/dev/cpphelloworld/Release/libsrc.a


PostBuild.stack.Release:
/Users/min/dev/cpphelloworld/Release/stack:
	/bin/rm -f /Users/min/dev/cpphelloworld/Release/stack


PostBuild.helloworld.MinSizeRel:
/Users/min/dev/cpphelloworld/MinSizeRel/helloworld:
	/bin/rm -f /Users/min/dev/cpphelloworld/MinSizeRel/helloworld


PostBuild.src.MinSizeRel:
/Users/min/dev/cpphelloworld/MinSizeRel/libsrc.a:
	/bin/rm -f /Users/min/dev/cpphelloworld/MinSizeRel/libsrc.a


PostBuild.stack.MinSizeRel:
/Users/min/dev/cpphelloworld/MinSizeRel/stack:
	/bin/rm -f /Users/min/dev/cpphelloworld/MinSizeRel/stack


PostBuild.helloworld.RelWithDebInfo:
/Users/min/dev/cpphelloworld/RelWithDebInfo/helloworld:
	/bin/rm -f /Users/min/dev/cpphelloworld/RelWithDebInfo/helloworld


PostBuild.src.RelWithDebInfo:
/Users/min/dev/cpphelloworld/RelWithDebInfo/libsrc.a:
	/bin/rm -f /Users/min/dev/cpphelloworld/RelWithDebInfo/libsrc.a


PostBuild.stack.RelWithDebInfo:
/Users/min/dev/cpphelloworld/RelWithDebInfo/stack:
	/bin/rm -f /Users/min/dev/cpphelloworld/RelWithDebInfo/stack




# For each target create a dummy ruleso the target does not have to exist

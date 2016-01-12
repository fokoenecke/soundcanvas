# spec file for package drumstick (Version 1.0.2)
#
# MIDI Sequencer C++ Library Bindings for Qt5
# Copyright (C) 2005-2015 Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>
#
# This file and all modifications and additions to the pristine
# package are under the same license as the package itself.
#

# norootforbuild

Name:           drumstick
Version:        1.0.2
Release:        1
License:        GPL v2 or later
Summary:        MIDI Sequencer C++ Library Bindings
Group:          Productivity/Multimedia/Sound/Midi
URL:            http://drumstick.sourceforge.net
Source:         %{name}-%{version}.tar.bz2
BuildRoot:      %{_tmppath}/%{name}-%{version}-build
BuildRequires:  cmake
BuildRequires:  alsa-lib-devel
BuildRequires:  qt5-qtbase-devel
BuildRequires:  qt5-qtsvg-devel
BuildRequires:  doxygen
BuildRequires:  graphviz
BuildRequires:  libxslt
BuildRequires:  docbook-utils
BuildRequires:  docbook-style-xsl
Requires:       shared-mime-info

%description
This package includes test and example programs for drumstick libraries.


Authors:
--------
    Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>


%package -n libdrumstick-file1
Summary:        MIDI Sequencer C++ Library
Group:          System/Libraries

%description -n libdrumstick-file1
MIDI Sequencer C++ Library Bindings for Qt5
This library includes classes providing file input and output in formats 
commonly used by MIDI programs. Currently, SMF (standard MIDI file) 
read/write and WRK (Cakewalk) file read are supported.


Authors:
--------
    Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>

%package -n libdrumstick-alsa1
Summary:        MIDI Sequencer C++ Library
Group:          System/Libraries

%description -n libdrumstick-alsa1
MIDI Sequencer C++ Library Bindings for Qt5 and ALSA.
This library includes the ALSA Sequencer library classes, providing MIDI 
recording and playback functionality to C++/Qt5 programs.


Authors:
--------
    Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>

%package -n libdrumstick-rt1
Summary:        MIDI Realtime IO C++ Library
Group:          System/Libraries

%description -n libdrumstick-rt1
MIDI Realtime IO C++ Library for Qt5
This library includes the RT library classes, providing MIDI 
realtime IO functionality to C++/Qt5 programs.


Authors:
--------
    Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>

%package -n libdrumstick-devel
Summary:        Development package for the libdrumstick library
Group:          Development/Libraries/C and C++
Requires:       libdrumstick-file1 = %{version}
Requires:       libdrumstick-alsa1 = %{version}
Requires:       glibc-devel libstdc++-devel alsa-lib-devel qt5-qtbase-devel

%description -n libdrumstick-devel
This package contains the files needed to compile programs that use the
libdrumstick libraries.


Authors:
--------
    Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>

%package -n libdrumstick-doc
Summary:        Development documentation package for the drumstick libraries
Group:          Documentation/Other

%description -n libdrumstick-doc
This package contains the developer's documentation of the drumstick libraries.


Authors:
--------
    Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>

%prep
%setup -q

%build
CXXFLAGS="$RPM_OPT_FLAGS -g -fexceptions" \
    cmake . -DSTATIC_DRUMSTICK=0 \
            -DCMAKE_INSTALL_PREFIX=%{_prefix} \
            -DLIB_SUFFIX=$(echo %_lib | cut -b4-)
make %{?jobs:-j %jobs} VERBOSE=1
make doxygen

%install
make install DESTDIR=$RPM_BUILD_ROOT

%post 
%{_bindir}/update-mime-database %{_datadir}/mime

%postun
%{_bindir}/update-mime-database %{_datadir}/mime

%post -n libdrumstick-file1 -p /sbin/ldconfig

%postun -n libdrumstick-file1 -p /sbin/ldconfig

%post -n libdrumstick-alsa1 -p /sbin/ldconfig

%postun -n libdrumstick-alsa1 -p /sbin/ldconfig

%post -n libdrumstick-rt1 -p /sbin/ldconfig

%postun -n libdrumstick-rt1 -p /sbin/ldconfig

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-, root, root)
%doc AUTHORS COPYING NEWS README TODO ChangeLog
%doc %{_mandir}/*
%{_datadir}/icons/hicolor/*/*/*
%{_datadir}/applications/*
%{_bindir}/*

%files -n libdrumstick-file1
%defattr(-,root,root)
%{_libdir}/libdrumstick-file.so.*
%{_datadir}/mime/packages/*

%files -n libdrumstick-alsa1
%defattr(-,root,root)
%{_libdir}/libdrumstick-alsa.so.*

%files -n libdrumstick-rt1
%defattr(-,root,root)
%{_libdir}/libdrumstick-rt.so.*
%{_libdir}/drumstick/*.so

%files -n libdrumstick-devel
%defattr(-, root, root)
%dir %{_includedir}/drumstick
%{_libdir}/libdrumstick-file.so
%{_libdir}/libdrumstick-alsa.so
%{_libdir}/libdrumstick-rt.so
%{_includedir}/drumstick.h
%{_includedir}/drumstick/*.h
%{_libdir}/pkgconfig/*.pc

%files -n libdrumstick-doc
%defattr(-, root, root)
%doc doc/html/*

%changelog
* Sat Aug 30 2014 Pedro Lopez-Cabanillas <plcl@users.sourceforge.net> 1.0.0
- New version

* Thu Sep 9 2010 Pedro Lopez-Cabanillas <plcl@users.sourceforge.net> 0.5.0
- New version

#  VER 010 $Id: g21k-binutils.spec.in,v $
#
#  NOTE: Make all changes in g21k-binutils.spec.in
#
#  Copyright 1999 Egil Kvaleberg
#
#  To do the build stage, do:
#
#       rpm -bc --short-circuit g21k-binutils.spec
#
#
%define ver PL4
%define rel 1
%define prefix /usr/local
%define etcdir %{prefix}/21k/etc
%define libdir %{prefix}/21k/lib
%define incdir %{prefix}/21k/include

# BUG: rewrite...
Summary: Assembler and linker for the AD 21k DSP family
Name: g21k-binutils
Version: %ver
Release: %rel
Copyright: GPL
# BUG: probably wrong:
Group: Utilities/System
# BUG:
Source: ftp://ftp.sol.no/user/egilk/g21k-binutils-%{ver}.tar.gz
URL: http://www.kvaleberg.com/g21.html
Packager: Egil Kvaleberg <egil@kvaleberg.no>
BuildRoot: /tmp/g21k-binutils-root
# Requires:

# Docdir: %{prefix}/doc

# BUG: rewrite...
%description
The package g21k-binutils consists of the Analog Devices assembler and
linker tools for their 21k series of DSPs, including the Sharc.

%prep
%setup

# rm -Rf $RPM_BUILD_ROOT
%build
CFLAGS="$RPM_OPT_FLAGS" ./configure --prefix=%prefix
make dep
make

%install
rm -rf $RPM_BUILD_ROOT
make prefix=$RPM_BUILD_ROOT%{prefix} install
# strip %{prefix}/bin/g21k-binutils

%clean
rm -rf $RPM_BUILD_ROOT

%post

%postun
%preun

%files
%doc COPYING README
%{etcdir}/a21000
%{prefix}/bin/asm21k
%{prefix}/bin/ld21k
%{prefix}/bin/mem21k
%{prefix}/bin/cdump21k
%{prefix}/man/man1/a21000.1
%{prefix}/man/man1/asm21k.1
%{prefix}/man/man1/ld21k.1
%{prefix}/man/man1/mem21k.1

# %config /etc/g21k-binutils.rc
%dir %{etcdir}
%dir %{libdir}
%dir %{incdir}

#%changelog
# $Log: g21k-binutils.spec.in,v $





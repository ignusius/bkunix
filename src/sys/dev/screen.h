/*
 * This file is part of BKUNIX project, which is distributed
 * under the terms of the GNU General Public License (GPL).
 * See the accompanying file "COPYING" for more details.
 */
#define DISPLIST 0140000
#define SCNCNTRL 0143740
#define CHARMEM 0144000

struct {
	char	fscroll;
	char	lscroll;
	char	chrloff;
	char	rstloff;
	char	curclnp;
	char	currloff;
	char	curhcpos;
	char	curhloff;
	char	grp1dis;
	char	grp1chr;
	char	grp2dis;
	char	grp2chr;
	char	dummy[4];
	char	curdefn[12];
};

#define EOT	04
#define NLINE	28
#define NCOL	72

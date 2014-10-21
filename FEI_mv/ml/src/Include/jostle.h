/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision: 1.5 $
 ***********************************************************************EHEADER*/




extern	void	jostle_env(char*);

extern	void	jostle_wrkspc_input(int*,char*);

extern	void	jostle(int*,int*,int*,int*,int*,
		 int*,int*,int*,int*,int*,int*,int*,double*);

extern	void	pjostle_init(int*,int*);
extern	void	pjostle(int*,int*,int*,int*,int*,int*,int*,int*,
		 int*,int*,int*,int*,int*,int*,int*,double*);

extern	int	jostle_mem(void);
extern	int	jostle_cut(void);
extern	double	jostle_bal(void);
extern	double	jostle_tim(void);


/*
   This file is part of mpiSORT
   
   Copyright Institut Curie 2020
   
   This software is a computer program whose purpose is to sort SAM file.
   
   You can use, modify and/ or redistribute the software under the terms of license (see the LICENSE file for more details).
   
   The software is distributed in the hope that it will be useful, but "AS IS" WITHOUT ANY WARRANTY OF ANY KIND. Users are therefore encouraged to test the software's suitability as regards their requirements in conditions enabling the security of their systems and/or data. 
   
   The fact that you are presently reading this means that you have had knowledge of the license and that you accept its terms.
*/

/*
   Module:
     preWrite.h

   Authors:
    Frederic Jarlier, 	Institut Curie
	Nicolas Joly, 		Institut Pasteur
	Nicolas Fedy,		Institut Curie
	Leonor Sirotti,	 	Institut Curie
	Thomas Magalhaes,	Institut Curie
	Paul Paganiban,		Institut Curie
*/



#include <stdio.h>

#include <mpi.h>

MPI_Offset startOffset(int rank, int num_proc, size_t blockSize, size_t headerSize, int nbchr, size_t readNum, MPI_Comm comm);


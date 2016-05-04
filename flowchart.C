//we want to do MOLECULAR DYNAMICS

//funz---->INITIALIZE (INIT)
	//generate randomly ( UNIFORM 3D ) an array of positions;
	//MAYBE generate randomly ( MAXWELL BOLTZMANN 3D) an array of velocities;
		//ALTERNATIVE is initialize all to 0
	//MAYBE generate randomly ( ??? ) an array of accelerations;
		//ALTERNATIVE is initialize all to 0


//funz---->COMPUTE FORCES/ACCEL (COMPFOR)


//funz---->ACTUALLY INTEGRATE (GOVERLET)
	// use VELOCITY VERLET:
		//UNA TANTUM:			
			//COMPFOR
		//CYCLING:
			//update velocities (halfstep)
			//compute/update positions (fullstep)
			//COMPFOR
			//update velocities(fullstep)
								//WRITE posit & veloc

//main
		//INIT
		//GOVERLET

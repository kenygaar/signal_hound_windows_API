
#pragma once

struct MEAS_RCVR_STRUCT
{
	// *** INPUTS ***
	double	RFFrequency;	//RF frequency center
	double	AudioLPFreq;	//Audio LowPass Cutoff
	double	AudioBPFreq;	//Audio BandPass Center
	int		UseLPF;		
	int		UseBPF;	
	
	// *** OUTPUTS ***
	double	RFCounter;		//RF frequency count out
	double	AMAudioFreq;	//AF frequency count out after AM demod
	double	FMAudioFreq;	//AF frequency count out after FM demod
	double	RFAmplitude;	//dBFS

	double	FMPeakPlus;
	double	FMPeakMinus;
	double	FMRMS;

	double	AMPeakPlus;
	double	AMPeakMinus;
	double	AMRMS;

};

__declspec(dllimport) void FillMeasRcvrStruct(MEAS_RCVR_STRUCT * LPMeasRcvrStruct, int decimation, int * iBigI, int * iBigQ );




#define NUMALTLUMPS 311
char *newlumps[NUMALTLUMPS] = {
"S2_START",
"SPECA1",
"SPECB1",
"SPECC1",
"SPECD1",
"SPECE1",
"SPECF1",
"SPECG1",
"SPECH1",
"SPECA2A8",
"SPECB2B8",
"SPECC2C8",
"SPECD2D8",
"SPECE2E8",
"SPECF2F8",
"SPECG2G8",
"SPECH2H8",
"SPECA3A7",
"SPECB3B7",
"SPECC3C7",
"SPECD3D7",
"SPECE3E7",
"SPECF3F7",
"SPECG3G7",
"SPECH3H7",
"SPECA4A6",
"SPECB4B6",
"SPECC4C6",
"SPECD4D6",
"SPECE4E6",
"SPECF4F6",
"SPECG4G6",
"SPECH4H6",
"SPECA5",
"SPECB5",
"SPECC5",
"SPECD5",
"SPECE5",
"SPECF5",
"SPECG5",
"SPECH5",
"SPECI0",
"SPECJ0",
"SPECK0",
"SPECL0",
"SPECM0",
"SPECN0",
"PLY1A1",
"PLY1B1",
"PLY1C1",
"PLY1D1",
"PLY1E1",
"PLY1F1",
"PLY1G1",
"PLY1A2A8",
"PLY1B2B8",
"PLY1C2C8",
"PLY1D2D8",
"PLY1E2E8",
"PLY1F2F8",
"PLY1G2G8",
"PLY1A3A7",
"PLY1B3B7",
"PLY1C3C7",
"PLY1D3D7",
"PLY1E3E7",
"PLY1F3F7",
"PLY1G3G7",
"PLY1A4A6",
"PLY1B4B6",
"PLY1C4C6",
"PLY1D4D6",
"PLY1E4E6",
"PLY1F4F6",
"PLY1G4G6",
"PLY1A5",
"PLY1B5",
"PLY1C5",
"PLY1D5",
"PLY1E5",
"PLY1F5",
"PLY1G5",
"PLY1H0",
"PLY1I0",
"PLY1J0",
"PLY1K0",
"PLY1L0",
"PLY1M0",
"PLY1N0",
"PLY1O0",
"PLY1P0",
"PLY1Q0",
"PLY1R0",
"PLY1S0",
"PLY1T0",
"PLY1U0",
"PLY1V0",
"PLY2A1",
"PLY2B1",
"PLY2C1",
"PLY2D1",
"PLY2E1",
"PLY2F1",
"PLY2G1",
"PLY2A2A8",
"PLY2B2B8",
"PLY2C2C8",
"PLY2D2D8",
"PLY2E2E8",
"PLY2F2F8",
"PLY2G2G8",
"PLY2A3A7",
"PLY2B3B7",
"PLY2C3C7",
"PLY2D3D7",
"PLY2E3E7",
"PLY2F3F7",
"PLY2G3G7",
"PLY2A4A6",
"PLY2B4B6",
"PLY2C4C6",
"PLY2D4D6",
"PLY2E4E6",
"PLY2F4F6",
"PLY2G4G6",
"PLY2A5",
"PLY2B5",
"PLY2C5",
"PLY2D5",
"PLY2E5",
"PLY2F5",
"PLY2G5",
"PLY2H0",
"PLY2I0",
"PLY2J0",
"PLY2K0",
"PLY2L0",
"PLY2M0",
"PLY2N0",
"PLY2O0",
"PLY2P0",
"PLY2Q0",
"PLY2R0",
"PLY2S0",
"PLY2T0",
"PLY2U0",
"PLY2V0",
"NITEA1",
"NITEB1",
"NITEC1",
"NITED1",
"NITEE1",
"NITEF1",
"NITEG1",
"NITEH1",
"NITEI1",
"NITEJ1",
"NITEK1",
"NITEA2A8",
"NITEB2B8",
"NITEC2C8",
"NITED2D8",
"NITEE2E8",
"NITEF2F8",
"NITEG2G8",
"NITEH2H8",
"NITEI2I8",
"NITEJ2J8",
"NITEK2K8",
"NITEA3A7",
"NITEB3B7",
"NITEC3C7",
"NITED3D7",
"NITEE3E7",
"NITEF3F7",
"NITEG3G7",
"NITEH3H7",
"NITEI3I7",
"NITEJ3J7",
"NITEK3K7",
"NITEA4A6",
"NITEB4B6",
"NITEC4C6",
"NITED4D6",
"NITEE4E6",
"NITEF4F6",
"NITEG4G6",
"NITEH4H6",
"NITEI4I6",
"NITEJ4J6",
"NITEK4K6",
"NITEA5",
"NITEB5",
"NITEC5",
"NITED5",
"NITEE5",
"NITEF5",
"NITEG5",
"NITEH5",
"NITEI5",
"NITEJ5",
"NITEK5",
"NITEL0",
"NITEM0",
"NITEN0",
"NITEO0",
"NITEP0",
"NITEQ0",
"NITER0",
"NITES0",
"NITET0",
"NITEU0",
"NITEV0",
"NITEW0",
"NITEX0",
"BAROA1",
"BAROA5",
"BAROA4A6",
"BAROA3A7",
"BAROA2A8",
"BAROB1",
"BAROB5",
"BAROB4B6",
"BAROB3B7",
"BAROB2B8",
"BAROC1",
"BAROC5",
"BAROC4C6",
"BAROC3C7",
"BAROC2C8",
"BAROD1",
"BAROD5",
"BAROD4D6",
"BAROD3D7",
"BAROD2D8",
"BAROE1",
"BAROE5",
"BAROE4E6",
"BAROE3E7",
"BAROE2E8",
"BAROF1",
"BAROF5",
"BAROF4F6",
"BAROF3F7",
"BAROF2F8",
"BAROG1",
"BAROG5",
"BAROG4G6",
"BAROG3G7",
"BAROG2G8",
"BAROH1",
"BAROH5",
"BAROH4H6",
"BAROH3H7",
"BAROH2H8",
"BAROI0",
"BAROJ0",
"BAROK0",
"BAROL0",
"BAROM0",
"BARON0",
"ZOMBA1",
"ZOMBB1",
"ZOMBC1",
"ZOMBD1",
"ZOMBE1",
"ZOMBF1",
"ZOMBG1",
"ZOMBA2A8",
"ZOMBB2B8",
"ZOMBC2C8",
"ZOMBD2D8",
"ZOMBE2E8",
"ZOMBF2F8",
"ZOMBG2G8",
"ZOMBA3A7",
"ZOMBB3B7",
"ZOMBC3C7",
"ZOMBD3D7",
"ZOMBE3E7",
"ZOMBF3F7",
"ZOMBG3G7",
"ZOMBA4A6",
"ZOMBB4B6",
"ZOMBC4C6",
"ZOMBD4D6",
"ZOMBE4E6",
"ZOMBF4F6",
"ZOMBG4G6",
"ZOMBA5",
"ZOMBB5",
"ZOMBC5",
"ZOMBD5",
"ZOMBE5",
"ZOMBF5",
"ZOMBG5",
"ZOMBH0",
"ZOMBI0",
"ZOMBJ0",
"ZOMBK0",
"ZOMBL0",
"ZOMBM0",
"ZOMBN0",
"ZOMBO0",
"ZOMBP0",
"ZOMBQ0",
"ZOMBR0",
"ZOMBS0",
"ZOMBT0",
"ZOMBU0",
"S2_END",
};

int W_GetNumForName(char *name) {
	for(int i=0;i<NUMALTLUMPS;i++) {
		if (!strcasecmp(name,newlumps[i])) {
			return 966 + i;
		}
	}
	return -1;
}
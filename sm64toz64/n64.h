#define _SHIFTL( v, s, w )	\
    (((unsigned int)v & ((0x01 << w) - 1)) << s)
#define _SHIFTR( v, s, w )	\
    (((unsigned int)v >> s) & ((0x01 << w) - 1))

#define G_SETTIMG				0xFD

#define F3D_SPNOOP				0x00
#define F3D_MTX					0x01
#define F3D_RESERVED0			0x02
#define F3D_MOVEMEM				0x03
#define F3D_VTX					0x04
#define F3D_RESERVED1			0x05
#define F3D_DL					0x06
#define F3D_RESERVED2			0x07
#define F3D_RESERVED3			0x08
#define F3D_SPRITE2D_BASE		0x09
#define F3D_TRI1				0xBF
#define F3D_CULLDL				0xBE
#define F3D_POPMTX				0xBD
#define F3D_MOVEWORD			0xBC
#define F3D_TEXTURE				0xBB
#define F3D_SETOTHERMODE_H		0xBA
#define F3D_SETOTHERMODE_L		0xB9
#define F3D_ENDDL				0xB8
#define F3D_SETGEOMETRYMODE		0xB7
#define F3D_CLEARGEOMETRYMODE	0xB6
#define F3D_QUAD				0xB5
#define F3D_RDPHALF_1			0xB4
#define F3D_RDPHALF_2			0xB3
#define F3D_RDPHALF_CONT		0xB2
#define F3D_TRI4				0xB1

#define F3DEX2_VTX				0x01
#define F3DEX2_MODIFYVTX		0x02
#define F3DEX2_CULLDL			0x03
#define F3DEX2_BRANCH_Z			0x04
#define F3DEX2_TRI1				0x05
#define F3DEX2_TRI2				0x06
#define F3DEX2_QUAD				0x07
#define F3DEX2_RDPHALF_2		0xF1
#define F3DEX2_SETOTHERMODE_H	0xE3
#define F3DEX2_SETOTHERMODE_L	0xE2
#define F3DEX2_RDPHALF_1		0xE1
#define F3DEX2_SPNOOP			0xE0
#define F3DEX2_ENDDL			0xDF
#define F3DEX2_DL				0xDE
#define F3DEX2_LOAD_UCODE		0xDD
#define F3DEX2_MOVEMEM			0xDC
#define F3DEX2_MOVEWORD			0xDB
#define F3DEX2_MTX				0xDA
#define F3DEX2_GEOMETRYMODE		0xD9
#define F3DEX2_POPMTX			0xD8
#define F3DEX2_TEXTURE			0xD7
#define F3DEX2_DMA_IO			0xD6
#define F3DEX2_SPECIAL_1		0xD5
#define F3DEX2_SPECIAL_2		0xD4
#define F3DEX2_SPECIAL_3		0xD3

#define F3D_TEXTURE_ENABLE		0x00000002
#define F3D_SHADING_SMOOTH		0x00000200
#define F3D_CULL_FRONT			0x00001000
#define F3D_CULL_BACK			0x00002000
#define F3D_CULL_BOTH			0x00003000
#define F3D_CLIPPING			0x00000000

#define F3DEX2_TEXTURE_ENABLE		0x00000000
#define F3DEX2_SHADING_SMOOTH		0x00200000
#define F3DEX2_CULL_FRONT			0x00000200
#define F3DEX2_CULL_BACK			0x00000400
#define F3DEX2_CULL_BOTH			0x00000600
#define F3DEX2_CLIPPING				0x00800000

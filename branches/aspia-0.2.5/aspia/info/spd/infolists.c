/*
 * PROJECT:         Aspia
 * FILE:            aspia/info/spd/infolists.c
 * LICENSE:         LGPL (GNU Lesser General Public License)
 * PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
 */

#include "../spd.h"

SPD_INFO ManufacturerInfo[] =
{
    { 0x01, L"AMD" },
    { 0x02, L"AMI" },
    { 0x04, L"Fujitsu" },
    { 0x07, L"Hitachi" },
    { 0x08, L"Inmos" },
    { 0x0B, L"Intersil" },
    { 0x0D, L"Mostek" },
    { 0x0E, L"Motorola" },
    { 0x10, L"NEC" },
    { 0x13, L"Conexant (Rockwell)" },
    { 0x15, L"Philips Semi. (Signetics)" },
    { 0x16, L"Synertek" },
    { 0x19, L"Xicor" },
    { 0x1A, L"Zilog" },
    { 0x1C, L"Mitsubishi" },
    { 0x1F, L"Atmel" },
    { 0x20, L"SGS/Thomson" },
    { 0x23, L"Wafer Scale Integration" },
    { 0x25, L"Tristar" },
    { 0x26, L"Visic" },
    { 0x29, L"MicrochipTechnology" },
    { 0x2A, L"Ricoh Ltd." },
    { 0x2C, L"Micron Technology" },
    { 0x2F, L"ACTEL" },
    { 0x31, L"Catalyst" },
    { 0x32, L"Panasonic" },
    { 0x34, L"Cypress" },
    { 0x37, L"Zarlink (formerly Plessey)" },
    { 0x38, L"UTMC" },
    { 0x3B, L"Integrated CMOS (Vertex)" },
    { 0x3D, L"Tektronix" },
    { 0x3E, L"Sun Microsystems" },
    { 0x40, L"MOSEL" },
    { 0x43, L"Xerox" },
    { 0x45, L"SunDisk" },
    { 0x46, L"Elan Circuit Tech." },
    { 0x49, L"Xilinx" },
    { 0x4A, L"Compaq" },
    { 0x4C, L"SCI" },
    { 0x4F, L"I3 Design System" },
    { 0x51, L"Crosspoint Solutions" },
    { 0x52, L"Alliance Semiconductor" },
    { 0x54, L"Hewlett-Packard" },
    { 0x57, L"New Media" },
    { 0x58, L"MHS Electronic" },
    { 0x5B, L"Kawasaki Steel" },
    { 0x5D, L"TECMAR" },
    { 0x5E, L"Exar" },
    { 0x61, L"Northern Telecom" },
    { 0x62, L"Sanyo" },
    { 0x64, L"Crystal Semiconductor" },
    { 0x67, L"Asparix" },
    { 0x68, L"Convex Computer" },
    { 0x6B, L"Transwitch" },
    { 0x6D, L"Cannon" },
    { 0x6E, L"Altera" },
    { 0x70, L"QUALCOMM" },
    { 0x73, L"AMS (Austria Micro)" },
    { 0x75, L"Aster Electronics" },
    { 0x76, L"Bay Networks (Synoptic)" },
    { 0x79, L"Thesys" },
    { 0x7A, L"Solbourne Computer" },
    { 0x7C, L"Dialog" },
    { 0x83, L"Fairchild" },
    { 0x85, L"GTE" },
    { 0x86, L"Harris" },
    { 0x89, L"Intel" },
    { 0x8A, L"I.T.T." },
    { 0x8C, L"Monolithic Memories" },
    { 0x8F, L"National" },
    { 0x91, L"RCA" },
    { 0x92, L"Raytheon" },
    { 0x94, L"Seeq" },
    { 0x97, L"Texas Instruments" },
    { 0x98, L"Toshiba" },
    { 0x9B, L"Eurotechnique" },
    { 0x9D, L"Lucent (AT&T)" },
    { 0x9E, L"Exel" },
    { 0xA1, L"Lattice Semiconductor" },
    { 0xA2, L"NCR" },
    { 0xA4, L"IBM" },
    { 0xA7, L"International CMOS Tech" },
    { 0xA8, L"SSSI" },
    { 0xAB, L"VLSI" },
    { 0xAD, L"Hyundai Electronics" },
    { 0xAE, L"OKI Semiconductor" },
    { 0xB0, L"Sharp" },
    { 0xB3, L"IDT" },
    { 0xB5, L"DEC" },
    { 0xB6, L"LSI Logic" },
    { 0xB9, L"Thinking Machine" },
    { 0xBA, L"Thomson CSF" },
    { 0xBC, L"Honeywell" },
    { 0xBF, L"SST" },
    { 0xC1, L"Infineon (formerly Siemens)" },
    { 0xC2, L"Macronix" },
    { 0xC4, L"Plus Logic" },
    { 0xC7, L"European Silicon Str." },
    { 0xC8, L"Apple Computer" },
    { 0xCB, L"Protocol Engines" },
    { 0xCD, L"Seiko Instruments" },
    { 0xCE, L"Samsung" },
    { 0xD0, L"Klic" },
    { 0xD3, L"Tandem" },
    { 0xD5, L"Integrated Silicon Solutions" },
    { 0xD6, L"Brooktree" },
    { 0xD9, L"Performance Semi." },
    { 0xDA, L"Winbond Electronic" },
    { 0xDC, L"Bright Micro" },
    { 0xDF, L"PCMCIA" },
    { 0xE0, L"LG Semiconductor" },
    { 0xE3, L"Array Microsystems" },
    { 0xE5, L"Analog Devices" },
    { 0xE6, L"PMC-Sierra" },
    { 0xE9, L"Quality Semiconductor" },
    { 0xEA, L"Nimbus Technology" },
    { 0xEC, L"Micronas (ITT Intermetall)" },
    { 0xEF, L"NEXCOM" },
    { 0xF1, L"Sony" },
    { 0xF2, L"Cray Research" },
    { 0xF4, L"Vitesse" },
    { 0xF7, L"Zentrum Mikroelektronic" },
    { 0xF8, L"TRW" },
    { 0xFB, L"Allied-Signal" },
    { 0xFD, L"Media Vision" },
    { 0xFE, L"Level One Communication" },
    { 0x7F01, L"Cirrus Logic" },
    { 0x7F02, L"National Instruments" },
    { 0x7F04, L"Alcatel Mietec" },
    { 0x7F07, L"JTAG Technologies" },
    { 0x7F08, L"Loral" },
    { 0x7F0B, L"Bestlink Systems" },
    { 0x7F0D, L"GENNUM" },
    { 0x7F0E, L"VideoLogic" },
    { 0x7F10, L"Chip Express" },
    { 0x7F13, L"TCSI" },
    { 0x7F15, L"Hughes Aircraft" },
    { 0x7F16, L"Lanstar Semiconductor" },
    { 0x7F19, L"Music Semi" },
    { 0x7F1A, L"Ericsson Components" },
    { 0x7F1C, L"Eon Silicon Devices" },
    { 0x7F1F, L"Integ. Memories Tech." },
    { 0x7F20, L"Corollary Inc." },
    { 0x7F23, L"EIV (Switzerland)" },
    { 0x7F25, L"Zarlink (formerly Mitel)" },
    { 0x7F26, L"Clearpoint" },
    { 0x7F29, L"Vanguard" },
    { 0x7F2A, L"Hagiwara Sys-Com" },
    { 0x7F2C, L"Celestica" },
    { 0x7F2F, L"Rohm Company Ltd." },
    { 0x7F31, L"Libit Signal Processing" },
    { 0x7F32, L"Enhanced Memories Inc." },
    { 0x7F34, L"Adaptec Inc." },
    { 0x7F37, L"AMIC Technology" },
    { 0x7F38, L"Adobe Systems" },
    { 0x7F3B, L"Newport Digital" },
    { 0x7F3D, L"T Square" },
    { 0x7F3E, L"Seiko Epson" },
    { 0x7F40, L"Viking Components" },
    { 0x7F43, L"Suwa Electronics" },
    { 0x7F45, L"Micron CMS" },
    { 0x7F46, L"American Computer & Digital Components Inc." },
    { 0x7F49, L"CPU Design" },
    { 0x7F4A, L"Price Point" },
    { 0x7F4C, L"Tellabs" },
    { 0x7F4F, L"Transcend Information" },
    { 0x7F51, L"CKD Corporation Ltd." },
    { 0x7F52, L"Capital Instruments, Inc." },
    { 0x7F54, L"Linvex Technology" },
    { 0x7F57, L"Dynamem, Inc." },
    { 0x7F58, L"NERA ASA" },
    { 0x7F5B, L"Acorn Computers" },
    { 0x7F5D, L"Oak Technology, Inc." },
    { 0x7F5E, L"Itec Memory" },
    { 0x7F61, L"Wintec Industries" },
    { 0x7F62, L"Super PC Memory" },
    { 0x7F64, L"Galvantech" },
    { 0x7F67, L"GateField" },
    { 0x7F68, L"Integrated Memory System" },
    { 0x7F6B, L"Goldenram" },
    { 0x7F6D, L"Cimaron Communications" },
    { 0x7F6E, L"Nippon Steel Semi. Corp." },
    { 0x7F70, L"AMCC" },
    { 0x7F73, L"Digital Microwave" },
    { 0x7F75, L"MIMOS Semiconductor" },
    { 0x7F76, L"Advanced Fibre" },
    { 0x7F79, L"Acbel Polytech Inc." },
    { 0x7F7A, L"Apacer Technology" },
    { 0x7F7C, L"FOXCONN" },
    { 0x7F83, L"ILC Data Device" },
    { 0x7F85, L"Micro Linear" },
    { 0x7F86, L"Univ. Of NC" },
    { 0x7F89, L"Nchip" },
    { 0x7F8A, L"Galileo Tech" },
    { 0x7F8C, L"Graychip" },
    { 0x7F8F, L"Robert Bosch" },
    { 0x7F91, L"DATARAM" },
    { 0x7F92, L"United Microelec Corp." },
    { 0x7F94, L"Smart Modular" },
    { 0x7F97, L"Qlogic" },
    { 0x7F98, L"Kingston" },
    { 0x7F9B, L"SpaSE" },
    { 0x7F9D, L"Programmable Micro Corp." },
    { 0x7F9E, L"DoD" },
    { 0x7FA1, L"Dallas Semiconductor" },
    { 0x7FA2, L"Omnivision" },
    { 0x7FA4, L"Novatel Wireless" },
    { 0x7FA7, L"Cabletron" },
    { 0x7FA8, L"Silicon Technology" },
    { 0x7FAB, L"Vantis" },
    { 0x7FAD, L"Century" },
    { 0x7FAE, L"Hal Computers" },
    { 0x7FB0, L"Juniper Networks" },
    { 0x7FB3, L"Tundra Semiconductor" },
    { 0x7FB5, L"LightSpeed Semi." },
    { 0x7FB6, L"ZSP Corp." },
    { 0x7FB9, L"Dynachip" },
    { 0x7FBA, L"PNY Electronics" },
    { 0x7FBC, L"MMC Networks" },
    { 0x7FBF, L"Broadcom" },
    { 0x7FC1, L"V3 Semiconductor" },
    { 0x7FC2, L"Flextronics (formerly Orbit)" },
    { 0x7FC4, L"Transmeta" },
    { 0x7FC7, L"Enhance 3000 Inc." },
    { 0x7FC8, L"Tower Semiconductor" },
    { 0x7FCB, L"Maxim Integrated Product" },
    { 0x7FCD, L"Centaur Technology" },
    { 0x7FCE, L"Unigen Corporation" },
    { 0x7FD0, L"Memory Card Technology" },
    { 0x7FD3, L"Aica Kogyo, Ltd." },
    { 0x7FD5, L"CellShocks" },
    { 0x7FD6, L"AKM Company, Ltd." },
    { 0x7FD9, L"GSI Technology" },
    { 0x7FDA, L"Dane-Elec (C Memory)" },
    { 0x7FDC, L"Lara Technology" },
    { 0x7FDF, L"Tanisys Technology" },
    { 0x7FE0, L"Truevision" },
    { 0x7FE3, L"MGV Memory" },
    { 0x7FE5, L"Gadzoox Networks" },
    { 0x7FE6, L"Multi Dimensional Cons." },
    { 0x7FE9, L"Triscend" },
    { 0x7FEA, L"XaQti" },
    { 0x7FEC, L"Clear Logic" },
    { 0x7FEF, L"Advantage Memory" },
    { 0x7FF1, L"LeCroy" },
    { 0x7FF2, L"Yamaha Corporation" },
    { 0x7FF4, L"NetLogic Microsystems" },
    { 0x7FF7, L"BF Goodrich Data." },
    { 0x7FF8, L"Epigram" },
    { 0x7FFB, L"Admor Memory" },
    { 0x7FFD, L"Quadratics Superconductor" },
    { 0x7FFE, L"3COM" },
    { 0x7F7F01, L"Camintonn Corporation" },
    { 0x7F7F02, L"ISOA Incorporated" },
    { 0x7F7F04, L"ADMtek Incorporated" },
    { 0x7F7F07, L"MOSAID Technologies" },
    { 0x7F7F08, L"Ardent Technologies" },
    { 0x7F7F0B, L"Allayer Technologies" },
    { 0x7F7F0D, L"Oasis Semiconductor" },
    { 0x7F7F0E, L"Novanet Semiconductor" },
    { 0x7F7F10, L"Power General" },
    { 0x7F7F13, L"Telocity" },
    { 0x7F7F15, L"Symagery Microsystems" },
    { 0x7F7F16, L"C-Port Corporation" },
    { 0x7F7F19, L"Malleable Technologies" },
    { 0x7F7F1A, L"Kendin Communications" },
    { 0x7F7F1C, L"Sanmina Corporation" },
    { 0x7F7F1F, L"Actrans System Inc." },
    { 0x7F7F20, L"ALPHA Technologies" },
    { 0x7F7F23, L"Align Manufacturing" },
    { 0x7F7F25, L"Chameleon Systems" },
    { 0x7F7F26, L"Aplus Flash Technology" },
    { 0x7F7F29, L"ADTEC Corporation" },
    { 0x7F7F2A, L"Kentron Technologies" },
    { 0x7F7F2C, L"ASIC Designs Inc." },
    { 0x7F7F2F, L"Siemens AG" },
    { 0x7F7F31, L"Itautec Philco SA" },
    { 0x7F7F32, L"Radiata Inc." },
    { 0x7F7F34, L"Legend" },
    { 0x7F7F37, L"Enikia Incorporated" },
    { 0x7F7F38, L"SwitchOn Networks" },
    { 0x7F7F3B, L"ESS Technology" },
    { 0x7F7F3D, L"Excess Bandwidth" },
    { 0x7F7F3E, L"West Bay Semiconductor" },
    { 0x7F7F40, L"Newport Communications" },
    { 0x7F7F43, L"Intellitech Corporation" },
    { 0x7F7F45, L"Ishoni Networks" },
    { 0x7F7F46, L"Silicon Spice" },
    { 0x7F7F49, L"Centillium Communications" },
    { 0x7F7F4A, L"W.L. Gore" },
    { 0x7F7F4C, L"GlobeSpan" },
    { 0x7F7F4F, L"Saifun Semiconductors" },
    { 0x7F7F51, L"MetaLink Technologies" },
    { 0x7F7F52, L"Feiya Technology" },
    { 0x7F7F54, L"Shikatronics" },
    { 0x7F7F57, L"Com-Tier" },
    { 0x7F7F58, L"Malaysia Micro Solutions" },
    { 0x7F7F5B, L"Anadyne Microelectronics" },
    { 0x7F7F5D, L"Mellanox Technologies" },
    { 0x7F7F5E, L"Tenx Technologies" },
    { 0x7F7F61, L"Skyup Technology" },
    { 0x7F7F62, L"HiNT Corporation" },
    { 0x7F7F64, L"MCI Computer GMBH" },
    { 0x7F7F67, L"AVED Memory" },
    { 0x7F7F68, L"Legerity" },
    { 0x7F7F6B, L"nCUBE" },
    { 0x7F7F6D, L"FDK Corporation" },
    { 0x7F7F6E, L"High Bandwidth Access" },
    { 0x7F7F70, L"BRECIS" },
    { 0x7F7F73, L"Chicory Systems" },
    { 0x7F7F75, L"Fast-Chip" },
    { 0x7F7F76, L"Zucotto Wireless" },
    { 0x7F7F79, L"eSilicon" },
    { 0x7F7F7A, L"Morphics Technology" },
    { 0x7F7F7C, L"Silicon Wave" },
    { 0x7F7F83, L"Agate Semiconductor" },
    { 0x7F7F85, L"HYPERTEC" },
    { 0x7F7F86, L"Adhoc Technologies" },
    { 0x7F7F89, L"Switchcore" },
    { 0x7F7F8A, L"Cisco Systems, Inc." },
    { 0x7F7F8C, L"Wichmann WorkX AG" },
    { 0x7F7F8F, L"E-M Solutions" },
    { 0x7F7F91, L"Advanced Hardware Arch." },
    { 0x7F7F92, L"Inova Semiconductors GmbH" },
    { 0x7F7F94, L"Delkin Devices" },
    { 0x7F7F97, L"SiberCore Technologies" },
    { 0x7F7F98, L"Southland Microsystems" },
    { 0x7F7F9B, L"Great Technology Microcomputer" },
    { 0x7F7F9D, L"HADCO Corporation" },
    { 0x7F7F9E, L"Corsair" },
    { 0x7F7FA1, L"Cygnal Integrated Products Incorporated" },
    { 0x7F7FA2, L"Artesyn Technologies" },
    { 0x7F7FA4, L"Peregrine Semiconductor" },
    { 0x7F7FA7, L"MIPS Technologies" },
    { 0x7F7FA8, L"Chrysalis ITS" },
    { 0x7F7FAB, L"Win Technologies" },
    { 0x7F7FAD, L"Extreme Packet Devices" },
    { 0x7F7FAE, L"RF Micro Devices" },
    { 0x7F7FB0, L"Sarnoff Corporation" },
    { 0x7F7FB3, L"Benchmark Elect. (AVEX)" },
    { 0x7F7FB5, L"SpecTek Incorporated" },
    { 0x7F7FB6, L"Hi/fn" },
    { 0x7F7FB9, L"AANetcom Incorporated" },
    { 0x7F7FBA, L"Micro Memory Bank" },
    { 0x7F7FBC, L"Virata Corporation" },
    { 0x7F7FBF, L"DSP Group" },
    { 0x7F7FC1, L"Chip2Chip Incorporated" },
    { 0x7F7FC2, L"Phobos Corporation" },
    { 0x7F7FC4, L"Nordic VLSI ASA" },
    { 0x7F7FC7, L"Alchemy Semiconductor" },
    { 0x7F7FC8, L"Agilent Technologies" },
    { 0x7F7FCB, L"HanBit Electronics" },
    { 0x7F7FCD, L"Element 14" },
    { 0x7F7FCE, L"Pycon" },
    { 0x7F7FD0, L"Sibyte, Incorporated" },
    { 0x7F7FD3, L"I&C Technology" },
    { 0x7F7FD5, L"Elektrobit" },
    { 0x7F7FD6, L"Megic" },
    { 0x7F7FD9, L"Hyperchip" },
    { 0x7F7FDA, L"Gemstone Communications" },
    { 0x7F7FDC, L"3ParData" },
    { 0x7F7FDF, L"Helix AG" },
    { 0x7F7FE0, L"Domosys" },
    { 0x7F7FE3, L"Chiaro" },
    { 0x7F7FE5, L"Exbit Technology A/S" },
    { 0x7F7FE6, L"Integrated Technology Express" },
    { 0x7F7FE9, L"Jasmine Networks" },
    { 0x7F7FEA, L"Caspian Networks" },
    { 0x7F7FEC, L"Silicon Access Networks" },
    { 0x7F7FEF, L"MultiLink Technology" },
    { 0x7F7FF1, L"World Wide Packets" },
    { 0x7F7FF2, L"APW" },
    { 0x7F7FF4, L"Xstream Logic" },
    { 0x7F7FF7, L"Realchip" },
    { 0x7F7FF8, L"Galaxy Power" },
    { 0x7F7FFB, L"Accelerant Networks" },
    { 0x7F7FFD, L"SandCraft" },
    { 0x7F7FFE, L"Elpida" },
    { 0x7F7F7F01, L"Solectron" },
    { 0x7F7F7F02, L"Optosys Technologies" },
    { 0x7F7F7F04, L"TriMedia Technologies" },
    { 0x7F7F7F07, L"Optillion" },
    { 0x7F7F7F08, L"Terago Communications" },
    { 0x7F7F7F0B, L"Nanya Technology" },
    { 0x7F7F7F0D, L"Mysticom" },
    { 0x7F7F7F0E, L"LightSand Communications" },
    { 0x7F7F7F10, L"Agere Systems" },
    { 0x7F7F7F13, L"Geil (Golden Empire)" },
    { 0x7F7F7F15, L"Tioga Technologies" },
    { 0x7F7F7F16, L"Netlist" },
    { 0x7F7F7F19, L"Centon Electronics" },
    { 0x7F7F7F1A, L"Tyco Electronics" },
    { 0x7F7F7F1C, L"Zettacom" },
    { 0x7F7F7F1F, L"Aspex Technology" },
    { 0x7F7F7F20, L"F5 Networks" },
    { 0x7F7F7F23, L"Acorn Networks" },
    { 0x7F7F7F25, L"Kingmax Semiconductor" },
    { 0x7F7F7F26, L"BOPS" },
    { 0x7F7F7F29, L"eMemory Technology" },
    { 0x7F7F7F2A, L"Procket Networks" },
    { 0x7F7F7F2C, L"Trebia Networks" },
    { 0x7F7F7F2F, L"Ample Communications" },
    { 0x7F7F7F31, L"Astute Networks" },
    { 0x7F7F7F22, L"Azanda Network Devices" },
    { 0x7F7F7F34, L"Tekmos" },
    { 0x7F7F7F37, L"Firecron Ltd." },
    { 0x7F7F7F38, L"Resonext Communications" },
    { 0x7F7F7F3B, L"Concept Computer" },
    { 0x7F7F7F3D, L"3Dlabs" },
    { 0x7F7F7F3E, L"c?t Magazine" },
    { 0x7F7F7F40, L"Silicon Packets" },
    { 0x7F7F7F43, L"Semicon Devices Singapore" },
    { 0x7F7F7F45, L"Improv Systems" },
    { 0x7F7F7F46, L"INDUSYS GmbH" },
    { 0x7F7F7F83, L"Buffalo (Melco)" },
    { 0x7F7F7F85, L"Cyan Technologies" },
    { 0x7F7F7F86, L"Global Locate" },
    { 0x7F7F7F89, L"Ikanos Communications" },
    { 0x7F7F7F8A, L"Princeton Technology" },
    { 0x7F7F7F8C, L"Elite Flash Storage" },
    { 0x7F7F7F8F, L"ATI Technologies" },
    { 0x7F7F7F91, L"NeoMagic" },
    { 0x7F7F7F92, L"AuroraNetics" },
    { 0x7F7F7F94, L"Mushkin" },
    { 0x7F7F7F97, L"TeraLogic" },
    { 0x7F7F7F98, L"Cicada Semiconductor" },
    { 0x7F7F7F9B, L"Magis Works" },
    { 0x7F7F7F9D, L"Cogency Semiconductor" },
    { 0x7F7F7F9E, L"Chipcon AS" },
    { 0x7F7F7FA1, L"Programmable Silicon Solutions" },
    { 0x7F7F7FA2, L"ChipWrights" },
    { 0x7F7F7FA4, L"Quicklogic" },
    { 0x7F7F7FA7, L"Flasys" },
    { 0x7F7F7FA8, L"BitBlitz Communications" },
    { 0x7F7F7FAB, L"Purple Ray" },
    { 0x7F7F7FAD, L"Delta Electronics" },
    { 0x7F7F7FAE, L"Onex Communications" },
    { 0x7F7F7FB0, L"Memory Experts Intl" },
    { 0x7F7F7FB3, L"Dibcom" },
    { 0x7F7F7FB5, L"API NetWorks" },
    { 0x7F7F7FB6, L"Bay Microsystems" },
    { 0x7F7F7FB9, L"Tachys Technologies" },
    { 0x7F7F7FBA, L"Equator Technology" },
    { 0x7F7F7FBC, L"SILCOM" },
    { 0x7F7F7FBF, L"Sanera Systems" },
    { 0x7F7F7FC1, L"Viasystems Group" },
    { 0x7F7F7FC2, L"Simtek" },
    { 0x7F7F7FC4, L"Satron Handelsges" },
    { 0x7F7F7FC8, L"Corrent" },
    { 0x7F7F7FC8, L"Infrant Technologies" },
    { 0x7F7F7F58, L"takeMS" },
    { 0x7F7FCD, L"GSkill" },
    { 0x7F7FEF, L"Team Group" },
    { 0x7F7FB0, L"OCZ" },
    { 0x7F7FCB, L"AData Technology Inc." },
    { 0x7F7F7F02, L"Patriot" },
    { 0x7F7F7F51, L"Qimonda AG" },
    { 0x7F7F7F9B, L"Crucial Technology" },
    { 0x7F7F7FF8, L"ASRock Incorporation" },
    { 0, NULL }
};

SPD_INFO RamTypeInfo[] =
{
    { 0x00, L"Reserved" },
    { 0x01, L"Standard FPM DRAM" },
    { 0x02, L"EDO" },
    { 0x03, L"Pipelined Nibble" },
    { 0x04, L"SDRAM" },
    { 0x05, L"ROM" },
    { 0x06, L"DDR SGRAM" },
    { 0x07, L"DDR SDRAM" },
    { 0x08, L"DDR2 SDRAM" },
    { 0x09, L"DDR2 SDRAM FB-DIMM" },
    { 0x10, L"DDR2 SDRAM FB-DIMM PROBE" },
    { 0x11, L"DDR3 SDRAM" },
    { 0, NULL }
};

/* JEDEC Standard No. 21-C, Page 4.1.2.10 - 10 */
SPD_INFO VoltageInfo[] =
{
    { 0x00, L"5 Volt/TTL" },
    { 0x01, L"LVTTL (not 5 V tolerant)" },
    { 0x02, L"HSTL 1.5 V" },
    { 0x03, L"SSTL 3.3 V" },
    { 0x04, L"SSTL 2.5 V" },
    { 0x05, L"SSTL 1.8 V" },
    { 0x06, L"TBD" },
    { 0, NULL }
};

SPD_INFO RefreshRateInfo[] =
{
    { 0x00, L"Normal (15.625 us)" },
    { 0x01, L"Reduced (25x) 3.9 us" },
    { 0x02, L"Reduced (0.5x) 7.8 us" },
    { 0x03, L"Extended (2x) 32.3 us" },
    { 0x04, L"Extended (4x) 62.5 us" },
    { 0x05, L"Extended (8x) 125 us" },
    { 0, NULL }
};

SPD_INFO ErrorDetectInfo[] =
{
    { 0x00, L"None" },
    { 0x01, L"Parity" },
    { 0x02, L"ECC" },
    { 0, NULL }
};

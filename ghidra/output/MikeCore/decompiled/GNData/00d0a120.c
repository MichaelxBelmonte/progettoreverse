// Function: FUN_00d0a120
// Address: 00d0a120
// Size: 1545 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x00d0a475) */
/* WARNING: Removing unreachable block (ram,0x00d0a39b) */
/* WARNING: Removing unreachable block (ram,0x00d0a3a4) */
/* WARNING: Removing unreachable block (ram,0x00d0a2eb) */
/* WARNING: Removing unreachable block (ram,0x00d0a2f4) */
/* WARNING: Removing unreachable block (ram,0x00d0a206) */
/* WARNING: Removing unreachable block (ram,0x00d0a212) */
/* WARNING: Removing unreachable block (ram,0x00d0a284) */
/* WARNING: Removing unreachable block (ram,0x00d0a291) */
/* WARNING: Removing unreachable block (ram,0x00d0a18e) */
/* WARNING: Removing unreachable block (ram,0x00d0a197) */
/* WARNING: Removing unreachable block (ram,0x00d0a1bb) */
/* WARNING: Removing unreachable block (ram,0x00d0a1c4) */
/* WARNING: Removing unreachable block (ram,0x00d0a1f9) */
/* WARNING: Removing unreachable block (ram,0x00d0a43f) */
/* WARNING: Removing unreachable block (ram,0x00d0a448) */
/* WARNING: Removing unreachable block (ram,0x00d0a4c1) */
/* WARNING: Removing unreachable block (ram,0x00d0a4c6) */
/* WARNING: Removing unreachable block (ram,0x00d0a163) */
/* WARNING: Removing unreachable block (ram,0x00d0a16c) */
/* WARNING: Removing unreachable block (ram,0x00d0a3d0) */
/* WARNING: Removing unreachable block (ram,0x00d0a3d9) */
/* WARNING: Removing unreachable block (ram,0x00d0a33a) */
/* WARNING: Removing unreachable block (ram,0x00d0a42c) */
/* WARNING: Removing unreachable block (ram,0x00d0a431) */

void FUN_00d0a120(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  
  FUN_00d4efa0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  cVar4 = FUN_00d23d70();
  if (cVar4 == '\0') {
    FUN_00d21140();
  }
  FUN_00d0a070();
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  FUN_00d0b040();
  lVar3 = DAT_0277c878;
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
    lVar3 = DAT_0277c878;
  }
  DAT_0277c878 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  FUN_00c7e7b0();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027f37d8;
  if (DAT_027f37d8 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  unaff_RDI[10] = *unaff_RSI;
  cVar4 = (**(code **)(*unaff_RDI + 0x3a0))();
  if (cVar4 != '\0') {
    if (unaff_RDI[0xf] != 0) {
      FUN_00d4efa0();
      FUN_00d4efa0();
      if (lVar3 == local_68) goto LAB_00d0a4d5;
    }
    FUN_00c811e0();
    lVar1 = unaff_RDI[0xf];
    if (lVar1 != lVar3) {
      if (lVar3 == 0) {
        unaff_RDI[0xf] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = unaff_RDI[0xf];
        unaff_RDI[0xf] = lVar3;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x18))();
  }
LAB_00d0a4d5:
  plVar2 = (longlong *)unaff_RDI[0xb];
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    local_138 = *unaff_RSI;
    local_130 = '\0';
    local_128 = local_48;
    local_120 = '\0';
    cVar4 = (**(code **)(*plVar2 + 0x18))(&local_128,&local_138);
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_00d0a640;
  }
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x1e8))();
  plVar2 = (longlong *)*unaff_RSI;
  if (cVar4 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x120))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x250))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00d0a640:
  plVar2 = (longlong *)unaff_RDI[0xb];
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    local_f8 = *unaff_RSI;
    local_f0 = '\0';
    local_e8 = local_48;
    local_e0 = '\0';
    (**(code **)(*plVar2 + 0x20))(&local_e8,&local_f8);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



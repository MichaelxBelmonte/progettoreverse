// Function: FUN_00e45630
// Address: 00e45630
// Size: 737 bytes
// Class: GNBKVA
// String references:
//   "GNBKVA"


/* WARNING: Removing unreachable block (ram,0x00e4572c) */
/* WARNING: Removing unreachable block (ram,0x00e45735) */
/* WARNING: Removing unreachable block (ram,0x00e457e4) */
/* WARNING: Removing unreachable block (ram,0x00e457ed) */
/* WARNING: Removing unreachable block (ram,0x00e4589d) */
/* WARNING: Removing unreachable block (ram,0x00e458aa) */
/* WARNING: Removing unreachable block (ram,0x00e458cf) */
/* WARNING: Removing unreachable block (ram,0x00e458dc) */

ulonglong FUN_00e45630(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong *local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  FUN_00daa970();
  FUN_00daa990();
  uVar1 = *param_2;
  FUN_00dab200(0,6);
  FUN_00daa9d0();
  FUN_00daaf60();
  FUN_00daa9b0();
  FUN_00daaf60();
  FUN_00daab70();
  FUN_00daab70();
  if ((int)unaff_RDI[5] == 0) {
    FUN_00e45a50();
    uVar4 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00daa540();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00daa980();
    FUN_00daa970();
    FUN_00daa9b0();
    FUN_00daa990();
    FUN_00daa9d0();
    FUN_00daa9c0();
    FUN_00e45a50();
    (**(code **)(*unaff_RDI + 0x608))();
    (**(code **)(*local_70 + 0x368))();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_00dab390();
      uVar4 = (ulonglong)uVar2;
      if ((char)uVar2 != '\0') {
        FUN_00daab50();
      }
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return uVar4 & 0xffffffff;
}



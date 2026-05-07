// Function: FUN_00445ea0
// Address: 00445ea0
// Size: 538 bytes
// Class: MDToolbarVolumeCtrl


/* WARNING: Removing unreachable block (ram,0x00445f98) */
/* WARNING: Removing unreachable block (ram,0x00445fa1) */
/* WARNING: Removing unreachable block (ram,0x00445f48) */
/* WARNING: Removing unreachable block (ram,0x00445f51) */

double FUN_00445ea0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong unaff_RDI;
  float fVar3;
  double dVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  longlong local_78;
  char local_70;
  double local_38;
  longlong *local_30;
  char local_28;
  double local_20;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (undefined4)param_2;
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x5d8))();
  FUN_0062abf0();
  local_20 = (double)FUN_0053a8b0();
  local_38 = (double)CONCAT44(uVar7,uVar5);
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_004f1160(local_20,uVar5);
  if (cVar1 == '\0') {
    local_20 = (double)FUN_00e7b500(DAT_023908c8,0);
  }
  else {
    FUN_00226f20();
    if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    iVar2 = FUN_00228b30();
    if (iVar2 == 1) {
      if (local_30 == (longlong *)0x0) {
        dVar4 = (double)FUN_00e7b500(DAT_023908c8,0);
        return dVar4;
      }
      local_20 = (double)FUN_004f10a0(local_20);
      local_38 = (double)CONCAT44(uVar7,uVar5);
    }
    fVar6 = SUB84(local_38,0);
    cVar1 = FUN_004f1160(local_20);
    if (cVar1 == '\0') {
      local_20 = (double)FUN_00e7b500(DAT_023908c8);
    }
    else {
      FUN_01e436c0();
      (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x640))();
      fVar3 = (float)(**(code **)(*local_30 + 0x580))();
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_20 = local_20 +
                 ((double)fVar6 / ((double)(fVar6 - (fVar3 + fVar3)) / local_38) - local_38) *
                 DAT_02394dd0;
    }
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return local_20;
}



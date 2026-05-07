// Function: FUN_01e0dc40
// Address: 01e0dc40
// Size: 645 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01e0de1c) */
/* WARNING: Removing unreachable block (ram,0x01e0de29) */

void FUN_01e0dc40(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  float fVar4;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  FUN_01e47f00();
  if (((longlong *)unaff_RDI[0x27] != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x9a0))(), cVar2 != '\0')) {
    DAT_028b90d0 = 0;
    cVar2 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0xac8))();
    if (cVar2 != '\0') {
      FUN_01e057f0();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x960))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d8dab0();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_028b90a0;
    if (DAT_028b90a0 != local_30) {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
      DAT_028b90a0 = local_30;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != 0) && (DAT_028b90a8 == '\0')) {
      DAT_028b90a8 = '\x01';
      FUN_00e8cb90();
    }
    FUN_01e3f820();
    bVar1 = (float)((ulonglong)param_1 >> 0x20) < fVar4 * DAT_0239011c;
    *(uint *)(unaff_RDI + 0x28) = (bVar1 - 1) + (uint)bVar1;
    (**(code **)(*unaff_RDI + 0x620))();
    FUN_01e1eb80((int)DAT_023942d0);
    lVar3 = DAT_028b90c0;
    if (DAT_028b90c0 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_00d50b00();
          lVar3 = local_30;
        }
      }
      else {
        local_28 = '\0';
        lVar3 = local_30;
      }
      bVar1 = DAT_028b90c0 != 0;
      DAT_028b90c0 = lVar3;
      if (bVar1) {
        FUN_00d50b20();
        lVar3 = local_30;
      }
    }
    if ((lVar3 != 0) && (DAT_028b90c8 == '\0')) {
      DAT_028b90c8 = '\x01';
      FUN_00e8cb90();
      lVar3 = local_30;
    }
    if ((local_28 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    DAT_028b90d1 = 1;
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



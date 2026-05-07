// Function: FUN_01e0dfc0
// Address: 01e0dfc0
// Size: 1054 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01e0e1af) */
/* WARNING: Removing unreachable block (ram,0x01e0e1b8) */
/* WARNING: Removing unreachable block (ram,0x01e0e2e7) */
/* WARNING: Removing unreachable block (ram,0x01e0e2f4) */
/* WARNING: Removing unreachable block (ram,0x01e0e181) */
/* WARNING: Removing unreachable block (ram,0x01e0e18e) */

void FUN_01e0dfc0(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RDI;
  undefined8 uVar4;
  float extraout_XMM0_Db;
  float fVar5;
  float fVar6;
  longlong local_40;
  char local_38;
  
  fVar5 = (float)((ulonglong)param_1 >> 0x20);
  if ((longlong *)unaff_RDI[0x27] == (longlong *)0x0) {
    return;
  }
  cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x9a0))();
  if (cVar3 == '\0') {
    return;
  }
  uVar4 = FUN_01e3f820();
  fVar6 = (float)((ulonglong)uVar4 >> 0x20);
  cVar3 = FUN_00d05410((int)param_1,(int)uVar4,param_2);
  if (cVar3 != '\0') {
    FUN_01e3f820();
    if (fVar6 * DAT_0239011c <= fVar5) {
      if ((int)unaff_RDI[0x28] < 0) {
        DAT_028b90d1 = 1;
        return;
      }
      (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x960))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01e0e138;
        }
        if (DAT_028b90a0 != 0) goto LAB_01e0e311;
      }
      else {
LAB_01e0e138:
        lVar2 = DAT_028b90a0;
        if (DAT_028b90a0 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          DAT_028b90a0 = local_40;
          if (lVar2 != 0) {
LAB_01e0e311:
            DAT_028b90a0 = local_40;
            FUN_00d50b20();
          }
        }
        if (local_40 != 0) {
          if (DAT_028b90a8 == '\0') {
            DAT_028b90a8 = '\x01';
            FUN_00e8cb90();
          }
          bVar1 = false;
          goto LAB_01e0e340;
        }
      }
      bVar1 = true;
LAB_01e0e340:
      (**(code **)(*unaff_RDI + 0x620))();
      *(undefined4 *)(unaff_RDI + 0x28) = 0xffffffff;
      if (bVar1) {
        DAT_028b90d1 = 1;
        return;
      }
      FUN_00d50b20();
      DAT_028b90d1 = 1;
      return;
    }
    if (0 < (int)unaff_RDI[0x28]) {
      DAT_028b90d1 = 1;
      return;
    }
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x960))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01e0e07b;
      }
      if (DAT_028b90a0 != 0) goto LAB_01e0e381;
    }
    else {
LAB_01e0e07b:
      lVar2 = DAT_028b90a0;
      if (DAT_028b90a0 != local_40) {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        DAT_028b90a0 = local_40;
        if (lVar2 != 0) {
LAB_01e0e381:
          DAT_028b90a0 = local_40;
          FUN_00d50b20();
        }
      }
      if (local_40 != 0) {
        if (DAT_028b90a8 == '\0') {
          DAT_028b90a8 = '\x01';
          FUN_00e8cb90();
        }
        bVar1 = false;
        goto LAB_01e0e3b0;
      }
    }
    bVar1 = true;
LAB_01e0e3b0:
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined4 *)(unaff_RDI + 0x28) = 1;
    if (bVar1) {
      DAT_028b90d1 = 1;
      return;
    }
    FUN_00d50b20();
    DAT_028b90d1 = 1;
    return;
  }
  if ((int)unaff_RDI[0x28] == 0) goto LAB_01e0e229;
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x960))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01e0e0df;
    }
    if (DAT_028b90a0 != 0) goto LAB_01e0e1d5;
LAB_01e0e202:
    bVar1 = true;
  }
  else {
LAB_01e0e0df:
    lVar2 = DAT_028b90a0;
    if (DAT_028b90a0 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      DAT_028b90a0 = local_40;
      if (lVar2 != 0) {
LAB_01e0e1d5:
        DAT_028b90a0 = local_40;
        FUN_00d50b20();
      }
    }
    if (local_40 == 0) goto LAB_01e0e202;
    if (DAT_028b90a8 == '\0') {
      DAT_028b90a8 = '\x01';
      FUN_00e8cb90();
    }
    bVar1 = false;
  }
  (**(code **)(*unaff_RDI + 0x620))();
  *(undefined4 *)(unaff_RDI + 0x28) = 0;
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_01e0e229:
  lVar2 = DAT_028b90a0;
  if (DAT_028b90a0 != 0) {
    FUN_00d50b00();
  }
  FUN_01e47f30();
  fVar5 = extraout_XMM0_Db - fVar5;
  FUN_01e07060(fVar5,(int)fVar5);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  DAT_028b90d0 = 1;
  cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0xa38))();
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0xaf0))();
  }
  DAT_028b90d1 = 0;
  return;
}



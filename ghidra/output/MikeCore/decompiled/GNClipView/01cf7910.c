// Function: FUN_01cf7910
// Address: 01cf7910
// Size: 705 bytes
// Class: GNClipView


/* WARNING: Removing unreachable block (ram,0x01cf7ac6) */
/* WARNING: Removing unreachable block (ram,0x01cf7acf) */
/* WARNING: Removing unreachable block (ram,0x01cf7a82) */
/* WARNING: Removing unreachable block (ram,0x01cf7a8b) */

void FUN_01cf7910(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong *local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  if (unaff_RDI[0x27] == 0) {
LAB_01cf79e2:
    if (*(char *)((longlong)unaff_RDI + 0x152) == '\0') goto LAB_01cf7a11;
    lVar7 = unaff_RDI[0x29];
    if (lVar7 == 0) {
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_90 + 0x4e8))();
      if (local_40 == 0) {
        lVar7 = 0;
        bVar4 = false;
      }
      else {
        lVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar4 = true;
        }
        else {
          local_38 = '\0';
          bVar4 = true;
        }
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) goto LAB_01cf7aac;
      iVar2 = *(int *)((longlong)unaff_RDI + 0x154);
      goto joined_r0x01cf7b20;
    }
    FUN_00d50b00();
    bVar4 = true;
LAB_01cf7aac:
    FUN_01d488d0();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1,(float)param_2);
    iVar2 = *(int *)((longlong)unaff_RDI + 0x154);
  }
  else {
    fVar9 = (float)param_2;
    FUN_00d50b00();
    plVar3 = (longlong *)unaff_RDI[0x27];
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar3 + 0x628))();
    if (cVar5 == '\0') {
      bVar4 = false;
    }
    else {
      lVar7 = unaff_RDI[0x27];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      fVar10 = fVar9;
      fVar12 = fVar11;
      FUN_01e3f820();
      bVar4 = fVar11 == fVar12 && fVar9 == fVar10;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (!bVar4) goto LAB_01cf79e2;
LAB_01cf7a11:
    bVar4 = false;
    iVar2 = *(int *)((longlong)unaff_RDI + 0x154);
joined_r0x01cf7b20:
    lVar7 = 0;
  }
  if ((((iVar2 != 0) || ((int)unaff_RDI[0x2b] != 0)) || (*(int *)((longlong)unaff_RDI + 0x15c) != 0)
      ) || ((int)unaff_RDI[0x2c] != 0)) {
    FUN_01cf3930();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01cf7bad;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_01cf7bad;
    lVar8 = 0;
    while( true ) {
      iVar2 = *(int *)(local_40 + 0x18);
      iVar6 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar6 = iVar2;
      }
      if (iVar6 >> 2 <= (int)lVar8) break;
      lVar1 = lVar8 * 4;
      lVar8 = lVar8 + 1;
      FUN_01cf4f60(iVar6 >> 2,*(undefined4 *)(*(longlong *)(local_40 + 0x10) + lVar1),param_3,
                   param_4,0);
    }
    FUN_00d50b20();
  }
LAB_01cf7bad:
  if ((bVar4) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}



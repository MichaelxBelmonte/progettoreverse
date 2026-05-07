// Function: FUN_01de4210
// Address: 01de4210
// Size: 679 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01de43f0) */
/* WARNING: Removing unreachable block (ram,0x01de43f9) */
/* WARNING: Removing unreachable block (ram,0x01de443f) */
/* WARNING: Removing unreachable block (ram,0x01de4448) */

longlong * FUN_01de4210(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar11;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_1 >> 0x20);
  if (unaff_RSI[0x3e] != 0) {
    iVar6 = FUN_01dd3800();
    if (*(char *)((longlong)unaff_RSI + 0x279) == '\0') {
      fVar11 = fVar11 / (*(float *)(unaff_RSI + 0x2d) + *(float *)((longlong)unaff_RSI + 0x174));
      iVar9 = -1;
      if ((0.0 <= fVar11) && (fVar11 < (float)(int)unaff_RSI[0x30])) {
        iVar9 = (int)fVar11;
      }
    }
    else {
      iVar9 = -1;
      if ((0.0 <= fVar11) && (lVar3 = unaff_RSI[0x52], lVar3 != 0)) {
        iVar2 = *(int *)(lVar3 + 0x18);
        iVar7 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar7 = iVar2;
        }
        uVar10 = 0;
        uVar8 = (ulonglong)(uint)(iVar7 >> 2);
        if (iVar7 >> 2 < 1) {
          uVar8 = uVar10;
        }
        do {
          if (uVar8 == uVar10) goto LAB_01de42f1;
          lVar1 = uVar10 * 4;
          uVar10 = uVar10 + 1;
        } while (*(float *)(*(longlong *)(lVar3 + 0x10) + lVar1) <= fVar11);
        iVar9 = (int)uVar10 + -1;
      }
    }
LAB_01de42f1:
    if (iVar6 == -1) {
      plVar4 = (longlong *)unaff_RSI[0x3e];
      FUN_00d50b00();
      local_70 = 0;
      local_68 = '\0';
      (**(code **)(*plVar4 + 0x80))(iVar9,&stack0xffffffffffffffb0,&local_70);
      if (local_40 == 0) {
        local_40 = 0;
        bVar5 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        bVar5 = true;
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RSI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar4 = (longlong *)unaff_RSI[0x3e];
      FUN_00d50b00();
      local_80 = *(longlong *)(*(longlong *)(unaff_RSI[0x2c] + 0x10) + (longlong)iVar6 * 8);
      if (local_80 != 0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      (**(code **)(*plVar4 + 0x80))(iVar9,&stack0xffffffffffffffa0,&local_80);
      if (local_40 == 0) {
        local_40 = 0;
        bVar5 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        bVar5 = true;
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RSI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_40 != 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar5) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
  }
  (**(code **)(*unaff_RSI + 0x6f0))();
  return unaff_RDI;
}



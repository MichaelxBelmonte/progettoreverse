// Function: FUN_01db1f60
// Address: 01db1f60
// Size: 762 bytes
// Class: GNSplitView


/* WARNING: Removing unreachable block (ram,0x01db2211) */
/* WARNING: Removing unreachable block (ram,0x01db221e) */
/* WARNING: Removing unreachable block (ram,0x01db2103) */
/* WARNING: Removing unreachable block (ram,0x01db2110) */

undefined8 * FUN_01db1f60(float param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar9;
  float fVar10;
  float fVar11;
  longlong local_88;
  char local_80;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01db2340();
  if (local_80 == '\0') {
    if (local_88 == 0) goto LAB_01db211a;
    FUN_00d50b00();
LAB_01db1fde:
    fVar11 = 0.0;
    lVar1 = (ulonglong)(0.0 < param_1) * 8 + 0x10;
    if (param_1 <= 0.0) {
      if (0 < *(int *)(local_88 + 0xc)) {
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(local_88 + 0x10) + lVar8 * 8);
          plVar4 = *(longlong **)(lVar3 + 0x20);
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar4 + 0x4d8))();
          FUN_00d50b20();
          uVar2 = *(undefined8 *)(lVar3 + lVar1);
          if (*(char *)(unaff_RSI + 0x138) == '\0') {
            fVar10 = (float)((ulonglong)uVar2 >> 0x20) - fVar11;
          }
          else {
            fVar10 = (float)uVar2 - param_1;
          }
          fVar11 = 0.0;
          param_1 = 0.0;
          if (fVar10 < 0.0) {
            fVar11 = 0.0;
            param_1 = 0.0;
            if (*(char *)(lVar3 + 0x3c) != '\0') {
              FUN_00d21140();
            }
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(local_88 + 0xc));
      }
    }
    else if (0 < *(int *)(local_88 + 0xc)) {
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(local_88 + 0x10) + lVar8 * 8);
        plVar4 = *(longlong **)(lVar3 + 0x20);
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar4 + 0x4d8))();
        FUN_00d50b20();
        uVar2 = *(undefined8 *)(lVar3 + lVar1);
        if (*(char *)(unaff_RSI + 0x138) == '\0') {
          fVar10 = (float)((ulonglong)uVar2 >> 0x20) - fVar11;
          param_1 = fVar11;
        }
        else {
          fVar10 = (float)uVar2 - param_1;
        }
        if ((DAT_0239424c < fVar10) && (*(char *)(lVar3 + 0x3c) != '\0')) {
          FUN_00d21140();
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(local_88 + 0xc));
    }
    FUN_01db88f0();
    bVar6 = false;
    bVar5 = false;
    iVar9 = *(int *)((longlong)puVar7 + 0xc);
    if (iVar9 == 0) goto LAB_01db2129;
LAB_01db224b:
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (bVar6) goto LAB_01db225f;
  }
  else {
    if (local_88 != 0) goto LAB_01db1fde;
LAB_01db211a:
    bVar6 = true;
    bVar5 = true;
    iVar9 = *(int *)((longlong)puVar7 + 0xc);
    if (iVar9 != 0) goto LAB_01db224b;
LAB_01db2129:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (bVar5) goto LAB_01db225f;
  }
  FUN_00d50b20();
LAB_01db225f:
  if (iVar9 == 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



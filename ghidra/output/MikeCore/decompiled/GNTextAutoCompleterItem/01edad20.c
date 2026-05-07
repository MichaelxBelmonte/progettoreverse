// Function: FUN_01edad20
// Address: 01edad20
// Size: 798 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01edadb2) */
/* WARNING: Removing unreachable block (ram,0x01edadbb) */
/* WARNING: Removing unreachable block (ram,0x01edae23) */
/* WARNING: Removing unreachable block (ram,0x01edae2f) */
/* WARNING: Removing unreachable block (ram,0x01edaf3c) */
/* WARNING: Removing unreachable block (ram,0x01edaf45) */

undefined8 * FUN_01edad20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar9;
  longlong lVar10;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*pcVar3)();
  if (*param_2 != 0) {
    FUN_00d21140();
    iVar4 = FUN_01ed4e60();
    if (iVar4 != -1) {
      uVar5 = FUN_00d23d20();
      uVar9 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar5 = uVar5 - 1;
          if ((longlong)*(int *)(*(longlong *)(unaff_RSI + 0x2b8) + 0xc) < (longlong)uVar9) {
            if (*param_2 != 0) {
              *param_2 = 0;
              if ((char)param_2[1] != '\0') {
                FUN_00d50b20();
              }
              goto LAB_01edaef0;
            }
          }
          else {
            lVar10 = *(longlong *)
                      (*(longlong *)(*(longlong *)(unaff_RSI + 0x2b8) + 0x10) + (ulonglong)uVar5 * 8
                      );
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            lVar1 = *param_2;
            if (lVar1 == lVar10) {
              if (((char)param_2[1] != '\0') || (lVar10 == 0)) {
                if (lVar10 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01edaef4;
              }
            }
            else {
              *param_2 = lVar10;
              if (((char)param_2[1] != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01edaef0:
            *(undefined1 *)(param_2 + 1) = 1;
          }
LAB_01edaef4:
          iVar6 = FUN_01ed4e60();
          if (iVar6 < iVar4) {
            FUN_00d21140();
            iVar4 = FUN_01ed4e60();
            if (iVar4 == 0) break;
          }
          bVar2 = 1 < (longlong)uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar2);
      }
      uVar5 = *(uint *)((longlong)puVar7 + 0xc);
      if (0 < (int)uVar5) {
        lVar10 = (ulonglong)uVar5 + 1;
        do {
          uVar5 = uVar5 - 1;
          lVar1 = *(longlong *)(puVar7[2] + (ulonglong)uVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + -1;
        } while (1 < lVar10);
      }
      if (*(int *)((longlong)puVar8 + 0xc) != 0) {
        *unaff_RDI = puVar8;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        goto LAB_01edb03f;
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  FUN_00d50b20();
LAB_01edb03f:
  FUN_00d50b20();
  return unaff_RDI;
}



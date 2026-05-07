// Function: FUN_00cb32e0
// Address: 00cb32e0
// Size: 735 bytes
// Class: GNString


void FUN_00cb32e0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong lVar8;
  int iVar9;
  longlong local_50;
  char local_48;
  
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    lVar6 = *(longlong *)(unaff_RDI + 0x88);
    lVar1 = *(longlong *)(lVar6 + 0x10);
    FUN_00d50b00();
    if (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x10) == 0) {
      *(undefined4 *)(lVar6 + 0x18) = 0;
    }
    else {
      FUN_00c8d630();
      *(undefined4 *)(lVar6 + 0x18) = 0;
    }
    FUN_00cad910();
    lVar8 = *(longlong *)(lVar6 + 0x10);
    if (lVar8 == local_50) {
      if ((local_48 != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
        lVar8 = *(longlong *)(lVar6 + 0x10);
      }
      *(longlong *)(lVar6 + 0x10) = local_50;
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    if ((*(longlong *)(lVar1 + 0x10) != 0) && (iVar3 = FUN_00c8d620(), iVar3 != 0)) {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FUN_00c8d620();
      }
      FUN_00e38c70();
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x368))();
      iVar3 = FUN_00c8d630();
      if (0 < iVar3) {
        iVar9 = 0;
        do {
          puVar4 = (undefined8 *)FUN_00c8df10();
          if (puVar4 != (undefined8 *)0x0) {
            plVar5 = (longlong *)*puVar4;
            if (puVar4[1] == 0) {
              lVar6 = FUN_00c8df20();
              if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
                FUN_00d50b00();
                uVar7 = (ulonglong)*(uint *)(lVar6 + 0xc);
                do {
                  if ((int)uVar7 < 1) goto LAB_00cb3409;
                  lVar8 = uVar7 * 8;
                  uVar7 = uVar7 - 1;
                } while (*(char *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + -8 + lVar8) + 0x38)
                         != '\0');
                (**(code **)(*plVar5 + 0x30))();
                FUN_00e38d10();
LAB_00cb3409:
                FUN_00d50b20();
              }
            }
            else {
              cVar2 = FUN_00cad630();
              if (cVar2 != '\0') {
                FUN_00e38d10();
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar3);
      }
      for (iVar3 = 0; iVar9 = FUN_00e38d70(), iVar3 < iVar9; iVar3 = iVar3 + 1) {
        plVar5 = (longlong *)FUN_00e38d90();
        lVar6 = FUN_00c8df20();
        if (lVar6 != 0) {
          lVar6 = *(longlong *)(lVar6 + 8);
          if (lVar6 != 0) {
            FUN_00d50b00();
            uVar7 = (ulonglong)*(uint *)(lVar6 + 0xc);
            do {
              if ((int)uVar7 < 1) goto joined_r0x00cb3582;
              lVar8 = uVar7 * 8;
              uVar7 = uVar7 - 1;
            } while (*(char *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + -8 + lVar8) + 0x38) !=
                     '\0');
            (**(code **)(*plVar5 + 0x38))();
          }
joined_r0x00cb3582:
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x378))();
      FUN_00e38ce0();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



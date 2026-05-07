// Function: FUN_00e31a80
// Address: 00e31a80
// Size: 841 bytes
// Class: GNString


ulonglong FUN_00e31a80(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  uint uVar13;
  
  uVar12 = 0;
  uVar4 = FUN_00e31390();
  iVar5 = FUN_00c8d180();
  if ((int)uVar4 < iVar5) {
    uVar12 = 0;
    iVar5 = FUN_00e31390();
    if ((int)uVar4 < iVar5 * 2 + 2) {
      uVar6 = FUN_00c8d190();
      uVar12 = (ulonglong)uVar6;
      if ((unaff_ESI & 1) == 0) {
LAB_00e31b20:
        uVar13 = unaff_ESI | 1;
        cVar3 = FUN_00e314a0(0);
        if (cVar3 == '\0') goto code_r0x00e31b3c;
        uVar11 = (ulonglong)(param_2 & 1 ^ 1);
        *(undefined4 *)(unaff_RDI + uVar11 * 2 + 2) = 0;
        *(uint *)((longlong)unaff_RDI + uVar11 * 0x10 + 0x14) = uVar6;
        uVar7 = FUN_00e83020();
        unaff_RDI[uVar11 * 2 + 3] = uVar7;
        while (3 < uVar13) {
          FUN_00da6800();
          uVar13 = FUN_00e31390();
        }
        if (0 < (int)uVar4) {
          uVar12 = 0;
          do {
            lVar8 = FUN_00e313b0();
            if (lVar8 != 0) {
              uVar9 = (*(code *)*unaff_RDI)();
              uVar9 = (uVar9 & 0xffffffff) % (ulonglong)uVar6;
              lVar1 = unaff_RDI[uVar11 * 2 + 3];
              lVar10 = (longlong)(int)uVar9;
              lVar2 = *(longlong *)(lVar1 + lVar10 * 8);
              while (lVar2 != 0) {
                uVar13 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar13;
                if (uVar13 == uVar6) {
                  uVar9 = 0;
                }
                lVar10 = (longlong)(int)uVar9;
                lVar2 = *(longlong *)(lVar1 + lVar10 * 8);
              }
              *(longlong *)(lVar1 + lVar10 * 8) = lVar8;
              *(int *)(unaff_RDI + uVar11 * 2 + 2) = *(int *)(unaff_RDI + uVar11 * 2 + 2) + 1;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar4);
        }
        uVar12 = unaff_RDI[(ulonglong)(param_2 & 1) * 2 + 3];
        FUN_00e313d0();
        FUN_00e313d0();
        FUN_00e313f0();
        cVar3 = FUN_00e314a0(3,uVar11);
        if (cVar3 == '\0') {
          iVar5 = 0x800;
          do {
            if (iVar5 < 2) {
              FUN_00da6800();
              iVar5 = 0x800;
            }
            else {
              iVar5 = iVar5 + -1;
            }
            cVar3 = FUN_00e314a0(3,uVar11);
          } while (cVar3 == '\0');
        }
        FUN_00e313d0();
        FUN_00e83070();
        goto LAB_00e31d72;
      }
LAB_00e31b46:
      cVar3 = FUN_00e314a0(0,unaff_ESI - 2);
      while (cVar3 == '\0') {
        cVar3 = FUN_00e314a0(0,unaff_ESI - 2);
      }
      iVar5 = FUN_00e31390();
      cVar3 = FUN_00e314a0(0,iVar5 + -2);
      while (cVar3 == '\0') {
        cVar3 = FUN_00e314a0(0,iVar5 + -2);
      }
      do {
        FUN_00da6800();
        uVar4 = FUN_00e31390();
      } while ((uVar4 & 1) != 0);
LAB_00e31d72:
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
    }
  }
  return uVar12 & 0xffffffff;
code_r0x00e31b3c:
  if ((unaff_ESI & 1) != 0) goto LAB_00e31b46;
  goto LAB_00e31b20;
}



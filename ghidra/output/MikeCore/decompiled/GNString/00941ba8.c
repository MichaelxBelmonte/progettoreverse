// Function: FUN_00941ba8
// Address: 00941ba8
// Size: 655 bytes
// Class: GNString


void FUN_00941ba8(byte param_1,byte param_2,byte param_3)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  byte unaff_SIL;
  longlong unaff_RDI;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x38);
  lVar4 = *(longlong *)(unaff_RDI + 0x40) - lVar2;
  uVar8 = (lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (((unaff_SIL | param_2) == 1) && (lVar4 != 0)) {
    uVar11 = 0;
    do {
      lVar10 = uVar11 * 0x58;
      pcVar1 = (char *)(lVar2 + 0x4b + lVar10);
      cVar3 = *pcVar1;
      if (cVar3 == '\0' || unaff_SIL != 1) {
LAB_00941c80:
        if ((cVar3 != '\0' && param_2 == 1) && (*(char *)(lVar2 + 0x4a + lVar10) != '\0')) {
          lVar7 = *(longlong *)(unaff_RDI + 0x20);
          lVar9 = *(longlong *)(unaff_RDI + 0x28) - lVar7;
          if (lVar9 != 0) {
            piVar6 = (int *)(lVar7 + 8);
            uVar5 = 0;
            do {
              if (*piVar6 == *(int *)(lVar2 + 8 + lVar10)) {
                if (uVar5 != 0xffffffff) {
                  *pcVar1 = *(char *)(lVar7 + 0x4a + uVar11 * 0x60);
                  goto LAB_00941cdd;
                }
                break;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 0x18;
            } while (uVar5 < (ulonglong)((lVar9 >> 5) * -0x5555555555555555));
          }
          goto LAB_00941cd8;
        }
      }
      else {
        if (*(char *)(lVar2 + 0x49 + lVar10) == '\0') {
          cVar3 = '\x01';
          goto LAB_00941c80;
        }
        lVar7 = *(longlong *)(unaff_RDI + 8);
        lVar9 = *(longlong *)(unaff_RDI + 0x10) - lVar7;
        if (lVar9 != 0) {
          piVar6 = (int *)(lVar7 + 8);
          uVar5 = 0;
          do {
            if (*piVar6 == *(int *)(lVar2 + 8 + lVar10)) {
              if (uVar5 != 0xffffffff) {
                cVar3 = *(char *)(lVar7 + 0x83 + uVar11 * 0x90);
                *pcVar1 = cVar3;
                goto LAB_00941c80;
              }
              break;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 0x24;
          } while (uVar5 < (ulonglong)((lVar9 >> 4) * -0x71c71c71c71c71c7));
        }
LAB_00941cd8:
        *pcVar1 = '\0';
      }
LAB_00941cdd:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar8);
  }
  if (((param_1 | param_3) == 1) && (lVar4 != 0)) {
    lVar2 = *(longlong *)(unaff_RDI + 0x50);
    uVar11 = 0;
    do {
      lVar4 = uVar11 * 0x88;
      pcVar1 = (char *)(lVar2 + 0x74 + lVar4);
      cVar3 = *pcVar1;
      if (cVar3 == '\0' || param_1 != 1) {
LAB_00941db0:
        if ((cVar3 != '\0' && param_3 == 1) && (*(char *)(lVar2 + 0x73 + lVar4) != '\0')) {
          lVar10 = *(longlong *)(unaff_RDI + 0x20);
          lVar7 = *(longlong *)(unaff_RDI + 0x28) - lVar10;
          if (lVar7 != 0) {
            piVar6 = (int *)(lVar10 + 8);
            uVar5 = 0;
            do {
              if (*piVar6 == *(int *)(lVar2 + 8 + lVar4)) {
                if (uVar5 != 0xffffffff) {
                  *pcVar1 = *(char *)(lVar10 + 0x4a + uVar11 * 0x60);
                  goto LAB_00941e0c;
                }
                break;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 0x18;
            } while (uVar5 < (ulonglong)((lVar7 >> 5) * -0x5555555555555555));
          }
          goto LAB_00941e08;
        }
      }
      else {
        if (*(char *)(lVar2 + 0x72 + lVar4) == '\0') {
          cVar3 = '\x01';
          goto LAB_00941db0;
        }
        lVar10 = *(longlong *)(unaff_RDI + 8);
        lVar7 = *(longlong *)(unaff_RDI + 0x10) - lVar10;
        if (lVar7 != 0) {
          piVar6 = (int *)(lVar10 + 8);
          uVar5 = 0;
          do {
            if (*piVar6 == *(int *)(lVar2 + 8 + lVar4)) {
              if (uVar5 != 0xffffffff) {
                cVar3 = *(char *)(lVar10 + 0x83 + uVar11 * 0x90);
                *pcVar1 = cVar3;
                goto LAB_00941db0;
              }
              break;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 0x24;
          } while (uVar5 < (ulonglong)((lVar7 >> 4) * -0x71c71c71c71c71c7));
        }
LAB_00941e08:
        *pcVar1 = '\0';
      }
LAB_00941e0c:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar8);
  }
  return;
}



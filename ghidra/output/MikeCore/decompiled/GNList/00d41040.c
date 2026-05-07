// Function: FUN_00d41040
// Address: 00d41040
// Size: 780 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d410d0) */
/* WARNING: Removing unreachable block (ram,0x00d410d9) */

void FUN_00d41040(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar8;
  longlong local_60;
  char local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  char local_38 [8];
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x368))();
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d4116e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x378))();
    return;
  }
  if (*param_2 == 0) {
    FUN_00d418a0();
    if (local_58[0] == '\0') {
      if (local_60 == 0) goto LAB_00d41355;
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == 0) goto LAB_00d41355;
    local_58[0] = '\0';
    local_40 = 0;
    local_48 = 0;
    if (0 < *(int *)(local_60 + 0xc)) {
      uVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_60 + 0x10) + (ulonglong)uVar6 * 8);
        uVar7 = *(uint *)(lVar1 + 0xc);
        uVar8 = (ulonglong)uVar7;
        if (0 < (int)uVar7) {
          lVar5 = *unaff_RSI;
          if (*param_1 == 0) {
            while( true ) {
              uVar7 = uVar7 - 1;
              lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar7 * 8);
              if (*(longlong *)(lVar4 + 0x10) == lVar5) {
                *(undefined1 *)(lVar4 + 0xc) = 0;
                FUN_00d23620();
                *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) + -1;
              }
              if ((longlong)uVar8 < 2) break;
              uVar8 = uVar8 - 1;
            }
          }
          else {
            lVar4 = uVar8 + 1;
            do {
              uVar7 = uVar7 - 1;
              lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar7 * 8);
              if ((*(longlong *)(lVar2 + 0x10) == lVar5) &&
                 (*(longlong *)(lVar2 + 0x18) == *param_1)) {
                *(undefined1 *)(lVar2 + 0xc) = 0;
                FUN_00d23620();
                *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) + -1;
                break;
              }
              lVar4 = lVar4 + -1;
            } while (1 < lVar4);
          }
        }
        uVar6 = uVar6 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar6);
      } while ((int)uVar6 < *(int *)(local_60 + 0xc));
    }
    FUN_00d42760();
    FUN_00d50b20();
  }
  else {
    FUN_00d40f90();
    pcVar3 = local_38;
    if (local_58[0] != '\0') {
      pcVar3 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      uVar6 = *(uint *)(local_60 + 0xc);
      uVar8 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        lVar1 = *unaff_RSI;
        if (*param_1 == 0) {
          while( true ) {
            uVar6 = uVar6 - 1;
            lVar5 = *(longlong *)(*(longlong *)(local_60 + 0x10) + (ulonglong)uVar6 * 8);
            if (*(longlong *)(lVar5 + 0x10) == lVar1) {
              *(undefined1 *)(lVar5 + 0xc) = 0;
              FUN_00d23620();
              *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) + -1;
            }
            if ((longlong)uVar8 < 2) break;
            uVar8 = uVar8 - 1;
          }
        }
        else {
          lVar5 = uVar8 + 1;
          do {
            uVar6 = uVar6 - 1;
            lVar4 = *(longlong *)(*(longlong *)(local_60 + 0x10) + (ulonglong)uVar6 * 8);
            if ((*(longlong *)(lVar4 + 0x10) == lVar1) && (*(longlong *)(lVar4 + 0x18) == *param_1))
            {
              *(undefined1 *)(lVar4 + 0xc) = 0;
              FUN_00d23620();
              *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) + -1;
              break;
            }
            lVar5 = lVar5 + -1;
          } while (1 < lVar5);
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
LAB_00d41355:
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x378))();
  return;
}



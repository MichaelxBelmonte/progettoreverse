// Function: FUN_01beeeb0
// Address: 01beeeb0
// Size: 942 bytes
// Class: MUHorizontalOverviewScroller


/* WARNING: Removing unreachable block (ram,0x01bef25a) */
/* WARNING: Removing unreachable block (ram,0x01bef263) */
/* WARNING: Removing unreachable block (ram,0x01beef67) */
/* WARNING: Removing unreachable block (ram,0x01beef70) */

void FUN_01beeeb0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 in_R9;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_40;
  char local_38;
  
  iVar5 = FUN_01d3a5a0();
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    FUN_01d3b590();
    cVar4 = FUN_01e420b0();
    if ((cVar4 == '\0') && ((int)unaff_RDI[0x3d] != 0)) {
      FUN_01e42250();
    }
    iVar5 = FUN_01d3b620();
    if (iVar5 == 2) {
      FUN_01bef350(0,0,1,in_R9,0,0);
    }
    else {
      uVar7 = FUN_01d3abf0();
      uVar9 = 0;
      uVar7 = FUN_00d05530(uVar7,0,DAT_023908d8);
LAB_01beefc0:
      do {
        do {
          do {
            (**(code **)(*unaff_RDI + 0x658))();
            lVar1 = *unaff_RSI;
            if (lVar1 == local_40) {
              if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_01bef082;
              lVar6 = lVar1;
              if (local_38 == '\0') {
                FUN_00d50b00();
                goto LAB_01bef07d;
              }
LAB_01bef025:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              if (lVar6 == 0) {
                return;
              }
              iVar5 = FUN_01d3a5a0();
            }
            else {
              lVar3 = unaff_RSI[1];
              if (local_38 != '\0') {
                *unaff_RSI = local_40;
                lVar6 = local_40;
                if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                  lVar6 = *unaff_RSI;
                }
                goto LAB_01bef025;
              }
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              *unaff_RSI = local_40;
              if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
LAB_01bef07d:
              *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01bef082:
              lVar1 = *unaff_RSI;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 == 0) {
                return;
              }
              iVar5 = FUN_01d3a5a0();
            }
            if (iVar5 != 5) {
              FUN_01bef350(0,0,0);
              return;
            }
            iVar5 = FUN_01d3a5a0();
          } while (iVar5 != 5);
          uVar8 = FUN_01d3abf0();
          cVar4 = FUN_00d05410(uVar8,uVar7,uVar9);
        } while (cVar4 != '\0');
        uVar8 = FUN_01e466c0(uVar8);
        (**(code **)(*unaff_RDI + 0x658))();
        lVar1 = *unaff_RSI;
        if (lVar1 == local_40) {
          if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01bef1bc;
            }
            goto LAB_01bef154;
          }
LAB_01bef15d:
          lVar1 = *unaff_RSI;
        }
        else {
          lVar3 = unaff_RSI[1];
          if (local_38 != '\0') {
            *unaff_RSI = local_40;
            if (((char)lVar3 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
LAB_01bef154:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_38 = '\0';
            goto LAB_01bef15d;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *unaff_RSI = local_40;
          if (((char)lVar3 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01bef1bc:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          lVar1 = *unaff_RSI;
        }
        if (lVar1 == 0) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01beefc0;
        }
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      } while (iVar5 != 5);
      plVar2 = (longlong *)unaff_RDI[0x36];
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        FUN_01e48f80(uVar8);
        (**(code **)(*plVar2 + 0x928))();
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01e459c0();
  }
  return;
}



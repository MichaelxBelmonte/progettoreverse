// Function: FUN_00e225e0
// Address: 00e225e0
// Size: 1191 bytes
// Class: GNFileType


/* WARNING: Removing unreachable block (ram,0x00e22808) */
/* WARNING: Removing unreachable block (ram,0x00e22811) */

void FUN_00e225e0(void)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  
  cVar6 = FUN_00e20b20();
  lVar4 = DAT_02785a30;
  if (cVar6 == '\0') {
    if (DAT_02785a30 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
           0x5b) {
    *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
    cVar6 = FUN_00e20b20();
    lVar4 = DAT_02785a38;
    if (cVar6 != '\0') {
      if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
          0x5d) {
        *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        *unaff_RDI = puVar7;
      }
      else {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        while (FUN_00e20d30(), lVar4 = DAT_02785a40, local_a0 != '\0') {
          if (local_a8 != 0) goto LAB_00e227c3;
LAB_00e227ce:
          if (*(char *)(unaff_RSI + 0xd) != '\0') {
            bVar3 = true;
            FUN_00d227d0();
            goto LAB_00e227ee;
          }
          if (*(char *)(unaff_RSI + 0xe) == '\0') {
            if (DAT_02785a40 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            goto LAB_00e22a74;
          }
LAB_00e22880:
          if ((*(int *)(unaff_RSI + 0x34) <= *(int *)(unaff_RSI + 0x30)) ||
             (puVar7 == (undefined8 *)0x0)) goto LAB_00e229d3;
        }
        if (local_a8 == 0) goto LAB_00e227ce;
        FUN_00d50b00();
LAB_00e227c3:
        bVar3 = false;
LAB_00e227ee:
        FUN_00d21140();
        cVar6 = FUN_00e20b20();
        lVar5 = DAT_02785a50;
        lVar4 = DAT_02785a48;
        if (cVar6 == '\0') {
          if (DAT_02785a48 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (!bVar3) {
            FUN_00d50b20();
          }
          goto LAB_00e22a74;
        }
        iVar2 = *(int *)(unaff_RSI + 0x30);
        sVar1 = *(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)iVar2 * 2);
        if (sVar1 == 0x2c) {
          *(int *)(unaff_RSI + 0x30) = iVar2 + 1;
          cVar6 = FUN_00e20b20();
          lVar5 = DAT_02785a58;
          lVar4 = DAT_02785a38;
          if (cVar6 == '\0') {
            if (DAT_02785a38 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
LAB_00e22a74:
            *unaff_RDI = 0;
            goto LAB_00e22a7c;
          }
          if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2)
              != 0x5d) {
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22880;
          }
          if (*(char *)(unaff_RSI + 0xf) == '\0') {
            if (DAT_02785a58 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22a74;
          }
          *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
          if (!bVar3) {
            FUN_00d50b20();
          }
        }
        else {
          if (sVar1 != 0x5d) {
            if (DAT_02785a50 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22a74;
          }
          *(int *)(unaff_RSI + 0x30) = iVar2 + 1;
          if (!bVar3) {
            FUN_00d50b20();
          }
        }
LAB_00e229d3:
        *unaff_RDI = puVar7;
      }
LAB_00e22a7c:
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    if (DAT_02785a38 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_02785a30 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}



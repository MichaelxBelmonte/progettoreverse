// Function: FUN_00c801f0
// Address: 00c801f0
// Size: 940 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c80451) */
/* WARNING: Removing unreachable block (ram,0x00c8045e) */
/* WARNING: Removing unreachable block (ram,0x00c80591) */
/* WARNING: Removing unreachable block (ram,0x00c8059e) */
/* WARNING: Removing unreachable block (ram,0x00c80377) */
/* WARNING: Removing unreachable block (ram,0x00c803a0) */
/* WARNING: Removing unreachable block (ram,0x00c80379) */
/* WARNING: Removing unreachable block (ram,0x00c803a2) */

void FUN_00c801f0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar4;
  int local_50;
  longlong local_40;
  char local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0002f270();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *(longlong *)(*unaff_RSI + 0x10);
  if (lVar1 == 0) {
    if (plVar3[2] != 0) {
      plVar3[2] = 0;
LAB_00c8026a:
      FUN_00d50b20();
      if (lVar1 != 0) goto LAB_00c80277;
    }
  }
  else {
    FUN_00d50b00();
    lVar2 = plVar3[2];
    if (lVar2 != lVar1) {
      FUN_00d50b00();
      plVar3[2] = lVar1;
      if (lVar2 != 0) goto LAB_00c8026a;
    }
LAB_00c80277:
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x18);
  if (lVar1 == 0) {
    if (plVar3[3] == 0) goto LAB_00c802d1;
    plVar3[3] = 0;
LAB_00c802bc:
    FUN_00d50b20();
    if (lVar1 == 0) goto LAB_00c802d1;
  }
  else {
    FUN_00d50b00();
    lVar2 = plVar3[3];
    if (lVar2 != lVar1) {
      FUN_00d50b00();
      plVar3[3] = lVar1;
      if (lVar2 != 0) goto LAB_00c802bc;
    }
  }
  FUN_00d50b20();
LAB_00c802d1:
  lVar1 = *(longlong *)(*unaff_RSI + 0x58);
  if (lVar1 == 0) {
    plVar3[0xb] = 0;
    lVar1 = *(longlong *)(*unaff_RSI + 0x30);
  }
  else {
    FUN_00d50b00();
    plVar3[0xb] = lVar1;
    FUN_00d50b20();
    lVar1 = *(longlong *)(*unaff_RSI + 0x30);
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      FUN_00d773e0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00c807f0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00559a70();
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        FUN_00c779c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00c808f0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00cc1480();
    FUN_00d50b20();
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



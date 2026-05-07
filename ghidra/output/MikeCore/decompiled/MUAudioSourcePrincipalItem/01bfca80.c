// Function: FUN_01bfca80
// Address: 01bfca80
// Size: 796 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01bfcd3d) */
/* WARNING: Removing unreachable block (ram,0x01bfcd49) */
/* WARNING: Removing unreachable block (ram,0x01bfcb09) */
/* WARNING: Removing unreachable block (ram,0x01bfcb12) */

void FUN_01bfca80(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_90;
  char local_88;
  longlong *local_48;
  char local_40;
  
  FUN_01d3a560();
  iVar6 = FUN_01d3b590();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(uint *)(unaff_RDI + 0x20) = (uint)(iVar6 != 8) * 9 + 1;
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_48 == (longlong *)0x0) {
    bVar3 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = local_48;
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
  }
  if (unaff_RDI[0x1d] == *unaff_RSI) {
    FUN_00e38430();
  }
  FUN_00e99dd0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x960))();
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  cVar5 = (**(code **)(*local_48 + 0x50))();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && (0 < *(int *)((longlong)plVar8 + 0xc))) {
    lVar7 = 0;
    bVar2 = false;
    lVar9 = 0;
    do {
      lVar1 = *(longlong *)(plVar8[2] + lVar7 * 8);
      if (lVar9 == lVar1) {
        lVar10 = lVar9;
        bVar4 = bVar2;
        if ((!bVar2) && (lVar1 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        lVar10 = lVar1;
        if ((bVar2) && (lVar9 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar4;
      if (unaff_RDI[0x1d] == *unaff_RSI) {
        FUN_01bfa490();
        FUN_01bf7000();
        FUN_00d46dc0();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_019b43b0();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar10;
    } while (lVar7 < *(int *)((longlong)plVar8 + 0xc));
    if ((bVar2) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3 && plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



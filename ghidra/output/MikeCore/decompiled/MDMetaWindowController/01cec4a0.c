// Function: FUN_01cec4a0
// Address: 01cec4a0
// Size: 804 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x01cec752) */
/* WARNING: Removing unreachable block (ram,0x01cec75b) */

void FUN_01cec4a0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined7 uVar7;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_58;
  char local_50 [8];
  undefined8 local_48;
  char local_38 [8];
  
  *(undefined1 *)((longlong)unaff_RDI + 0x18a) = 0;
  local_48 = 0;
  iVar3 = FUN_01dd4c80();
  bVar1 = false;
  uVar8 = 0;
  lVar9 = 0;
  while( true ) {
    FUN_00d23340();
    local_38[0] = local_50[0];
    pcVar5 = local_50;
    if (local_50[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      pcVar5 = (char *)FUN_00d50b20();
    }
    cVar2 = (char)uVar8;
    if (local_58 == lVar9) {
      lVar6 = lVar9;
      local_48 = uVar8;
      if ((cVar2 == '\0') && (local_58 != 0)) {
        uVar7 = (undefined7)((ulonglong)pcVar5 >> 8);
        if (local_38[0] == '\0') {
          local_48 = CONCAT71(uVar7,1);
          FUN_00d50b00();
        }
        else {
          local_38[0] = '\0';
          local_48 = CONCAT71(uVar7,1);
        }
      }
    }
    else {
      lVar6 = local_58;
      if (local_38[0] == '\0') {
        if (local_58 != 0) {
          pcVar5 = (char *)FUN_00d50b00();
        }
        local_48 = CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
        if ((cVar2 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((cVar2 != '\0') && (lVar9 != 0)) {
          pcVar5 = (char *)FUN_00d50b20();
        }
        local_38[0] = '\0';
        local_48 = CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
      }
    }
    if (lVar6 == 0) break;
    lVar9 = *unaff_RSI;
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 == lVar6) goto LAB_01cec62d;
    bVar1 = true;
    (**(code **)(*unaff_RDI + 0x988))();
    uVar8 = local_48;
    lVar9 = lVar6;
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_01cec62d:
  iVar4 = FUN_01dd40e0();
  lVar9 = 0;
  bVar10 = false;
  if ((iVar4 < 2) && (iVar3 != -1)) {
    lVar9 = *(longlong *)(*unaff_RSI + 0x20);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    FUN_01ce41d0();
    if (local_50[0] == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if (iVar3 < *(int *)(local_58 + 0xc)) {
      lVar9 = *(longlong *)(*(longlong *)(local_58 + 0x10) + (longlong)iVar3 * 8);
      bVar10 = lVar9 == 0;
      if (bVar10) {
        lVar9 = 0;
      }
      else {
        FUN_00d50b00();
      }
      bVar10 = !bVar10;
      cVar2 = FUN_01ce7560();
      if (cVar2 != '\0') {
        (**(code **)(*unaff_RDI + 0x980))();
        bVar1 = true;
      }
    }
    else {
      bVar10 = false;
      lVar9 = 0;
    }
    FUN_00d50b20();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x18a) = 1;
  if (bVar1) {
    (**(code **)(*unaff_RDI + 0x990))();
    (**(code **)(*unaff_RDI + 0x938))();
  }
  (**(code **)(*unaff_RDI + 0x940))();
  if ((bVar10) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}



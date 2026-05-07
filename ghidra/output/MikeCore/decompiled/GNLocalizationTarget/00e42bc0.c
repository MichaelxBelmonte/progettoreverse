// Function: FUN_00e42bc0
// Address: 00e42bc0
// Size: 862 bytes
// Class: GNLocalizationTarget


/* WARNING: Removing unreachable block (ram,0x00e42e23) */
/* WARNING: Removing unreachable block (ram,0x00e42e2f) */

void FUN_00e42bc0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong unaff_RDI;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50 [8];
  undefined8 local_48;
  longlong local_40;
  char local_38 [7];
  char local_31;
  
  plVar1 = (longlong *)(unaff_RDI + 0x10);
  lVar9 = 0;
  local_48 = 0;
  local_40 = 0;
  lVar10 = 0;
  cVar8 = '\0';
  do {
    FUN_00c9fe20();
    local_38[0] = local_50[0];
    pcVar5 = local_50;
    if (local_50[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    iVar2 = *(int *)(local_58 + 0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar2 <= lVar9) {
      if (((char)local_48 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((cVar8 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_00c9fe20();
    local_38[0] = local_50[0];
    pcVar5 = local_38;
    pcVar6 = local_50;
    if (local_50[0] == '\0') {
      pcVar6 = pcVar5;
    }
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = *(longlong *)(*(longlong *)(local_58 + 0x10) + lVar9 * 8);
    if (lVar10 == lVar3) {
      lVar4 = lVar10;
      local_31 = cVar8;
      if ((cVar8 == '\0') && (lVar3 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_31 = '\x01';
      lVar4 = lVar3;
      if ((cVar8 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar10 = lVar4;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    uVar7 = FUN_00e427c0();
    if (local_40 == local_58) {
      if (((char)local_48 == '\0') && (local_40 != 0)) {
        local_48 = CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
        if (local_50[0] == '\0') {
          FUN_00d50b00();
        }
      }
      else if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          uVar7 = FUN_00d50b00();
        }
        if (((char)local_48 != '\0') && (local_40 != 0)) {
          local_40 = local_58;
          uVar7 = FUN_00d50b20();
          local_48 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          goto LAB_00e42e1a;
        }
      }
      else if (((char)local_48 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      local_40 = local_58;
      local_48 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
LAB_00e42e1a:
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_88 = '\0';
    local_80 = local_40;
    local_78 = '\0';
    local_90 = lVar10;
    FUN_00e3fb50(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b20();
    }
    lVar9 = lVar9 + 1;
    cVar8 = local_31;
  } while( true );
}



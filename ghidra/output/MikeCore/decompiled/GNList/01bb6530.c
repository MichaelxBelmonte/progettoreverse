// Function: FUN_01bb6530
// Address: 01bb6530
// Size: 775 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01bb67f9) */
/* WARNING: Removing unreachable block (ram,0x01bb6809) */

void FUN_01bb6530(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_R14;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined8 local_50;
  longlong *local_48;
  char local_40;
  uint local_34;
  
  FUN_01d3a560();
  iVar3 = FUN_01d3b590();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x1f) = *(undefined4 *)(&DAT_0241dd00 + (ulonglong)(iVar3 == 8) * 4);
  (**(code **)(*unaff_RDI + 0x3f8))();
  plVar5 = local_48;
  if (local_48 == (longlong *)0x0) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    plVar5 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      uVar8 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_01bb65d4;
      FUN_00d50b20();
    }
    uVar8 = 0;
  }
LAB_01bb65d4:
  local_78 = plVar5;
  FUN_00e38430();
  FUN_00e99dd0();
  plVar5 = local_48;
  (**(code **)(*(longlong *)*unaff_RSI + 0x960))();
  local_70 = local_88;
  local_68 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_68 = '\x01';
  cVar2 = (**(code **)(*plVar5 + 0x50))();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = local_78;
  if ((cVar2 != '\0') && (0 < *(int *)((longlong)local_78 + 0xc))) {
    local_34 = (uint)uVar8;
    lVar9 = 0;
    local_50 = 0;
    lVar6 = 0;
    do {
      lVar4 = plVar5[2];
      lVar1 = *(longlong *)(lVar4 + lVar9 * 8);
      if (lVar6 == lVar1) {
        lVar7 = lVar6;
        if (((char)local_50 == '\0') && (lVar1 != 0)) {
          local_50 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar4 = FUN_00d50b00();
        }
        bVar10 = (char)local_50 != '\0';
        local_50 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        lVar7 = lVar1;
        if ((bVar10) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x6c8))();
      uVar11 = FUN_00d46dc0();
      local_60 = local_48;
      local_58 = 0;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          uVar11 = FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      plVar5 = local_78;
      local_58 = '\x01';
      local_90 = '\0';
      local_98 = lVar7;
      FUN_019b43b0(uVar11,&local_98);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = lVar9 + 1;
      lVar6 = lVar7;
    } while (lVar9 < *(int *)((longlong)plVar5 + 0xc));
    uVar8 = (ulonglong)local_34;
    if (((char)local_50 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((char)uVar8 == '\0' && plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



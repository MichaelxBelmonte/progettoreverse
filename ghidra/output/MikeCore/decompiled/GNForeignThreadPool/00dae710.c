// Function: FUN_00dae710
// Address: 00dae710
// Size: 523 bytes
// Class: GNForeignThreadPool


ulonglong FUN_00dae710(void)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined7 uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_90;
  char local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  
  lVar4 = *(longlong *)(unaff_RDI + 0x28);
  uVar1 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar1 < 1) {
    bVar7 = false;
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)unaff_R14 >> 8);
    bVar7 = true;
    uVar6 = 1;
    while( true ) {
      plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + -8 + uVar6 * 8);
      FUN_00d50b00();
      (**(code **)(*plVar2 + 0x130))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if (*(char *)(unaff_RDI + 0x48) == '\0') goto LAB_00dae91a;
      bVar7 = uVar6 < uVar1;
      if (uVar1 == uVar6) break;
      lVar4 = *(longlong *)(unaff_RDI + 0x28);
      uVar6 = uVar6 + 1;
    }
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar4 = 0;
      do {
        local_70 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar4 * 8);
        local_68 = '\0';
        FUN_00d23f50();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar3 + 0xc));
      lVar4 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar4 == 0) goto LAB_00dae91a;
    }
    local_88 = '\0';
    local_80 = *(longlong *)(lVar4 + 0x10);
    local_78 = 0;
    if (0 < *(int *)(local_80 + 0xc)) {
      do {
        local_90 = *(longlong *)(*(longlong *)(local_80 + 0x10) + (longlong)local_78 * 8);
        FUN_012d5b70((longlong)local_78,&local_90);
        lVar4 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00d21140();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_78 = local_78 + 1;
      } while (local_78 < *(int *)(local_80 + 0xc));
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00dae91a:
  return CONCAT71(uVar5,~bVar7) & 0xffffff01;
}



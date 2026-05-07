// Function: FUN_01cb5fc0
// Address: 01cb5fc0
// Size: 1008 bytes
// Class: Unknown


void FUN_01cb5fc0(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong lVar5;
  longlong *plVar6;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar6 = local_40;
  lVar5 = DAT_027e2660;
  if (DAT_027e2660 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar6 + 0x50))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') goto LAB_01cb637e;
  FUN_00d3ed20();
  lVar5 = DAT_02704000;
  if (DAT_02704000 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  plVar6 = local_40;
  lVar3 = DAT_027ede00;
  if (DAT_027ede00 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar6 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') goto LAB_01cb637e;
  FUN_00d6f370();
  local_a0 = DAT_027ede00;
  if (DAT_027ede00 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d710b0(&local_90,&local_a0);
  local_50 = local_40;
  if (local_40 == (longlong *)0x0) {
    local_44 = 1;
    local_50 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_44 = 0;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01cb61e2;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_44 = 0;
  }
LAB_01cb61e2:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    if (0 < *(int *)(DAT_028b72d0 + 0xc)) {
      lVar5 = 0;
      bVar2 = false;
      plVar6 = (longlong *)0x0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(DAT_028b72d0 + 0x10) + lVar5 * 8);
        if (plVar6 == plVar1) {
          if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
            plVar6 = plVar1;
          }
          else {
            bVar2 = true;
            plVar6 = plVar1;
          }
        }
        (**(code **)(*plVar6 + 0x448))();
        local_80 = local_50;
        local_78 = '\0';
        cVar4 = (**(code **)(*local_40 + 0x50))();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_01cb4550();
          break;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(DAT_028b72d0 + 0xc));
      if (bVar2) {
        FUN_00d50b20();
      }
    }
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
  }
LAB_01cb637e:
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_00d530a0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}



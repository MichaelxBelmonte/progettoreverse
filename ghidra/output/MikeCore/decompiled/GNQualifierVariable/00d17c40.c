// Function: FUN_00d17c40
// Address: 00d17c40
// Size: 672 bytes
// Class: GNQualifierVariable


/* WARNING: Removing unreachable block (ram,0x00d17caf) */
/* WARNING: Removing unreachable block (ram,0x00d17cbb) */

void FUN_00d17c40(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  undefined7 uVar6;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_000649c0();
  (**(code **)(*plVar3 + 0x18))();
  cVar2 = (**(code **)(*plVar3 + 0x658))();
  if (cVar2 == '\0') {
    local_38 = 0;
LAB_00d17d68:
    local_78 = *unaff_RSI;
    local_70 = '\0';
    cVar2 = FUN_00dc22f0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      local_68 = *unaff_RSI;
      local_60 = '\0';
      uVar4 = FUN_00dc2d90();
      lVar5 = local_48;
      if (local_48 == 0) {
        lVar5 = 0;
      }
      else if (local_40 == '\0') {
        uVar4 = FUN_00d50b00();
        local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = local_38;
      if (lVar5 != 0) goto LAB_00d17e81;
    }
    local_58 = *unaff_RSI;
    local_50 = '\0';
    FUN_00ca94c0();
    lVar5 = local_48;
    if (local_48 == 0) {
      lVar5 = 0;
      uVar4 = local_38;
    }
    else {
      uVar6 = (undefined7)((ulonglong)local_38 >> 8);
      if (local_40 == '\0') {
        FUN_00d50b00();
        uVar4 = CONCAT71(uVar6,1);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        uVar4 = CONCAT71(uVar6,1);
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      bVar1 = true;
      goto LAB_00d17ea1;
    }
  }
  else {
    local_88 = *unaff_RSI;
    local_80 = '\0';
    uVar4 = (**(code **)(*plVar3 + 0x610))(param_1,&local_88);
    lVar5 = local_48;
    if (local_48 == 0) {
      local_38 = 0;
      lVar5 = 0;
joined_r0x00d17d25:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        uVar4 = FUN_00d50b00();
        local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        goto joined_r0x00d17d25;
      }
      local_40 = '\0';
      local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = local_38;
    if (lVar5 == 0) goto LAB_00d17d68;
  }
LAB_00d17e81:
  local_38 = uVar4;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((char)local_38 == '\0') {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  bVar1 = false;
  uVar4 = 0;
LAB_00d17ea1:
  FUN_00d50b20();
  if ((char)uVar4 != '\0' && !bVar1) {
    FUN_00d50b20();
  }
  return;
}



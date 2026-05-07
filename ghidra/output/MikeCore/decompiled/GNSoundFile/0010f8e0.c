// Function: FUN_0010f8e0
// Address: 0010f8e0
// Size: 1627 bytes
// Class: GNSoundFile


/* WARNING: Removing unreachable block (ram,0x0010fdf7) */
/* WARNING: Removing unreachable block (ram,0x0010fe03) */

ulonglong FUN_0010f8e0(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    FUN_00d50b00();
  }
  FUN_01cac990();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e92b0;
  if ((plVar5 == (longlong *)0x0) || (plVar7 = plVar5, *(int *)((longlong)plVar5 + 0xc) == 0)) {
    if (DAT_027e92b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cac990();
    plVar7 = local_48;
    if (plVar5 == local_48) {
LAB_0010fa20:
      plVar7 = plVar5;
      if (local_40[0] != '\0') {
LAB_0010fa26:
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar5 = plVar7;
          goto LAB_0010fa20;
        }
        if (local_40[0] == '\0') goto LAB_0010fa34;
        goto LAB_0010fa26;
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
    }
LAB_0010fa34:
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar7 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_0010ff27;
  }
  if (*(int *)((longlong)plVar7 + 0xc) < 1) {
LAB_0010ff1d:
    uVar6 = 0;
  }
  else {
    FUN_01f27fe0();
    FUN_00d23310();
    plVar5 = local_48;
    local_38[0] = local_40[0];
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = 0;
    if (local_38[0] == '\0') {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_88 = '\x01';
    local_90 = plVar5;
    FUN_002a0320();
    plVar5 = (longlong *)CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (((plVar5 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      local_60 = plVar5;
      FUN_00d23310();
      plVar5 = local_48;
      local_a0 = local_40[0];
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = &local_a0;
      }
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x370))();
      plVar5 = (longlong *)CONCAT71(uStack_57,local_58);
      FUN_014ffc90();
      local_80 = local_48;
      local_78 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_78 = '\x01';
      cVar2 = (**(code **)(*plVar5 + 0x50))();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (local_a0 != '\0') {
        FUN_00d50b20();
      }
      plVar5 = local_60;
      if (cVar2 == '\0') {
LAB_0010fe3f:
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_024c5080;
        FUN_00d500e0();
        FUN_00d23310();
        pcVar3 = local_40;
        if (local_40[0] == '\0') {
          pcVar3 = &local_58;
        }
        local_58 = local_40[0];
        *pcVar3 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 == '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00b70580();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto joined_r0x0010ff0c;
      }
      FUN_00d23310();
      plVar7 = local_48;
      pcVar3 = &local_a0;
      if (local_40[0] != '\0') {
        pcVar3 = local_40;
      }
      local_a0 = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_68 = 0;
      if (local_a0 == '\0') {
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_68 = '\x01';
      local_70 = plVar7;
      FUN_01500300();
      plVar7 = (longlong *)CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (((plVar7 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) goto LAB_0010fe3f;
      local_40[0] = '\0';
      local_48 = plVar7;
      cVar2 = FUN_00d23d70();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
LAB_0010fe37:
        FUN_00d50b20();
        goto LAB_0010fe3f;
      }
      FUN_01f27fe0();
      FUN_002a0320();
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_0010fe37;
      }
      cVar2 = '\x01';
      FUN_00d50b20();
LAB_0010ff0e:
      FUN_00d50b20();
    }
    else {
      cVar2 = '\x01';
joined_r0x0010ff0c:
      if (plVar5 != (longlong *)0x0) goto LAB_0010ff0e;
    }
    uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    if (cVar2 == '\0') goto LAB_0010ff1d;
  }
  FUN_00d50b20();
LAB_0010ff27:
  return uVar6 & 0xffffffff;
}



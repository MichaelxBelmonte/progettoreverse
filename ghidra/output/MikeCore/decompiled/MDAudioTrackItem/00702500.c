// Function: FUN_00702500
// Address: 00702500
// Size: 1761 bytes
// Class: MDAudioTrackItem


ulonglong FUN_00702500(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  ulonglong uVar9;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  char *pcVar10;
  undefined8 *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  undefined4 local_8c;
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 local_70;
  int local_68;
  longlong local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_8c = unaff_ESI;
  if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar5 = *(longlong *)(unaff_RDI + 0xa0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    iVar2 = FUN_01c446f0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (iVar2 == 0) {
      uVar9 = 0;
      goto LAB_00702bd6;
    }
  }
  local_a8 = CONCAT44(local_a8._4_4_,param_2);
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x2572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_002eacb0();
  lVar1 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_78 = lVar1;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar2 = -local_70._4_4_;
        }
        else {
          iVar2 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar2);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar2 = 0;
        }
        local_70 = CONCAT44(iVar2,(int)local_70);
      }
      lVar5 = (longlong)(int)local_70;
      iVar2 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar2);
      if (*(int *)(local_78 + 0xc) <= iVar2) break;
      local_88 = *(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      lVar5 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\0';
      local_60 = lVar5;
      FUN_00d214d0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    lVar5 = local_78;
    FUN_000be170();
    pVar8 = (pthread_key_t)lVar5;
    FUN_00d50b20();
  }
  if (*(int *)((longlong)puVar4 + 0xc) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_00d23310();
    lVar5 = local_88;
    local_50 = local_80[0];
    pcVar7 = &local_50;
    if (local_80[0] != '\0') {
      pcVar7 = local_80;
    }
    *pcVar7 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_012ccc80();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_a8 == '\x01' && (char)uVar3 == '\0') {
      FUN_006f3f00();
      local_a8 = local_60;
      FUN_00d23310();
      lVar5 = local_88;
      local_40[0] = local_80[0];
      pcVar7 = local_40;
      if (local_80[0] != '\0') {
        pcVar7 = local_80;
      }
      *pcVar7 = '\0';
      if ((local_80[0] != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      local_b0 = 0;
      local_b8 = CONCAT71(uStack_4f,local_50);
      local_e8 = puVar4;
      if (local_48 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
        if ((char)local_8c != '\0') goto LAB_0070296f;
LAB_00702a12:
        local_b0 = '\x01';
        local_e0 = '\0';
        local_c0 = '\0';
        local_c8 = 0;
        local_a0 = 0;
      }
      else {
        local_48 = '\0';
        if ((char)local_8c == '\0') goto LAB_00702a12;
LAB_0070296f:
        local_b0 = '\x01';
        local_e0 = '\0';
        FUN_00d23310();
        unaff_RDI = local_88;
        pcVar7 = local_38;
        pcVar10 = local_80;
        if (local_80[0] == '\0') {
          pcVar10 = pcVar7;
        }
        local_38[0] = local_80[0];
        *pcVar10 = '\0';
        if ((local_80[0] != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        pVar8 = (pthread_key_t)pcVar7;
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01267000();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_a0 = local_c8;
        local_98 = 0;
        if (local_c0 == '\0') {
          if (local_c8 == 0) {
            local_a0 = 0;
          }
          else {
            FUN_00d50b00();
          }
        }
        else {
          local_c0 = '\0';
        }
      }
      lVar1 = local_a8;
      local_98 = '\x01';
      FUN_0076fba0(1,&local_e8,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_8c != '\0') {
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (unaff_RDI != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      uVar9 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    else {
      uVar9 = (ulonglong)uVar3 ^ 1;
    }
  }
  FUN_00d50b20();
LAB_00702bd6:
  return uVar9 & 0xffffffff;
}



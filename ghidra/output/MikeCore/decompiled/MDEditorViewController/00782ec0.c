// Function: FUN_00782ec0
// Address: 00782ec0
// Size: 3385 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x007835da) */
/* WARNING: Removing unreachable block (ram,0x007836c2) */
/* WARNING: Removing unreachable block (ram,0x007836ce) */
/* WARNING: Removing unreachable block (ram,0x00783a13) */
/* WARNING: Removing unreachable block (ram,0x00783a1f) */
/* WARNING: Removing unreachable block (ram,0x007830d2) */
/* WARNING: Removing unreachable block (ram,0x007830de) */

void FUN_00782ec0(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  undefined8 **ppuVar11;
  int iVar12;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 *unaff_R12;
  undefined4 uVar13;
  longlong local_188;
  undefined1 local_180;
  longlong *local_178;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  undefined8 *local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  char local_38;
  
  local_178 = param_2;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  pcVar1 = DAT_02572370;
  local_98 = puVar2;
  (*DAT_02572370)();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*pcVar1)();
  local_90 = puVar2;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*pcVar1)();
  if (*unaff_RSI == 0) {
    local_60 = 0;
    local_48 = (undefined8 *)0x0;
    lVar10 = *local_178;
    lVar3 = local_78;
  }
  else {
    local_80[0] = '\0';
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_60 = 0;
    local_48 = (undefined8 *)0x0;
    local_78 = *unaff_RSI;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar12 = -local_70._4_4_;
        }
        else {
          iVar12 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar12 = 0;
        }
        local_70 = CONCAT44(iVar12,(int)local_70);
      }
      lVar3 = (longlong)(int)local_70;
      iVar12 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar12);
      if (*(int *)(local_78 + 0xc) <= iVar12) break;
      puVar6 = *(undefined8 **)(local_78 + 0x10);
      local_88 = puVar6[lVar3 + 1];
      FUN_00782800();
      FUN_004f9cf0();
      puVar7 = (undefined8 *)CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_38 = '\0';
      local_40 = puVar7;
      FUN_00d23480();
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e60a0();
      local_c0 = 0;
      local_c8 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_c0 = '\x01';
      uVar5 = FUN_0141af60();
      puVar7 = local_40;
      if (local_40 == local_48) {
        if (((char)local_60 != '\0') || (local_40 == (undefined8 *)0x0)) {
          unaff_R12 = (undefined8 *)(local_60 & 0xffffffff);
          goto joined_r0x0078321d;
        }
        puVar7 = local_48;
        if (local_38 == '\0') {
          FUN_00d50b00();
          puVar7 = local_48;
          goto joined_r0x00783539;
        }
LAB_007831b5:
        local_38 = '\0';
        local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        local_48 = puVar7;
      }
      else {
        if (local_38 != '\0') {
          if (((char)local_60 != '\0') && (local_48 != (undefined8 *)0x0)) {
            uVar5 = FUN_00d50b20();
          }
          goto LAB_007831b5;
        }
        if (local_40 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        if (((char)local_60 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
joined_r0x00783539:
        unaff_R12 = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
        local_48 = puVar7;
joined_r0x0078321d:
        if ((local_38 == '\0') || (local_40 == (undefined8 *)0x0)) {
          local_60 = (ulonglong)unaff_R12 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_60 = (ulonglong)unaff_R12 & 0xffffffff;
        }
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_012e6040();
      if (iVar12 != 0) {
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
        unaff_R12 = local_48;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), unaff_R12 = local_48, lVar3 != 0)) {
          puVar6 = local_48;
          unaff_R12 = (undefined8 *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        pVar9 = (pthread_key_t)puVar6;
        (**(code **)(*unaff_RDI + 0x628))();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_a0 = 0;
        local_a8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_a0 = '\x01';
        FUN_016cbba0();
        local_b8 = local_40;
        local_b0 = 0;
        if (local_38 == '\0') {
          if (local_40 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_b0 = '\x01';
        FUN_0141bb40();
        if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(uStack_d7,local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_000be170();
    lVar10 = *local_178;
    lVar3 = local_78;
  }
  local_78 = lVar10;
  if (local_78 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    while( true ) {
      lVar3 = (longlong)(int)local_70;
      iVar12 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar12);
      if (*(int *)(local_78 + 0xc) <= iVar12) break;
      lVar10 = *(longlong *)(local_78 + 0x10);
      local_88 = *(longlong *)(lVar10 + 8 + lVar3 * 8);
      FUN_004f9cf0();
      pVar9 = (pthread_key_t)lVar10;
      lVar3 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_38 = '\0';
      local_40 = (undefined8 *)lVar3;
      FUN_00d23480();
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_0250d198;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      lVar3 = puVar6[2];
      puVar7 = (undefined8 *)lVar3;
      if ((undefined8 *)lVar3 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
            goto LAB_00783763;
          }
          FUN_00d50b00();
          lVar3 = puVar6[2];
          puVar6[2] = local_40;
          puVar7 = local_40;
        }
        else {
          local_38 = '\0';
          puVar7 = local_40;
LAB_00783763:
          puVar6[2] = puVar7;
        }
        pVar9 = (pthread_key_t)lVar3;
        if (lVar3 != 0) {
          FUN_00d50b20();
          puVar7 = local_40;
        }
      }
      if ((local_38 != '\0') && (puVar7 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2610();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar13 = FUN_012a46e0();
      *(undefined4 *)(puVar6 + 3) = uVar13;
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_012e6040();
      *(bool *)((longlong)puVar6 + 0x1c) = iVar12 == 2;
      local_38 = '\0';
      local_40 = puVar6;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar12 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar12 = 0;
        }
        local_70 = CONCAT44(iVar12,(int)local_70);
      }
    }
    FUN_000be170();
    lVar3 = local_78;
  }
  local_78 = lVar3;
  local_118 = local_90;
  local_110 = '\0';
  local_100 = '\0';
  local_f8 = local_48;
  local_f0 = '\0';
  ppuVar11 = &local_108;
  local_108 = puVar2;
  FUN_0164bd30(ppuVar11,&local_118,&local_f8);
  lVar3 = local_88;
  pVar9 = (pthread_key_t)ppuVar11;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    (**(code **)(*unaff_RDI + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    lVar3 = local_88;
    local_d8 = local_80[0];
    pcVar8 = &local_d8;
    if (local_80[0] != '\0') {
      pcVar8 = local_80;
    }
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    uVar13 = FUN_00d23310();
    lVar10 = local_88;
    pcVar8 = local_80;
    if (local_80[0] == '\0') {
      pcVar8 = &local_58;
    }
    local_58 = local_80[0];
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_58 == '\0') && (lVar10 != 0)) {
      uVar13 = FUN_00d50b00();
    }
    local_188 = lVar10;
    local_180 = 1;
    FUN_007649a0(uVar13,&local_188);
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



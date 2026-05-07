// Function: FUN_00709640
// Address: 00709640
// Size: 3820 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x00709a36) */
/* WARNING: Removing unreachable block (ram,0x00709a42) */

void FUN_00709640(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  longlong local_210;
  char local_208;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  undefined8 *local_180;
  char local_178;
  undefined8 *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  char local_140;
  undefined7 uStack_13f;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  if ((DAT_0280c938 == (longlong *)0x0) || (DAT_0280c941 == '\0')) {
    FUN_00e8cb50();
    if (DAT_0280c938 == (longlong *)0x0) {
      FUN_00b7ace0();
      local_120 = local_60;
      local_118 = 0;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_118 = '\x01';
      FUN_0070afe0();
      plVar8 = DAT_0280c938;
      if (DAT_0280c938 != local_98) {
        if (local_90[0] == '\0') {
          if (local_98 == (longlong *)0x0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar8 = local_98;
          }
        }
        else {
          local_90[0] = '\0';
          plVar8 = local_98;
        }
        bVar12 = DAT_0280c938 != (longlong *)0x0;
        DAT_0280c938 = plVar8;
        if (bVar12) {
          FUN_00d50b20();
          plVar8 = local_98;
        }
      }
      if ((plVar8 != (longlong *)0x0) && (DAT_0280c940 == '\0')) {
        DAT_0280c940 = '\x01';
        FUN_00e8cb90();
        plVar8 = local_98;
      }
      if ((local_90[0] != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = DAT_0280c938;
      uVar13 = FUN_00b6ff00();
      local_98 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_90[0] = '\0';
      FUN_00d214d0(uVar13,*(undefined4 *)((longlong)plVar8 + 0xc));
      if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      DAT_0280c941 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_0280c941 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar2 = local_98;
  plVar8 = DAT_0280c938;
  local_148 = 0;
  if (DAT_0280c938 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar6 = DAT_027296a0;
  local_150 = plVar8;
  local_148 = '\x01';
  if (DAT_027296a0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02727af0;
  if (DAT_02727af0 != 0) {
    FUN_00d50b00();
  }
  local_1e0 = lVar1;
  local_1d8 = '\x01';
  local_1d0 = 0;
  local_1c8 = '\0';
  FUN_00d31230(&local_1d0,&local_1e0);
  local_110 = local_60;
  local_108 = 0;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_108 = '\x01';
  FUN_01f4f940(0,&local_150,1,&local_110);
  if (local_90[0] == '\0') {
    if (((local_98 != (longlong *)0x0) && (FUN_00d50b00(), local_90[0] != '\0')) &&
       (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90[0] = '\0';
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar8 = (longlong *)&DAT_02572358;
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_98 != (longlong *)0x0) {
    local_90[0] = '\0';
    local_98 = (longlong *)0x0;
    local_88 = plVar2;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_80._4_4_ = 0;
    while( true ) {
      if (local_80._4_4_ != 0) {
        if (local_80._4_4_ < 1) {
          iVar11 = -local_80._4_4_;
        }
        else {
          iVar11 = (int)local_80 - local_80._4_4_;
          local_80 = CONCAT44(local_80._4_4_,iVar11);
          FUN_00d23690();
          local_78 = local_78 + local_80._4_4_;
          iVar11 = 0;
        }
        local_80 = CONCAT44(iVar11,(int)local_80);
      }
      lVar6 = (longlong)(int)local_80;
      iVar11 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar11);
      if (*(int *)((longlong)local_88 + 0xc) <= iVar11) break;
      local_98 = *(longlong **)(local_88[2] + 8 + lVar6 * 8);
      local_1b8 = '\0';
      local_1c0 = local_98;
      FUN_00b810f0();
      plVar8 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00b875e0();
        iVar11 = FUN_00b88670();
        if (iVar11 == 1) {
          FUN_00b88600();
          local_100 = local_70;
          local_f8 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_f8 = '\x01';
          FUN_00b84ae0();
          plVar3 = local_60;
          if (local_58 == '\0') {
            if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_58 = '\0';
          local_60 = (longlong *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_50 = puVar5;
          while( true ) {
            lVar6 = (longlong)(int)local_48;
            iVar11 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar11);
            if (*(int *)((longlong)local_50 + 0xc) <= iVar11) break;
            local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
            FUN_00b88600();
            local_d8 = 0;
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_a0 = '\0';
            }
            local_d8 = '\x01';
            local_e0 = local_a8;
            FUN_00b84ae0();
            local_f0 = local_70;
            local_e8 = 0;
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_e8 = '\x01';
            cVar4 = (**(code **)(*plVar3 + 0x50))();
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if (cVar4 != '\0') {
              FUN_002d7370();
              goto LAB_00709ad5;
            }
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar11 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar11 = 0;
              }
              local_48 = CONCAT44(iVar11,(int)local_48);
            }
          }
          FUN_002d7370();
          local_58 = '\0';
          local_60 = plVar8;
          FUN_00d21140();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar3 != (longlong *)0x0) {
LAB_00709ad5:
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
          local_60 = plVar8;
          FUN_00d21140();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    plVar8 = local_88;
    FUN_00115910();
  }
  if (0 < *(int *)((longlong)puVar5 + 0xc)) {
    FUN_006f3f00();
    lVar6 = local_130;
    FUN_00757c60();
    pvVar7 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar7 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    pVar9 = (pthread_key_t)plVar8;
    if (*(int *)((longlong)local_60 + 0xc) == 1) {
      FUN_006f3f00();
      FUN_00757c60();
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar8 >> 8),local_90[0]);
      pcVar10 = local_38;
      if (local_90[0] != '\0') {
        pcVar10 = local_90;
      }
      local_38[0] = local_90[0];
      *pcVar10 = '\0';
      if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      bVar12 = *(int *)(local_1b0 + 0xc) == 0;
      if (local_1a8 != '\0') {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (CONCAT71(uStack_13f,local_140) != 0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar12 = false;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if (bVar12) {
      FUN_006f3f00();
      plVar8 = local_60;
      local_178 = '\0';
      local_180 = puVar5;
      FUN_006f3f00();
      FUN_00757c60();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      pcVar10 = &local_140;
      if (local_90[0] != '\0') {
        pcVar10 = local_90;
      }
      local_140 = local_90[0];
      *pcVar10 = '\0';
      if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = 0;
      if (local_140 == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_140 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_98;
      FUN_0075edc0(0,&local_d0);
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_006f3f00();
      local_168 = '\0';
      local_160 = 0;
      local_158 = '\0';
      local_170 = puVar5;
      FUN_0075edc0(0,&local_160);
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90[0] != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



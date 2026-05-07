// Function: FUN_01c42b30
// Address: 01c42b30
// Size: 3758 bytes
// Class: MDMetaWindowController


void FUN_01c42b30(undefined8 param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar9;
  undefined1 local_1c8 [8];
  undefined1 local_1c0;
  undefined1 local_1b8 [8];
  undefined1 local_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  double local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  double local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RDI == 0) {
    return;
  }
  if (*unaff_RSI == 0) {
    return;
  }
  local_90 = param_2;
  local_48 = (double)param_1;
  FUN_00d403d0();
  local_158 = DAT_027ebbf0;
  if (DAT_027ebbf0 != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  local_148 = *unaff_RDI;
  local_140 = '\0';
  local_138 = 0;
  local_130 = '\0';
  plVar8 = &local_138;
  FUN_00d40470(plVar8,&local_148,3,3);
  pVar7 = (pthread_key_t)plVar8;
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = (double)FUN_01c441c0(local_48,0);
  if (DAT_028b66e8 != 0) {
    if (*(int *)(DAT_028b66e8 + 0x1c8) == 1) {
      lVar1 = *(longlong *)(DAT_028b66e8 + 0x188);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016d8300();
      if (local_40 == 0) {
        cVar5 = '\0';
      }
      else {
        lVar2 = *(longlong *)(DAT_028b66e8 + 0x188);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_016c2730();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        lVar1 = *(longlong *)(DAT_028b66e8 + 0x188);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_120 = '\x01';
        local_128 = lVar1;
        FUN_016cbba0();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c2660();
        local_88 = local_40;
        local_80 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = '\x01';
        FUN_016eae50(local_90 / local_48);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = *(longlong *)(DAT_028b66e8 + 0x188);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        uVar9 = FUN_01c44d20();
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_1c0 = 1;
        FUN_01c44700(uVar9,local_1c8);
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (*(char *)(DAT_028b66e8 + 400) != '\0') {
          uVar9 = FUN_01c44e90();
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              uVar9 = FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          lVar2 = *unaff_RDI;
          local_40 = local_a8;
          local_38 = '\0';
          local_58 = lVar1;
          local_50 = '\0';
          local_190 = 0;
          local_198 = lVar2;
          uVar9 = FUN_01c78b10(uVar9,&local_198);
          local_188 = local_a8;
          local_180 = 0;
          local_178 = lVar1;
          local_170 = 0;
          local_160 = 0;
          local_168 = lVar2;
          FUN_01c79050(uVar9,&local_168);
          if (local_a8 != 0) {
            FUN_00d50b20();
          }
        }
        if (*unaff_RDI != 0) {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c1150();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01c438ee;
      }
      if (DAT_028b66e8 == 0) goto LAB_01c42e9e;
    }
    if (*(int *)(DAT_028b66e8 + 0x1c8) != 1) {
      lVar1 = *(longlong *)(DAT_028b66e8 + 0x188);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      local_118 = lVar1;
      FUN_016cbba0();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(DAT_028b66e8 + 0x210);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      cVar5 = FUN_016bf360();
      pVar7 = 0x2802558;
      if (cVar5 == '\0') {
        pvVar6 = _pthread_getspecific(0x2802558);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c2660();
        local_78 = local_40;
        local_70 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_70 = '\x01';
        FUN_016eae50(local_90 / local_48);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar6 = _pthread_getspecific(0x2802558);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_100 = '\0';
        local_108 = lVar2;
        local_48 = (double)FUN_016cdc10();
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        FUN_016bf450();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_f0 = '\0';
        local_f8 = lVar2;
        FUN_00e7bdb0();
        FUN_016dbc00(0,local_90 / local_48,*(undefined4 *)(DAT_028b66e8 + 0x1c8),0);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar3 = *(longlong *)(DAT_028b66e8 + 0x188);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_1b0 = 1;
      uVar9 = FUN_00e7bdb0();
      FUN_01c45410(uVar9,local_1b8);
      pVar7 = (pthread_key_t)uVar9;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (*(char *)(DAT_028b66e8 + 400) != '\0') {
        uVar9 = FUN_01c44e90();
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        lVar3 = *unaff_RDI;
        local_40 = local_a8;
        local_38 = '\0';
        local_58 = lVar1;
        local_50 = '\0';
        local_190 = 0;
        local_198 = lVar3;
        uVar9 = FUN_01c78b10(uVar9,&local_198);
        local_188 = local_a8;
        local_180 = 0;
        local_178 = lVar1;
        local_170 = 0;
        local_160 = 0;
        local_168 = lVar3;
        FUN_01c79050(uVar9,&local_168);
        if (local_a8 != 0) {
          FUN_00d50b20();
        }
      }
      if (*unaff_RDI != 0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01c438ee;
    }
  }
LAB_01c42e9e:
  local_e8 = *unaff_RDI;
  local_e0 = '\0';
  FUN_016cbba0();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_98 = lVar1;
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c2660();
  local_68 = local_40;
  local_60 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = '\x01';
  FUN_016eae50(local_90 / local_48);
  lVar1 = local_98;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_1a0 = 1;
  uVar9 = FUN_00e7bdb0();
  FUN_01c45410(uVar9,local_1a8);
  pVar7 = (pthread_key_t)uVar9;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (*unaff_RDI != 0) {
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_01c438ee:
  FUN_00d403d0();
  local_d8 = DAT_02702310;
  if (DAT_02702310 != 0) {
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  local_c8 = *unaff_RDI;
  local_c0 = '\0';
  local_b8 = 0;
  local_b0 = '\0';
  FUN_00d40470(&local_b8,&local_c8,3,3);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}



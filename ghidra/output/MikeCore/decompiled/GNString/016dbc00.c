// Function: FUN_016dbc00
// Address: 016dbc00
// Size: 3506 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_016dbc00(double param_1,double param_2,int param_3,ulonglong param_4)

{
  char cVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  pthread_key_t in_ECX;
  pthread_key_t pVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined8 in_RDX;
  ulonglong *puVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  byte bVar13;
  undefined7 uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  undefined1 local_188;
  undefined8 *local_180;
  undefined1 local_178;
  undefined8 *local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  longlong local_150;
  undefined1 local_148;
  undefined8 *local_140;
  undefined1 local_138;
  longlong local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  ulonglong local_110;
  undefined1 local_108;
  ulonglong local_100;
  undefined1 local_f8;
  undefined8 *local_f0;
  undefined1 local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  ulonglong local_d0;
  int local_c4;
  undefined8 *local_c0;
  ulonglong local_b8;
  char local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  int local_6c;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  pthread_key_t local_44;
  ulonglong local_40;
  char local_38 [8];
  
  param_4 = param_4 & 0xffffffff;
  if (((*(int *)(*unaff_RSI + 0x10) == 0) && (*(int *)(*unaff_RSI + 0x18) == 0)) && (param_3 == 1))
  {
    param_4 = 0;
    goto LAB_016dc7e4;
  }
  bVar13 = (byte)param_4;
  local_a0 = param_2;
  local_98 = param_1;
  local_88 = in_RDX;
  local_6c = param_3;
  local_44 = in_ECX;
  if (bVar13 != 0) {
    FUN_016d7580();
  }
  uVar14 = (undefined7)(param_4 >> 8);
  if ((local_98 == 0.0) && (!NAN(local_98))) {
    if ((local_a0 == DAT_0238fee8) && (!NAN(local_a0) && !NAN(DAT_0238fee8))) {
      if (*(longlong *)(unaff_RDI + 0x78) != 0) {
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_018fe5d0();
        param_4 = CONCAT71(uVar14,1);
        if (cVar1 != '\0') goto LAB_016dc7e4;
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_025fa538;
      uVar4 = _UNK_02393728;
      *(undefined8 *)((longlong)puVar3 + 0xc) = _DAT_02393720;
      *(undefined8 *)((longlong)puVar3 + 0x14) = uVar4;
      FUN_00d500e0();
      uVar4 = FUN_00e7bdb0();
      *(undefined8 *)((longlong)puVar3 + 0x14) = uVar4;
      *(undefined8 *)((longlong)puVar3 + 0xc) = uVar4;
      local_190 = *unaff_RSI;
      local_188 = 0;
      local_178 = 0;
      local_180 = puVar3;
      FUN_016d23e0(local_44,&local_190,local_6c,bVar13 ^ 1);
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      local_170 = puVar3;
      FUN_016dcbf0(local_44,&local_160);
      param_4 = CONCAT71((int7)(param_4 >> 8),1);
      FUN_00d50b20();
      goto LAB_016dc7e4;
    }
  }
  uVar6 = *(ulonglong *)(*unaff_RSI + 0x14);
  if (*(int *)(*unaff_RSI + 0x10) == 0) {
    if (uVar6 >> 0x20 != 0) goto LAB_016dbe2b;
  }
  else if ((uVar6 >> 0x20 == 0) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
LAB_016dbe2b:
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_018fe5d0();
      if (cVar1 != '\0') goto LAB_016dbe7d;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_025fa538;
    uVar4 = _UNK_02393728;
    *(undefined8 *)((longlong)puVar3 + 0xc) = _DAT_02393720;
    *(undefined8 *)((longlong)puVar3 + 0x14) = uVar4;
    FUN_00d500e0();
    uVar4 = FUN_00e7bdb0();
    *(undefined8 *)((longlong)puVar3 + 0x14) = uVar4;
    *(undefined8 *)((longlong)puVar3 + 0xc) = uVar4;
    local_150 = *unaff_RSI;
    local_148 = 0;
    local_138 = 0;
    pVar9 = local_44;
    local_140 = puVar3;
    local_c0 = puVar3;
    FUN_016d23e0(local_44,&local_150,local_6c,bVar13 ^ 1);
    local_78 = local_40;
    if ((local_38[0] == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    local_c4 = *(int *)(local_78 + 0xc);
    if (local_c4 != 0) {
      if (local_88._4_4_ == 0) {
        lVar8 = *unaff_RSI;
        uVar6 = *(ulonglong *)(lVar8 + 0xc);
        if (uVar6 >> 0x20 == 0) {
          uVar6 = FUN_00e7bdb0();
          lVar8 = *unaff_RSI;
        }
        local_40 = *(ulonglong *)(lVar8 + 0x14);
        pVar9 = (pthread_key_t)(local_40 >> 0x20);
        if (local_40 >> 0x20 == 0) {
          local_40 = FUN_00e7bdb0();
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,1);
          FUN_00e7c280();
        }
        local_60 = local_40;
        local_40 = uVar6;
        FUN_00e7b820();
        local_58 = CONCAT44(local_58._4_4_,2);
        FUN_00e7c3c0();
        FUN_00e7c860();
        local_88 = FUN_00e7cc50();
      }
      pvVar2 = _pthread_getspecific(pVar9);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar2 = _pthread_getspecific(pVar9);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = FUN_0165cf20(0,0);
      if (((((local_88._4_4_ == 0) || (local_40 >> 0x20 == 0)) ||
           (cVar1 = FUN_00e7c020(), cVar1 == '\0')) &&
          ((0xb < local_44 || ((0x920U >> (local_44 & 0x1f) & 1) == 0)))) && (local_44 != 0x15)) {
        FUN_00d23340();
        uVar6 = local_40;
        pcVar11 = local_38;
        local_58 = CONCAT71(local_58._1_7_,local_38[0]);
        pcVar7 = (char *)&local_58;
        if (local_38[0] != '\0') {
          pcVar7 = pcVar11;
        }
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (uVar6 != 0)) {
          FUN_00d50b20();
        }
        local_50 = uVar6;
        pVar9 = (pthread_key_t)pcVar11;
        pvVar2 = _pthread_getspecific(pVar9);
        if ((pvVar2 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar9 = (pthread_key_t)local_50;
        }
        FUN_019079b0();
        pvVar2 = _pthread_getspecific(pVar9);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar9 = 0;
        local_60 = FUN_0165cf20(0,0);
        if ((((local_88._4_4_ == 0) || (local_60 >> 0x20 == 0)) ||
            (cVar1 = FUN_00e7c020(), cVar1 == '\0')) &&
           ((0xd < local_44 || (pVar9 = local_44, (0x2480U >> (local_44 & 0x1f) & 1) == 0)))) {
          if (((char)local_58 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_44 == 0x14) goto LAB_016dc899;
          pvVar2 = _pthread_getspecific(pVar9);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = FUN_0165d690();
          FUN_016d72a0(extraout_XMM0_Qa_01,uVar4);
          local_50 = local_40;
          if (local_40 != 0) {
            local_80 = CONCAT71((int7)(local_40 >> 8),1);
            if (local_38[0] == '\0') {
              FUN_00d50b00();
            }
            goto LAB_016dc274;
          }
        }
        else {
          if (((char)local_58 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
LAB_016dc899:
          FUN_00d23340();
          uVar6 = local_40;
          puVar12 = (ulonglong *)local_38;
          if (local_38[0] == '\0') {
            puVar12 = &local_60;
          }
          local_60 = CONCAT71(local_60._1_7_,local_38[0]);
          *(undefined1 *)puVar12 = 0;
          if ((local_38[0] != '\0') && (uVar6 != 0)) {
            FUN_00d50b20();
          }
          local_50 = uVar6;
          if (uVar6 != 0) {
            local_80 = CONCAT71((int7)(uVar6 >> 8),1);
            if ((char)local_60 == '\0') {
              FUN_00d50b00();
            }
            goto LAB_016dc274;
          }
        }
        local_80 = 0;
      }
      else {
        local_50 = **(ulonglong **)(local_78 + 0x10);
        if (local_50 == 0) {
          local_80 = 0;
          local_50 = 0;
        }
        else {
          uVar4 = FUN_00d50b00();
          local_80 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        }
      }
LAB_016dc274:
      local_130 = *unaff_RSI;
      local_128 = 0;
      pVar9 = local_44;
      FUN_016db1f0(local_44,&local_130,local_6c);
      local_90 = local_40;
      if ((local_38[0] == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      local_58 = FUN_00e7bcc0();
      local_a8 = FUN_00e7bcc0();
      lVar8 = *unaff_RSI;
      if (*(int *)(lVar8 + 0x10) == 0) {
        uVar6 = FUN_00e7bdb0();
        uVar4 = extraout_XMM0_Qa;
      }
      else {
        pvVar2 = _pthread_getspecific(pVar9);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (*(ulonglong *)(lVar8 + 0xc) >> 0x20 == 0) {
          FUN_00e7bdb0();
        }
        uVar6 = FUN_0165d690();
        uVar4 = extraout_XMM0_Qa_00;
      }
      local_120 = *unaff_RSI;
      local_118 = 0;
      local_d0 = FUN_016cabc0(uVar4,0);
      local_110 = local_78;
      local_108 = 0;
      local_100 = local_50;
      local_f8 = 0;
      uVar10 = (ulonglong)local_44;
      cVar1 = FUN_016e0170(local_98,local_a0,local_6c,&local_58);
      if (cVar1 == '\0') {
        if ((*(longlong *)(unaff_RDI + 0x88) != 0) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x10) + 0x10) != 0)) {
          FUN_016d7580();
        }
      }
      else {
        local_f0 = local_c0;
        local_e8 = 0;
        local_e0 = local_90;
        local_d8 = 0;
        uVar10 = (ulonglong)local_44;
        FUN_016dcbf0(uVar10,&local_e0);
        if (bVar13 == 0) {
          FUN_016d63b0();
        }
        else {
          FUN_016d8330();
        }
      }
      local_40 = local_40 & 0xffffffff00000000;
      if ((local_58._4_4_ == 0) || (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
        pVar9 = (pthread_key_t)uVar10;
        lVar8 = *unaff_RSI;
        if (*(int *)(lVar8 + 0x10) != 0) {
          local_40 = uVar6;
          FUN_00e7b820();
          param_4 = local_40;
          pvVar2 = _pthread_getspecific(pVar9);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = FUN_0165cf20(0,0);
          local_40 = uVar6;
          local_60 = FUN_00e7bdb0();
          uVar10 = uVar6 >> 0x20;
          if (((uVar10 != 0) && (local_60 >> 0x20 != 0)) &&
             (cVar1 = FUN_00e7c000(), uVar6 = local_40, cVar1 != '\0')) {
            uVar6 = FUN_00e7bdb0();
          }
          *(ulonglong *)(lVar8 + 0xc) = uVar6;
          lVar8 = *unaff_RSI;
        }
        pVar9 = (pthread_key_t)uVar10;
        if (*(int *)(lVar8 + 0x18) != 0) {
          local_40 = local_d0;
          FUN_00e7b820();
          param_4 = local_40;
          pvVar2 = _pthread_getspecific(pVar9);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = FUN_0165cf20(0,0);
          local_60 = uVar6;
          local_40 = FUN_00e7bdb0();
          uVar10 = uVar6 >> 0x20;
          if (((uVar10 == 0) || (local_40 >> 0x20 == 0)) ||
             (cVar1 = FUN_00e7c000(), uVar6 = local_60, cVar1 == '\0')) {
            local_68._0_4_ = 1;
            local_40 = uVar6;
            FUN_00e7c260();
            uVar6 = local_40;
          }
          else {
            uVar6 = FUN_00e7bdb0();
          }
          *(ulonglong *)(lVar8 + 0x14) = uVar6;
        }
      }
      local_40 = local_40 & 0xffffffff00000000;
      if ((local_a8._4_4_ == 0) || (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
        FUN_00d23340();
        param_4 = local_40;
        pVar9 = (pthread_key_t)CONCAT71((int7)(uVar10 >> 8),local_38[0]);
        puVar12 = &local_68;
        if (local_38[0] != '\0') {
          puVar12 = (ulonglong *)local_38;
        }
        local_68._0_4_ = CONCAT31(local_68._1_3_,local_38[0]);
        *(char *)puVar12 = '\0';
        if ((local_38[0] != '\0') && (param_4 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(pVar9);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = FUN_019079b0();
        local_60 = *(ulonglong *)(unaff_RDI + 0x68);
        uVar4 = FUN_00e7b820();
        FUN_016e4c80(uVar4,local_40);
        if (((char)local_68 != '\0') && (param_4 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if (((char)local_80 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    param_4 = CONCAT71((int7)(param_4 >> 8),local_c4 != 0);
    FUN_00d50b20();
    goto LAB_016dc7e4;
  }
LAB_016dbe7d:
  if ((local_a0 != DAT_0238fee8) || (NAN(local_a0) || NAN(DAT_0238fee8))) {
    lVar8 = *(longlong *)(unaff_RDI + 0x50);
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      lVar8 = *(longlong *)(unaff_RDI + 0x50);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_b0 = '\x01';
    FUN_019040e0(local_a0);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_4 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
  }
  else {
    param_4 = CONCAT71(uVar14,1);
    if ((local_98 != 0.0) || (NAN(local_98))) {
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901eb0(local_98);
    }
  }
LAB_016dc7e4:
  return param_4 & 0xffffffff;
}



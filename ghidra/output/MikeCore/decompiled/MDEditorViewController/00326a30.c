// Function: FUN_00326a30
// Address: 00326a30
// Size: 2447 bytes
// Class: MDEditorViewController


void FUN_00326a30(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  undefined7 uVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  if (*(longlong *)(unaff_RDI + 0x148) == 0) goto LAB_003273a5;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar4 = FUN_00e8b990();
  if (lVar4 == 0) goto LAB_003273a5;
  FUN_00d50b00();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_48 + 0x450))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    local_58 = lVar4;
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = DAT_027024f0;
    if (DAT_027024f0 != 0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_00c841b0();
    plVar9 = local_48;
    if (local_48 == (longlong *)0x0) {
      local_50 = (longlong *)CONCAT44(local_50._4_4_,(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1))
      ;
      local_34 = 0;
    }
    else {
      if (local_40 == '\0') {
        uVar5 = FUN_00d50b00();
        local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
        local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00326b7d;
        uVar5 = FUN_00d50b20();
      }
      else {
        local_40 = '\0';
      }
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
    }
LAB_00326b7d:
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)(unaff_RDI + 0x138);
    local_a0 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
    FUN_00d50b00();
    local_a0 = '\x01';
    local_188 = 0;
    local_180 = '\0';
    local_178 = plVar9;
    local_170 = '\0';
    local_a8 = plVar1;
    FUN_00cbadd0(&local_178,&local_188);
    if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = DAT_027024f8;
    if (DAT_027024f8 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar4;
    local_160 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    uVar7 = (undefined7)((ulonglong)lVar4 >> 8);
    if (plVar9 == local_48) {
      uVar8 = local_34;
      if (((byte)local_50 & plVar9 != (longlong *)0x0) == 1) {
        if (local_40 != '\0') goto LAB_00326ce7;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar7,1);
      }
LAB_00326d3e:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = plVar9 != (longlong *)0x0;
        uVar8 = (undefined4)CONCAT71(uVar7,1);
        plVar9 = plVar10;
        if (((byte)local_34 & bVar11) == 1) {
          FUN_00d50b20();
        }
        goto LAB_00326d3e;
      }
      bVar11 = plVar9 != (longlong *)0x0;
      plVar9 = plVar10;
      if (((byte)local_34 & bVar11) == 1) {
        FUN_00d50b20();
        uVar6 = extraout_var;
      }
LAB_00326ce7:
      local_40 = '\0';
      uVar8 = (int)CONCAT71(uVar6,1);
    }
    local_34 = uVar8;
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    local_90 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_90 = '\x01';
    local_158 = 0;
    local_150 = '\0';
    local_140 = '\0';
    local_148 = plVar9;
    local_98 = plVar1;
    FUN_00cbadd0(&local_148,&local_158);
    if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = DAT_02702500;
    if (DAT_02702500 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar4;
    local_130 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    uVar6 = (undefined7)((ulonglong)lVar4 >> 8);
    if (plVar9 == local_48) {
      plVar10 = plVar9;
      uVar8 = local_34;
      if (((char)local_34 == '\0') && (plVar9 != (longlong *)0x0)) {
        if (local_40 != '\0') goto LAB_00326eb5;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar6,1);
      }
LAB_00326f25:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar8 = (undefined4)CONCAT71(uVar6,1);
        if (((char)local_34 != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00326f25;
      }
      if (((char)local_34 != '\0') && (plVar9 != (longlong *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
LAB_00326eb5:
      local_40 = '\0';
      uVar8 = (int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    local_34 = uVar8;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    local_80 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_80 = '\x01';
    local_128 = 0;
    local_120 = '\0';
    local_110 = '\0';
    local_118 = plVar10;
    local_88 = plVar1;
    FUN_00cbadd0(&local_118,&local_128);
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      (**(code **)(*local_88 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    uVar5 = FUN_00e86210();
    local_108 = DAT_02702508;
    if (DAT_02702508 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    FUN_00c841b0();
    uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    if (plVar10 == local_48) {
      uVar8 = local_34;
      plVar9 = plVar10;
      if (((char)local_34 == '\0') && (plVar10 != (longlong *)0x0)) {
        if (local_40 != '\0') goto LAB_0032708f;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar6,1);
      }
LAB_003270f4:
      local_50 = plVar9;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar8 = (undefined4)CONCAT71(uVar6,1);
        plVar9 = local_50;
        if (((char)local_34 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar9 = local_50;
        }
        goto LAB_003270f4;
      }
      plVar9 = local_50;
      if (((char)local_34 != '\0') && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar9 = local_50;
      }
LAB_0032708f:
      local_50 = plVar9;
      local_40 = '\0';
      uVar8 = (undefined4)CONCAT71(uVar6,1);
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    local_70 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_70 = '\x01';
    local_f8 = 0;
    local_f0 = '\0';
    local_e8 = local_50;
    local_e0 = '\0';
    local_78 = plVar1;
    FUN_00cbadd0(&local_e8,&local_f8);
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0015e380();
    FUN_00e86210();
    local_d8 = DAT_02702510;
    if (DAT_02702510 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    plVar9 = local_50;
    cVar2 = (char)uVar8;
    if (local_50 == local_48) {
      plVar10 = plVar9;
      local_34 = uVar8;
      if ((cVar2 == '\0') && (local_50 != (longlong *)0x0)) {
        if (local_40 != '\0') goto LAB_00327255;
        local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        FUN_00d50b00();
      }
LAB_003272af:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
          local_34 = (int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
        goto LAB_003272af;
      }
      if ((cVar2 != '\0') && (local_50 != (longlong *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
LAB_00327255:
      local_40 = '\0';
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_60 = '\x01';
    local_c8 = 0;
    local_c0 = '\0';
    local_b0 = '\0';
    local_b8 = plVar10;
    local_68 = plVar1;
    FUN_00cbadd0(&local_b8,&local_c8);
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if (((char)local_34 != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_003273a5:
  FUN_01a3d730();
  return;
}



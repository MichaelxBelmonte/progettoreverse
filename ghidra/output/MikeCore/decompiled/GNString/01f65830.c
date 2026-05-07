// Function: FUN_01f65830
// Address: 01f65830
// Size: 3389 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
//   "(%@ *)%p"
//   "\t%@: %@"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01f65830(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined7 uVar8;
  longlong *plVar7;
  int iVar9;
  longlong *unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_1b0;
  longlong local_1a8;
  char local_1a0;
  undefined1 *local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  undefined8 *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  undefined4 local_11c;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_01ce9490();
  local_88 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_11c = param_2;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  local_c8 = puVar4;
  uVar13 = FUN_01ce98e0();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      goto LAB_01f65915;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_01f65915:
    local_b8 = '\0';
    local_c0 = (longlong *)0x0;
    local_70 = plVar7;
    local_b0 = plVar7;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_a8._4_4_ = 0;
    local_198 = &DAT_026fdd40;
    while( true ) {
      if (local_a8._4_4_ != 0) {
        if (local_a8._4_4_ < 1) {
          iVar9 = -local_a8._4_4_;
        }
        else {
          iVar9 = (int)local_a8 - local_a8._4_4_;
          local_a8 = CONCAT44(local_a8._4_4_,iVar9);
          uVar13 = FUN_00d23690();
          local_a0 = local_a0 + local_a8._4_4_;
          iVar9 = 0;
        }
        local_a8 = CONCAT44(iVar9,(int)local_a8);
      }
      lVar5 = (longlong)(int)local_a8;
      iVar9 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,iVar9);
      if (*(int *)((longlong)local_b0 + 0xc) <= iVar9) break;
      plVar7 = *(longlong **)(local_b0[2] + 8 + lVar5 * 8);
      local_68 = plVar7;
      local_c0 = plVar7;
      if ((DAT_026fdd40 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_01, iVar9 != 0)) {
        _DAT_026cd0e8 = FUN_00d4fe50();
        DAT_026cd0d0 = "GNDictionary";
        _DAT_026cd0d8 = 0x28;
        _DAT_026cd0e0 = FUN_00022d20;
        _DAT_026cd0f0 = 0;
        uRam00000000026cd0f8 = 0;
        _DAT_026cd100 = 0;
        _DAT_026cd178 = 0;
        uRam00000000026cd180 = 0;
        _DAT_026cd188 = 0;
        DAT_026cd18a = 6;
        _DAT_026cd108 = 0;
        uRam00000000026cd110 = 0;
        _DAT_026cd118 = 0;
        uRam00000000026cd120 = 0;
        _DAT_026cd128 = 0;
        uRam00000000026cd130 = 0;
        _DAT_026cd138 = 0;
        uRam00000000026cd140 = 0;
        _DAT_026cd148 = 0;
        uRam00000000026cd150 = 0;
        _DAT_026cd158 = 0;
        uRam00000000026cd160 = 0;
        _DAT_026cd168 = 0;
        uRam00000000026cd170 = 0;
        DAT_026cd193 = 0;
        _DAT_026cd18b = 0;
        uVar13 = ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar6 = (longlong **)&DAT_02802688;
        uVar13 = extraout_XMM0_Da;
        if (cVar3 != '\0') {
          if ((DAT_026fd0c0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
            _DAT_026d5e58 = FUN_00d4fe50();
            DAT_026d5e40 = "GNString";
            _DAT_026d5e48 = 0x40;
            _DAT_026d5e50 = FUN_0005d920;
            _DAT_026d5e60 = 0;
            uRam00000000026d5e68 = 0;
            _DAT_026d5e70 = 0;
            uRam00000000026d5e78 = 0;
            _DAT_026d5e80 = 0;
            uRam00000000026d5e88 = 0;
            _DAT_026d5e90 = 0;
            uRam00000000026d5e98 = 0;
            _DAT_026d5ea0 = 0;
            uRam00000000026d5ea8 = 0;
            _DAT_026d5eb0 = 0;
            uRam00000000026d5eb8 = 0;
            _DAT_026d5ec0 = 0;
            uRam00000000026d5ec8 = 0;
            _DAT_026d5ed0 = 0;
            uRam00000000026d5ed8 = 0;
            _DAT_026d5ee0 = 0;
            uRam00000000026d5ee8 = 0;
            _DAT_026d5ef0 = 0;
            uRam00000000026d5ef8 = 0;
            _DAT_026d5f00 = 0;
            ___cxa_guard_release();
          }
          cVar3 = FUN_00e8db60();
          pplVar6 = &local_68;
          uVar13 = extraout_XMM0_Da_00;
          if (cVar3 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
      }
      plVar7 = local_c0;
      lVar5 = DAT_0276caa0;
      if (*pplVar6 != (longlong *)0x0) {
        if (local_a0 + (int)local_a8 == 0) {
          if (DAT_0276caa0 != 0) {
            uVar13 = FUN_00d50b00();
          }
          local_190 = lVar5;
          local_188 = '\x01';
          uVar13 = (**(code **)(*plVar7 + 0x88))(uVar13,&local_190);
          plVar7 = local_68;
          if (local_60 == '\0') {
            if (((local_68 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_60 != '\0')) &&
               (local_68 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d4efa0();
            FUN_00c7e7b0();
            local_80 = local_118;
            local_1b0 = plVar7;
            uVar13 = FUN_00083ea0(2,&local_1b0);
            FUN_00d8cb40(uVar13,&local_68);
            lVar5 = local_98;
            if (local_90 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_90 = '\0';
            }
            local_80 = (longlong *)lVar5;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            local_68 = (longlong *)&DAT_0253d630;
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            local_68 = &DAT_024c5048;
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1a0 != '\0') && (local_1a8 != 0)) {
              FUN_00d50b20();
            }
            uVar13 = FUN_00d50b20();
          }
        }
        plVar7 = local_c0;
        lVar5 = DAT_02704000;
        if (DAT_02704000 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_180 = lVar5;
        local_178 = '\x01';
        uVar13 = (**(code **)(*plVar7 + 0x88))(uVar13,&local_180);
        plVar7 = local_68;
        if (local_60 == '\0') {
          if (((local_68 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_178 != '\0') && (local_180 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        plVar10 = local_c0;
        lVar5 = DAT_027e7c20;
        if (DAT_027e7c20 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_170 = lVar5;
        local_168 = '\x01';
        uVar13 = (**(code **)(*plVar10 + 0x88))(uVar13,&local_170);
        plVar10 = local_68;
        if (local_60 == '\0') {
          if (((local_68 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((plVar7 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
          local_80 = plVar7;
          local_118 = plVar10;
          uVar13 = FUN_00083ea0(2,&local_118);
          FUN_00d8cb40(uVar13,&local_68);
          lVar5 = local_98;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_80 = (longlong *)lVar5;
          local_78 = '\0';
          uVar13 = FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if (lVar5 != 0) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          local_68 = (longlong *)&DAT_0253d630;
          if ((local_40 != '\0') && (local_48 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          local_68 = &DAT_024c5048;
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        if (plVar10 != (longlong *)0x0) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          uVar13 = FUN_00d50b20();
        }
      }
    }
    FUN_00d11cb0();
    FUN_00d50b20();
  }
  if (*(int *)((longlong)local_c8 + 0xc) == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    local_160 = local_c8;
    local_158 = '\0';
    uVar13 = FUN_00d92220();
    plVar7 = local_c0;
    local_e0 = 0;
    if (local_b8 == '\0') {
      if (local_c0 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_b8 = '\0';
    }
    local_e0 = '\x01';
    local_e8 = plVar7;
    FUN_00d95130(uVar13,&local_e8);
    plVar10 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      plVar7 = (longlong *)0x0;
    }
    else {
      uVar8 = (undefined7)((ulonglong)plVar7 >> 8);
      if (local_60 == '\0') {
        FUN_00d50b00();
        plVar7 = (longlong *)CONCAT71(uVar8,1);
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
        plVar7 = (longlong *)CONCAT71(uVar8,1);
      }
    }
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      bVar1 = false;
      plVar11 = (longlong *)0x0;
      goto LAB_01f6645c;
    }
  }
  local_70 = plVar7;
  if (*(int *)((longlong)local_88 + 0xc) < 2) {
    plVar11 = (longlong *)unaff_RDI[0x12];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      bVar1 = false;
    }
    else {
      FUN_00d50b00();
      bVar1 = true;
    }
  }
  else {
    local_100 = 0;
    lVar5 = unaff_RDI[0x11];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    local_108 = lVar5;
    FUN_01ceb020();
    local_d8 = local_c0;
    local_d0 = 0;
    if (local_b8 == '\0') {
      if (local_c0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b8 = '\0';
    }
    local_d0 = '\x01';
    (**(code **)(*unaff_RDI + 0x5c8))(&local_d8,&local_108);
    plVar7 = local_68;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      FUN_01ce9490();
      plVar11 = *(longlong **)
                 (local_88[2] + -0x10 + (longlong)*(int *)((longlong)local_68 + 0xc) * 8);
      bVar12 = plVar11 == (longlong *)0x0;
      if (bVar12) {
        plVar11 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      bVar1 = !bVar12;
      if ((local_60 != '\0') && (bVar1 = !bVar12, local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01ceb020();
      plVar11 = local_68;
      if (local_68 == (longlong *)0x0) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  local_f0 = 0;
  lVar5 = unaff_RDI[0x11];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  local_148 = '\0';
  local_150 = plVar11;
  local_f8 = lVar5;
  (**(code **)(*unaff_RDI + 0x5d8))(&local_150,&local_f8);
  plVar10 = local_68;
  if (local_68 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar7 = local_70;
joined_r0x01f66406:
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar8 = (undefined7)((ulonglong)local_70 >> 8);
    if (local_60 == '\0') {
      FUN_00d50b00();
      plVar7 = (longlong *)CONCAT71(uVar8,1);
      goto joined_r0x01f66406;
    }
    local_60 = '\0';
    plVar7 = (longlong *)CONCAT71(uVar8,1);
  }
  if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
LAB_01f6645c:
  if ((plVar10 != (longlong *)0x0) && ((char)local_11c != '\0')) {
    local_70 = plVar7;
    FUN_01ca6970();
    plVar2 = local_68;
    if ((local_60 == '\0') &&
       (((local_68 != (longlong *)0x0 && (FUN_00d50b00(), local_60 != '\0')) &&
        (local_68 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    uVar13 = FUN_01ca5d90();
    local_130 = DAT_026fceb8;
    local_138 = '\0';
    local_140 = plVar10;
    if (DAT_026fceb8 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_128 = '\x01';
    FUN_01ca93d0(uVar13,&local_130);
    plVar7 = local_70;
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (((char)plVar7 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return plVar10 != (longlong *)0x0;
}



// Function: FUN_00d105c0
// Address: 00d105c0
// Size: 2803 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d105c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong local_1f0;
  char local_1e8;
  undefined1 uVar9;
  longlong local_1d0;
  undefined1 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong *local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*unaff_RSI == 0) {
    return;
  }
  local_90 = param_2;
  cVar2 = (**(code **)(*unaff_RDI + 0x398))();
  uVar8 = extraout_XMM0_Da;
  if (cVar2 != '\0') {
    FUN_00d4efa0();
    local_1a0 = *local_90;
    local_198 = '\0';
    uVar8 = FUN_00c84370();
    plVar6 = local_68;
    local_38[0] = local_60[0];
    pcVar4 = local_38;
    if (local_60[0] != '\0') {
      pcVar4 = local_60;
    }
    *pcVar4 = '\0';
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_88 = plVar6;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (local_88 != (longlong *)0x0) {
      cVar2 = FUN_00d77e30();
      uVar8 = extraout_XMM0_Da_00;
      if (cVar2 == '\0') {
        FUN_00d77be0();
        plVar6 = local_68;
        pcVar4 = &local_80;
        if (local_60[0] != '\0') {
          pcVar4 = local_60;
        }
        local_80 = local_60[0];
        *pcVar4 = '\0';
        if ((local_60[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          cVar2 = FUN_00d77e10();
          if (cVar2 != '\0') {
            if (local_80 != '\0') {
              FUN_00d50b20();
            }
            if (local_38[0] == '\0') {
              return;
            }
            FUN_00d50b20();
            return;
          }
          if (local_80 != '\0') {
            FUN_00d50b20();
          }
        }
        uVar8 = FUN_00d77e40();
        plVar6 = local_68;
        pcVar4 = local_60;
        if (local_60[0] == '\0') {
          pcVar4 = local_40;
        }
        local_40[0] = local_60[0];
        *pcVar4 = '\0';
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          uVar8 = FUN_00c81c90();
          plVar6 = local_68;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00d107b2;
            }
          }
          else if (local_68 != (longlong *)0x0) {
LAB_00d107b2:
            local_60[0] = '\0';
            local_68 = (longlong *)0x0;
            local_58 = plVar6;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar3 = -local_50._4_4_;
                }
                else {
                  iVar3 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar3);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar3 = 0;
                }
                local_50 = CONCAT44(iVar3,(int)local_50);
              }
              lVar5 = (longlong)(int)local_50;
              iVar3 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar3);
              if (*(int *)((longlong)local_58 + 0xc) <= iVar3) break;
              local_68 = *(longlong **)(local_58[2] + 8 + lVar5 * 8);
              cVar2 = FUN_00d77e10();
              if (cVar2 != '\0') {
                FUN_00d76a90();
                if (CONCAT71(uStack_7f,local_80) == 0) {
                  bVar7 = false;
                  lVar5 = 0;
                }
                else {
                  FUN_00d76a90();
                  local_190 = *local_90;
                  local_188 = '\0';
                  cVar2 = (**(code **)(*local_e0 + 0x50))();
                  if (cVar2 == '\0') {
                    bVar7 = false;
                  }
                  else {
                    FUN_00d76b90();
                    bVar7 = local_1f0 != 0;
                    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_188 != '\0') && (local_190 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  lVar5 = CONCAT71(uStack_7f,local_80);
                }
                if ((local_78 != '\0') && (lVar5 != 0)) {
                  FUN_00d50b20();
                }
                if (bVar7) {
                  FUN_00559a70();
                  FUN_00d50b20();
                  if (local_40[0] != '\0') {
                    FUN_00d50b20();
                  }
                  if (local_38[0] == '\0') {
                    return;
                  }
                  FUN_00d50b20();
                  return;
                }
              }
            }
            FUN_00559a70();
            uVar8 = FUN_00d50b20();
          }
          if (local_40[0] != '\0') {
            uVar8 = FUN_00d50b20();
          }
        }
      }
      if (local_38[0] != '\0') {
        uVar8 = FUN_00d50b20();
      }
    }
  }
  if (*(char *)((longlong)unaff_RDI + 0x71) != '\0') {
    plVar6 = (longlong *)unaff_RDI[10];
    local_180 = *unaff_RSI;
    local_178 = '\0';
    local_170 = *local_90;
    local_168 = '\0';
    local_c8 = 0;
    lVar5 = unaff_RDI[0xf];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_d0 = lVar5;
    cVar2 = (**(code **)(*plVar6 + 0x270))(&local_d0,&local_170);
    uVar8 = extraout_XMM0_Da_01;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      return;
    }
  }
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_027048b0 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_04, iVar3 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    _DAT_026cd470 = FUN_00018210;
    _DAT_026cd480 = 0;
    uRam00000000026cd488 = 0;
    _DAT_026cd490 = 0;
    _DAT_026cd508 = 0;
    uRam00000000026cd510 = 0;
    _DAT_026cd518 = 0;
    DAT_026cd51a = 6;
    _DAT_026cd498 = 0;
    uRam00000000026cd4a0 = 0;
    _DAT_026cd4a8 = 0;
    uRam00000000026cd4b0 = 0;
    _DAT_026cd4b8 = 0;
    uRam00000000026cd4c0 = 0;
    _DAT_026cd4c8 = 0;
    uRam00000000026cd4d0 = 0;
    _DAT_026cd4d8 = 0;
    uRam00000000026cd4e0 = 0;
    _DAT_026cd4e8 = 0;
    uRam00000000026cd4f0 = 0;
    _DAT_026cd4f8 = 0;
    uRam00000000026cd500 = 0;
    DAT_026cd523 = 0;
    _DAT_026cd51b = 0;
    uVar8 = ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    uVar8 = extraout_XMM0_Da_02;
    if (cVar2 != '\0') goto LAB_00d10a79;
  }
  plVar6 = &DAT_02802688;
LAB_00d10a79:
  lVar5 = plVar6[1];
  if (((char)lVar5 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 == 0) {
      local_140 = unaff_RDI[10];
      local_138 = '\0';
      FUN_00d0a070(plVar6,&local_140);
      plVar6 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      uVar9 = 0;
      cVar2 = FUN_00d099c0();
      if (cVar2 == '\0') {
        local_120 = *unaff_RSI;
        local_118 = '\0';
        uVar8 = FUN_019a54a0(extraout_XMM0_Da_03,&local_120,param_3,param_4,uVar9);
        plVar1 = local_68;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if (plVar1 == (longlong *)0x0) {
          local_1d0 = *unaff_RSI;
          local_1c8 = 0;
          uVar8 = FUN_00d09d20(uVar8,&local_1d0);
          local_c0 = local_68;
          local_b8 = 0;
          if ((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) {
            uVar8 = FUN_00d50b00();
          }
          local_b8 = '\x01';
          local_110 = *unaff_RSI;
          local_108 = '\0';
          FUN_019b43b0(uVar8,&local_110);
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_100 = *unaff_RSI;
          local_f8 = '\0';
          uVar8 = FUN_00d21140();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        if (*(char *)((longlong)unaff_RDI + 0x71) != '\0') {
          local_f0 = *unaff_RSI;
          local_e8 = '\0';
          FUN_019a54a0(uVar8,&local_f0);
          local_b0 = local_68;
          local_a8 = 0;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60[0] = '\0';
          }
          local_a8 = '\x01';
          uVar8 = FUN_00d7a410();
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        local_1c0 = *unaff_RSI;
        local_1b8 = 0;
        uVar8 = FUN_00d0b040(uVar8,&local_1c0);
        local_98 = 0;
        local_a0 = CONCAT71(uStack_7f,local_80);
        if (local_78 == '\0') {
          if (local_a0 != 0) {
            uVar8 = FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_98 = '\x01';
        local_1b0 = *local_90;
        local_1a8 = 0;
        uVar8 = FUN_00d10270(uVar8,&local_1b0);
        if (local_d8 == '\0') {
          if (local_e0 != (longlong *)0x0) {
            uVar8 = FUN_00d50b00();
          }
        }
        else {
          local_d8 = '\0';
        }
        local_68 = local_e0;
        local_60[0] = '\0';
        FUN_00ca0840(uVar8,&local_68);
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_e0 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_130 = *unaff_RSI;
        local_128 = '\0';
        local_68 = (longlong *)*local_90;
        local_60[0] = '\0';
        FUN_00ca0840(extraout_XMM0_Da_03,&local_68);
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
      }
      if (plVar6 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else {
    uVar8 = FUN_00d50b00();
  }
  local_160 = *unaff_RSI;
  local_158 = '\0';
  local_150 = *local_90;
  local_148 = '\0';
  (**(code **)(*unaff_RDI + 0x4f0))(uVar8,&local_150);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d227e0();
  if ((char)lVar5 != '\0') {
    FUN_00d50b20();
  }
  return;
}



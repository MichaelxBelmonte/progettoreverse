// Function: FUN_00e7ebe0
// Address: 00e7ebe0
// Size: 5702 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x00e7fe89) */
/* WARNING: Removing unreachable block (ram,0x00e7fed6) */
/* WARNING: Removing unreachable block (ram,0x00e7feee) */
/* WARNING: Removing unreachable block (ram,0x00e7feda) */
/* WARNING: Removing unreachable block (ram,0x00e7fe99) */
/* WARNING: Removing unreachable block (ram,0x00e7fe9d) */
/* WARNING: Removing unreachable block (ram,0x00e7fea5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00e7ebe0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar13;
  bool bVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_2c0;
  undefined1 local_2b8;
  longlong local_2b0;
  undefined1 local_2a8;
  longlong *local_2a0;
  undefined1 local_298;
  longlong *local_290;
  undefined1 local_288;
  longlong local_280;
  undefined1 local_278;
  longlong *local_270;
  undefined1 local_268;
  longlong *local_260;
  undefined1 local_258;
  longlong local_250;
  undefined1 local_248;
  longlong *local_240;
  longlong *local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong *local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  int local_b8;
  longlong *local_b0;
  char local_a8 [8];
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  char local_69;
  longlong *local_68;
  char local_60 [8];
  char local_58 [8];
  undefined8 *local_50;
  char local_48 [8];
  char local_38 [8];
  
  if ((param_2 != (undefined8 *)0x0) && (param_1 == (longlong *)0x0)) {
    param_1 = (longlong *)param_2[10];
  }
  plVar10 = (longlong *)*unaff_RSI;
  if ((DAT_027048b0 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
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
    ___cxa_guard_release();
  }
  if (plVar10 == (longlong *)0x0) {
LAB_00e7ec54:
    plVar10 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar10 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_00e7ec54;
  }
  plVar13 = (longlong *)*plVar10;
  local_69 = (char)plVar10[1];
  if ((local_69 == '\0') || (plVar13 == (longlong *)0x0)) {
    if (plVar13 != (longlong *)0x0) goto LAB_00e7ec87;
    FUN_00d4efa0();
    plVar10 = local_98;
    local_60[0] = (char)local_90;
    pplVar8 = (longlong **)local_60;
    if ((char)local_90 != '\0') {
      pplVar8 = &local_90;
    }
    *(undefined1 *)pplVar8 = 0;
    if (((char)local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c811e0();
    plVar11 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if ((((char)local_90 == '\0') && (FUN_00d50b00(), (char)local_90 != '\0')) &&
         (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_68 = plVar11;
    (**(code **)(*plVar11 + 0x20))();
    if (param_2 != (undefined8 *)0x0) {
      local_200 = '\0';
      local_1f8 = *unaff_RSI;
      local_1f0 = '\0';
      local_208 = plVar11;
      FUN_019b43b0();
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c820a0();
    plVar13 = local_98;
    local_58[0] = (char)local_90;
    pplVar8 = (longlong **)local_58;
    if ((char)local_90 != '\0') {
      pplVar8 = &local_90;
    }
    *(undefined1 *)pplVar8 = 0;
    if (((char)local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar13 == (longlong *)0x0) || (*(int *)((longlong)plVar13 + 0xc) == 0)) {
      local_a0 = 0;
      local_50 = (undefined8 *)0x0;
    }
    else {
      local_90._0_1_ = '\0';
      local_98 = (longlong *)0x0;
      local_88 = plVar13;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_a0 = 0;
      local_50 = (undefined8 *)0x0;
      local_80._4_4_ = 0;
      while( true ) {
        if (local_80._4_4_ != 0) {
          if (local_80._4_4_ < 1) {
            iVar12 = -local_80._4_4_;
          }
          else {
            iVar12 = (int)local_80 - local_80._4_4_;
            local_80 = CONCAT44(local_80._4_4_,iVar12);
            FUN_00d23690();
            local_78 = local_78 + local_80._4_4_;
            iVar12 = 0;
          }
          local_80 = CONCAT44(iVar12,(int)local_80);
        }
        lVar6 = (longlong)(int)local_80;
        iVar12 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,iVar12);
        if (*(int *)((longlong)local_88 + 0xc) <= iVar12) break;
        local_98 = *(longlong **)(local_88[2] + 8 + lVar6 * 8);
        if (param_1 == (longlong *)0x0) {
          if ((local_98[0xe] == 0) || ((*(byte *)(local_98[0xe] + 0x18) & 1) == 0))
          goto LAB_00e7f3c3;
        }
        else {
          local_1e0 = '\0';
          local_1e8 = local_98;
          cVar3 = (**(code **)(*param_1 + 0x18))(local_88[2],&local_1e8);
          if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
LAB_00e7f3c3:
            if (param_2 == (undefined8 *)0x0) {
              local_d8 = (longlong *)*unaff_RSI;
              param_2 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              param_2[2] = 0;
              param_2[3] = 0;
              param_2[4] = 0;
              *param_2 = &DAT_0258f4b0;
              param_2[5] = 0;
              param_2[6] = 0;
              param_2[7] = 0;
              param_2[8] = 0;
              param_2[9] = 0;
              param_2[10] = 0;
              FUN_00d500e0();
              local_d0._0_1_ = '\0';
              local_b0 = local_68;
              local_a8[0] = '\0';
              uVar5 = FUN_00e80da0(param_1,&local_b0);
              if (param_2 == local_50) {
                param_2 = local_50;
                if ((char)local_a0 != '\0') {
                  FUN_00d50b20();
                  param_2 = local_50;
                  goto LAB_00e7f49b;
                }
              }
              else if (((char)local_a0 != '\0') && (local_50 != (undefined8 *)0x0)) {
                uVar5 = FUN_00d50b20();
              }
              local_a0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
              local_50 = param_2;
            }
LAB_00e7f49b:
            local_1d8 = local_98;
            local_1d0 = '\0';
            cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x2b8))();
            if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            cVar4 = FUN_00d77de0();
            if (cVar4 == '\0') {
              (**(code **)(*(longlong *)*unaff_RSI + 0x210))(extraout_XMM0_Da,local_98);
              local_b0 = (longlong *)CONCAT71(local_b0._1_7_,(char)local_d0);
              pplVar8 = &local_d0;
              if ((char)local_d0 == '\0') {
                pplVar8 = &local_b0;
              }
              *(undefined1 *)pplVar8 = 0;
              if (((char)local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_38[0] = '\0';
              if (local_d8 == (longlong *)0x0) {
                plVar11 = (longlong *)0x0;
              }
              else {
                plVar11 = local_d8;
                if (cVar3 == '\0') {
                  local_1b8 = local_d8;
                  local_1b0 = '\0';
                  local_2a0 = local_68;
                  local_298 = 0;
                  local_290 = local_98;
                  local_288 = 0;
                  FUN_00e817d0(&local_2a0,&local_1b8);
                  if (local_d8 != (longlong *)0x0) {
                    pplVar8 = (longlong **)local_38;
                    if ((char)local_d0 != '\0') {
                      local_38[0] = '\x01';
                      pplVar8 = &local_d0;
                    }
                    *(char *)pplVar8 = '\0';
                    if ((char)local_d0 != '\0') {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_1c8 = local_d8;
                  local_1c0 = '\0';
                  local_2b0 = *unaff_RSI;
                  local_2a8 = 0;
                  FUN_00e81230(&local_2b0,&local_1c8);
                  if (local_d8 != (longlong *)0x0) {
                    pplVar8 = (longlong **)local_38;
                    if ((char)local_d0 != '\0') {
                      local_38[0] = '\x01';
                      pplVar8 = &local_d0;
                    }
                    *(char *)pplVar8 = '\0';
                    if ((char)local_d0 != '\0') {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              local_1a0 = '\0';
              local_1a8 = plVar11;
              (**(code **)(*local_68 + 0x200))(0,local_98);
              if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_b0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
              local_38[0] = (char)local_d0;
              pplVar8 = &local_d0;
              if ((char)local_d0 == '\0') {
                pplVar8 = (longlong **)local_38;
              }
              *(undefined1 *)pplVar8 = 0;
              if (((char)local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d7a7b0();
              if (((((char)local_d0 == '\0') && (local_d8 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), (char)local_d0 != '\0')) && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_d0._0_1_ = 0;
              local_c8 = local_d8;
              local_c0 = 0xffffffff;
              local_b8 = 0;
              local_c0._4_4_ = 0;
              while( true ) {
                if (local_c0._4_4_ != 0) {
                  if (local_c0._4_4_ < 1) {
                    iVar12 = -local_c0._4_4_;
                  }
                  else {
                    iVar12 = (int)local_c0 - local_c0._4_4_;
                    local_c0 = CONCAT44(local_c0._4_4_,iVar12);
                    FUN_00d23690();
                    local_b8 = local_b8 + local_c0._4_4_;
                    iVar12 = 0;
                  }
                  local_c0 = CONCAT44(iVar12,(int)local_c0);
                }
                lVar6 = (longlong)(int)local_c0;
                iVar12 = (int)local_c0 + 1;
                local_c0 = CONCAT44(local_c0._4_4_,iVar12);
                if (*(int *)((longlong)local_c8 + 0xc) <= iVar12) break;
                lVar6 = *(longlong *)(local_c8[2] + 8 + lVar6 * 8);
                local_48[0] = '\0';
                if (lVar6 == 0) {
                  plVar11 = (longlong *)0x0;
                }
                else if (cVar3 == '\0') {
                  local_180 = '\0';
                  local_270 = local_68;
                  local_268 = 0;
                  local_260 = local_98;
                  local_258 = 0;
                  local_188 = lVar6;
                  FUN_00e817d0(&local_270,&local_188);
                  plVar11 = local_b0;
                  if (local_b0 != (longlong *)0x0) {
                    pcVar7 = local_48;
                    if (local_a8[0] != '\0') {
                      local_48[0] = '\x01';
                      pcVar7 = local_a8;
                    }
                    *pcVar7 = '\0';
                    if (local_a8[0] != '\0') {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_180 != '\0') && (local_188 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_190 = '\0';
                  local_280 = *unaff_RSI;
                  local_278 = 0;
                  local_198 = lVar6;
                  FUN_00e81230(&local_280,&local_198);
                  plVar11 = local_b0;
                  if (local_b0 != (longlong *)0x0) {
                    pcVar7 = local_48;
                    if (local_a8[0] != '\0') {
                      local_48[0] = '\x01';
                      pcVar7 = local_a8;
                    }
                    *pcVar7 = '\0';
                    if (local_a8[0] != '\0') {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_190 != '\0') && (local_198 != 0)) {
                    FUN_00d50b20();
                  }
                }
                local_170 = '\0';
                local_178 = plVar11;
                FUN_00d21140();
                if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48[0] != '\0') && (plVar11 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              uVar15 = FUN_00083b20();
              (**(code **)(*local_68 + 0x210))(uVar15,local_98);
              local_d0._0_1_ = '\0';
              FUN_00d243f0();
              if (((char)local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_d8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_00559a70();
      plVar11 = local_68;
    }
    uVar15 = FUN_00c81c40();
    plVar2 = local_98;
    pplVar8 = &local_90;
    if ((char)local_90 == '\0') {
      pplVar8 = (longlong **)local_38;
    }
    local_38[0] = (char)local_90;
    *(undefined1 *)pplVar8 = 0;
    if (((char)local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_90._0_1_ = '\0';
      local_98 = (longlong *)0x0;
      local_240 = plVar2;
      local_88 = plVar2;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_80._4_4_ = 0;
      while( true ) {
        if (local_80._4_4_ != 0) {
          if (local_80._4_4_ < 1) {
            iVar12 = -local_80._4_4_;
          }
          else {
            iVar12 = (int)local_80 - local_80._4_4_;
            local_80 = CONCAT44(local_80._4_4_,iVar12);
            uVar15 = FUN_00d23690();
            local_78 = local_78 + local_80._4_4_;
            iVar12 = 0;
          }
          local_80 = CONCAT44(iVar12,(int)local_80);
        }
        lVar6 = (longlong)(int)local_80;
        iVar12 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,iVar12);
        if (*(int *)((longlong)local_88 + 0xc) <= iVar12) break;
        local_98 = *(longlong **)(local_88[2] + 8 + lVar6 * 8);
        if (param_1 == (longlong *)0x0) {
          lVar6 = local_98[0xc];
          if ((*(byte *)(lVar6 + 0x18) & 1) == 0) goto LAB_00e7fcbe;
        }
        else {
          local_160 = '\0';
          local_168 = local_98;
          cVar3 = (**(code **)(*param_1 + 0x20))(local_88[2],&local_168);
          uVar15 = extraout_XMM0_Da_00;
          if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            lVar6 = local_98[0xc];
LAB_00e7fcbe:
            if (*(char *)(lVar6 + 0x19) != '\0') {
              if (*(char *)(lVar6 + 0x19) == '@') {
                if (param_2 == (undefined8 *)0x0) {
                  local_d8 = (longlong *)*unaff_RSI;
                  param_2 = (undefined8 *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  param_2[2] = 0;
                  param_2[3] = 0;
                  param_2[4] = 0;
                  *param_2 = &DAT_0258f4b0;
                  param_2[5] = 0;
                  param_2[6] = 0;
                  param_2[7] = 0;
                  param_2[8] = 0;
                  param_2[9] = 0;
                  param_2[10] = 0;
                  FUN_00d500e0();
                  local_d0._0_1_ = '\0';
                  local_b0 = local_68;
                  local_a8[0] = '\0';
                  uVar5 = FUN_00e80da0(param_1,&local_b0);
                  uVar15 = extraout_XMM0_Da_01;
                  if (param_2 == local_50) {
                    param_2 = local_50;
                    if ((char)local_a0 != '\0') {
                      uVar15 = FUN_00d50b20();
                      param_2 = local_50;
                      goto LAB_00e7fddd;
                    }
                  }
                  else if (((char)local_a0 != '\0') && (local_50 != (undefined8 *)0x0)) {
                    uVar5 = FUN_00d50b20();
                    uVar15 = extraout_XMM0_Da_02;
                  }
                  local_a0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                  local_50 = param_2;
                }
LAB_00e7fddd:
                (**(code **)(*(longlong *)*unaff_RSI + 0x210))(uVar15,local_98);
                local_b0 = (longlong *)CONCAT71(local_b0._1_7_,(char)local_d0);
                pplVar8 = &local_d0;
                if ((char)local_d0 == '\0') {
                  pplVar8 = &local_b0;
                }
                *(undefined1 *)pplVar8 = 0;
                if (((char)local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_d8 == (longlong *)0x0) {
                  plVar11 = (longlong *)0x0;
                }
                else {
                  local_158 = local_d8;
                  local_150 = '\0';
                  local_250 = *unaff_RSI;
                  local_248 = 0;
                  FUN_00e81230(&local_250,&local_158);
                  if (((char)local_b0 == '\0') && ((char)local_d0 != '\0')) {
                    local_b0 = (longlong *)CONCAT71(local_b0._1_7_,1);
                    local_d0._0_1_ = '\0';
                  }
                  if (((char)local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  plVar11 = local_d8;
                  if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                local_140 = '\0';
                local_148 = plVar11;
                uVar15 = (**(code **)(*local_68 + 0x200))(0,local_98,0);
                if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
                  uVar15 = FUN_00d50b20();
                }
                if (((char)local_b0 != '\0') && (plVar11 != (longlong *)0x0)) {
                  uVar15 = FUN_00d50b20();
                }
              }
              else {
                (**(code **)(*(longlong *)*unaff_RSI + 0x218))();
                uVar15 = (**(code **)(*local_68 + 0x208))(0,local_98);
              }
            }
          }
        }
      }
      FUN_00cc1480();
      plVar11 = local_68;
      if (local_38[0] != '\0') {
        FUN_00d50b20();
        plVar11 = local_68;
      }
    }
    if ((local_58[0] != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar14 = true;
  }
  else {
    FUN_00d50b00();
LAB_00e7ec87:
    FUN_00d7a7b0();
    plVar11 = local_98;
    if (((((char)local_90 == '\0') && (local_98 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_90 != '\0')) && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = plVar11;
    if (param_2 == (undefined8 *)0x0) {
      plVar10 = (longlong *)*unaff_RSI;
      param_2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      *param_2 = &DAT_0258f4b0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      FUN_00d500e0();
      local_90._0_1_ = '\0';
      local_d8 = plVar11;
      local_d0._0_1_ = '\0';
      local_98 = plVar10;
      uVar5 = FUN_00e80da0(param_1);
      local_a0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      local_50 = param_2;
    }
    else {
      local_a0 = 0;
      local_50 = (undefined8 *)0x0;
    }
    cVar3 = FUN_00d24b50();
    if (cVar3 == '\0') {
      FUN_00d227e0();
    }
    if (*(char *)((longlong)plVar13 + 0x1c) != '\0') {
      FUN_00d22760();
    }
    cVar3 = FUN_00d24990();
    local_88 = plVar13;
    if (cVar3 == '\0') {
      local_90._0_1_ = '\0';
      local_98 = (longlong *)0x0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_80._4_4_ = 0;
      while( true ) {
        if (local_80._4_4_ != 0) {
          if (local_80._4_4_ < 1) {
            iVar12 = -local_80._4_4_;
          }
          else {
            iVar12 = (int)local_80 - local_80._4_4_;
            local_80 = CONCAT44(local_80._4_4_,iVar12);
            FUN_00d23690();
            local_78 = local_78 + local_80._4_4_;
            iVar12 = 0;
          }
          local_80 = CONCAT44(iVar12,(int)local_80);
        }
        lVar6 = (longlong)(int)local_80;
        iVar12 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,iVar12);
        if (*(int *)((longlong)local_88 + 0xc) <= iVar12) break;
        local_218 = *(longlong **)(local_88[2] + 8 + lVar6 * 8);
        local_210 = '\0';
        local_2c0 = *unaff_RSI;
        local_2b8 = 0;
        local_98 = local_218;
        FUN_00e81230(&local_2c0,&local_218);
        if (((char)local_d0 == '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        plVar11 = local_68;
        FUN_00d21140();
        if (local_d8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00083b20();
      if (plVar11 != (longlong *)0x0) goto LAB_00e7f0d5;
LAB_00e7f110:
      bVar1 = false;
      plVar11 = (longlong *)0x0;
    }
    else {
      FUN_00d227d0();
      local_90._0_1_ = '\0';
      local_98 = (longlong *)0x0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_80._4_4_ = 0;
      while( true ) {
        if (local_80._4_4_ != 0) {
          if (local_80._4_4_ < 1) {
            iVar12 = -local_80._4_4_;
          }
          else {
            iVar12 = (int)local_80 - local_80._4_4_;
            local_80 = CONCAT44(local_80._4_4_,iVar12);
            FUN_00d23690();
            local_78 = local_78 + local_80._4_4_;
            iVar12 = 0;
          }
          local_80 = CONCAT44(iVar12,(int)local_80);
        }
        lVar6 = (longlong)(int)local_80;
        iVar12 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,iVar12);
        if (*(int *)((longlong)local_88 + 0xc) <= iVar12) break;
        plVar10 = *(longlong **)(local_88[2] + 8 + lVar6 * 8);
        local_98 = plVar10;
        if (plVar10 == (longlong *)0x0) {
LAB_00e7eee0:
          plVar13 = (longlong *)0x0;
        }
        else {
          local_230 = '\0';
          local_228 = *unaff_RSI;
          local_220 = '\0';
          local_238 = plVar10;
          FUN_00e81230(&local_228,&local_238);
          plVar13 = local_d8;
          if ((char)local_d0 == '\0') {
            if (local_d8 == (longlong *)0x0) goto LAB_00e7eee0;
            FUN_00d50b00();
          }
        }
        FUN_00d21140();
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar10 != (longlong *)0x0) {
          if ((local_220 != '\0') && (local_228 != 0)) {
            FUN_00d50b20();
          }
          if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00083b20();
      plVar11 = local_68;
      if (local_68 == (longlong *)0x0) goto LAB_00e7f110;
LAB_00e7f0d5:
      FUN_00d50b00();
      FUN_00d50b20();
      bVar1 = true;
    }
    bVar14 = false;
  }
  if ((local_69 != '\0') && (!bVar14)) {
    FUN_00d50b20();
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_00e81ad0();
    FUN_00e82310();
    goto LAB_00e80177;
  }
  if (param_2 != (undefined8 *)0x0) goto LAB_00e80177;
  if ((DAT_028a8c98 == (undefined8 *)0x0) || (DAT_028a8ca1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a8c98 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      *puVar9 = &DAT_0258f4b0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      FUN_00d500e0();
      bVar14 = DAT_028a8c98 == (undefined8 *)0x0;
      DAT_028a8c98 = puVar9;
      if (((bVar14) || (FUN_00d50b20(), DAT_028a8c98 != (undefined8 *)0x0)) &&
         (DAT_028a8ca0 == '\0')) {
        DAT_028a8ca0 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028a8ca1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a8ca1 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028a8c98 != (undefined8 *)0x0) goto LAB_00e80134;
    puVar9 = (undefined8 *)0x0;
  }
  else {
LAB_00e80134:
    puVar9 = DAT_028a8c98;
    FUN_00d50b00();
  }
  (**(code **)(*plVar11 + 0x138))();
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_00e80177:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar11;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)local_a0 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



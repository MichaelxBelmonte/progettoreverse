// Function: FUN_019af4c0
// Address: 019af4c0
// Size: 12355 bytes
// Class: MUEditorSubview


/* WARNING: Removing unreachable block (ram,0x019b00ea) */
/* WARNING: Removing unreachable block (ram,0x019b00f6) */
/* WARNING: Removing unreachable block (ram,0x019b004b) */
/* WARNING: Removing unreachable block (ram,0x019afb6b) */
/* WARNING: Removing unreachable block (ram,0x019afb77) */
/* WARNING: Removing unreachable block (ram,0x019af779) */
/* WARNING: Removing unreachable block (ram,0x019af785) */
/* WARNING: Removing unreachable block (ram,0x019afac6) */
/* WARNING: Removing unreachable block (ram,0x019afad2) */
/* WARNING: Removing unreachable block (ram,0x019afc9d) */
/* WARNING: Removing unreachable block (ram,0x019b0057) */
/* WARNING: Removing unreachable block (ram,0x019b057b) */
/* WARNING: Removing unreachable block (ram,0x019b0587) */
/* WARNING: Removing unreachable block (ram,0x019afc91) */
/* WARNING: Removing unreachable block (ram,0x019b05c8) */
/* WARNING: Removing unreachable block (ram,0x019b05d4) */

void FUN_019af4c0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined7 uVar9;
  void *pvVar7;
  undefined8 uVar8;
  pthread_key_t pVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined8 unaff_RBX;
  longlong *unaff_RDI;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong **pplVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  longlong local_378;
  char local_370;
  longlong local_368;
  char local_360;
  longlong local_358;
  char local_350;
  longlong *local_348;
  char local_340;
  longlong *local_338;
  char local_330;
  longlong local_328;
  char local_320;
  longlong local_318;
  char local_310;
  longlong *local_308;
  char local_300;
  longlong *local_2f8;
  char local_2f0;
  longlong *local_2e8;
  char local_2e0;
  longlong *local_2d8;
  char local_2d0;
  longlong *local_2c8;
  char local_2c0;
  longlong *local_2b8;
  char local_2b0;
  longlong *local_2a8;
  char local_2a0;
  longlong *local_298;
  char local_290;
  longlong *local_288;
  char local_280;
  longlong *local_278;
  char local_270;
  longlong local_268;
  char local_260;
  longlong *local_258;
  char local_250;
  longlong *local_248;
  char local_240;
  longlong *local_238;
  char local_230;
  longlong *local_228;
  char local_220;
  longlong *local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong *local_1f8;
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
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  ulonglong local_108;
  code *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  uint local_b4;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_4c;
  longlong *local_48;
  char local_40;
  
  if (*(char *)((longlong)unaff_RDI + 0x3c5) != '\0') {
    return;
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c5) = 1;
  (**(code **)(*unaff_RDI + 0x9b0))();
  plVar17 = local_90;
  if (local_88 == '\0') {
    if (local_90 == (longlong *)0x0) {
      bVar20 = (char)unaff_RDI[0x9f] == '\0';
      goto LAB_019af829;
    }
    FUN_00d50b00();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar20 = (char)unaff_RDI[0x9f] == '\0';
LAB_019af55f:
    (**(code **)(*unaff_RDI + 0xe20))();
    local_1f8 = local_48;
    local_1f0 = 0;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_1f0 = '\x01';
    uVar21 = FUN_00243390();
    local_d0 = local_90;
    if (local_90 == (longlong *)0x0) {
      local_d0 = (longlong *)0x0;
      local_f8 = 0;
    }
    else if (local_88 == '\0') {
      uVar21 = FUN_00d50b00();
      local_f8 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
      uVar21 = extraout_XMM0_Qa;
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
      local_f8 = CONCAT71((int7)((ulonglong)local_90 >> 8),1);
    }
    if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    plVar11 = (longlong *)0x0;
    local_c8 = (longlong *)CONCAT71(local_c8._1_7_,bVar20);
    if ((longlong *)unaff_RDI[0x41] == (longlong *)0x0) goto LAB_019af83d;
    local_88 = '\0';
    local_90 = (longlong *)0x0;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_108 = 0;
    local_80 = (longlong *)unaff_RDI[0x41];
    while( true ) {
      iVar13 = (int)plVar11;
      if (iVar13 != 0) {
        if (iVar13 < 1) {
          iVar13 = -iVar13;
        }
        else {
          local_78 = CONCAT44(local_78._4_4_,(int)local_78 - iVar13);
          FUN_00d23690(uVar21,plVar11);
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
      lVar6 = (longlong)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((longlong)local_80 + 0xc) <= iVar13) break;
      local_90 = *(longlong **)(local_80[2] + 8 + lVar6 * 8);
      local_40 = '\0';
      local_48 = local_90;
      cVar2 = FUN_00d23d70();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((cVar2 == '\0') ||
         (cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI)
                  )(), uVar21 = extraout_XMM0_Qa_00, cVar2 == '\0')) {
        local_48 = local_90;
        local_40 = '\0';
        uVar21 = FUN_00d23f50();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_108 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        if (((longlong *)unaff_RDI[0x92] == local_90) &&
           ((longlong *)unaff_RDI[0x92] != (longlong *)0x0)) {
          unaff_RDI[0x92] = 0;
          uVar21 = FUN_00d50b20();
        }
      }
      plVar11 = (longlong *)(local_78 >> 0x20);
    }
    FUN_001159b0();
    plVar11 = (longlong *)0x0;
  }
  else {
    bVar20 = (char)unaff_RDI[0x9f] == '\0';
    if (local_90 != (longlong *)0x0) goto LAB_019af55f;
LAB_019af829:
    local_c8 = (longlong *)CONCAT71(local_c8._1_7_,bVar20);
    plVar11 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    local_f8 = 0;
    local_d0 = (longlong *)0x0;
LAB_019af83d:
    local_108 = 0;
  }
  (**(code **)(*unaff_RDI + 0xa60))();
  (**(code **)(*unaff_RDI + 0x9b8))();
  plVar15 = local_90;
  if (plVar17 == local_90) {
    local_b0 = plVar17;
LAB_019af8ce:
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_88 == '\0') {
      if (local_90 != (longlong *)0x0) {
        local_b0 = plVar17;
        FUN_00d50b00();
      }
      local_b0 = plVar15;
      if ((char)plVar11 == '\0') {
        FUN_00d50b20();
      }
      goto LAB_019af8ce;
    }
    local_b0 = local_90;
    if ((char)plVar11 == '\0') {
      FUN_00d50b20();
    }
  }
  lVar6 = unaff_RDI[0x46];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (ulonglong)uVar14;
  if (0 < (int)uVar14) {
    local_68 = (longlong *)0x0;
    local_4c = 0;
    uVar16 = 0;
    plVar17 = (longlong *)0x0;
    do {
      uVar14 = uVar14 - 1;
      (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar14 * 8) + 0x928))();
      plVar11 = local_90;
      local_a8 = local_90;
      uVar9 = (undefined7)((ulonglong)local_90 >> 8);
      cVar2 = (char)uVar16;
      if (plVar17 == local_90) {
        plVar11 = plVar17;
        local_c0 = uVar16;
        if ((cVar2 == '\0') && (plVar17 != (longlong *)0x0)) {
          local_c0 = CONCAT71(uVar9,1);
          if (local_88 != '\0') goto LAB_019afa47;
          local_c0 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
joined_r0x019afa0f:
        local_a8 = plVar11;
        plVar11 = local_a8;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
      else {
        if (local_88 == '\0') {
          uVar21 = 0;
          if (local_90 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          plVar11 = local_a8;
          local_c0 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar17 = plVar11;
            plVar11 = local_a8;
          }
          goto joined_r0x019afa0f;
        }
        local_c0 = CONCAT71(uVar9,1);
        if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar17 = plVar11;
          plVar11 = local_a8;
        }
      }
LAB_019afa47:
      local_a8 = plVar11;
      cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI))();
      plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
      if ((cVar2 != '\0') && (local_b0 != (longlong *)0x0)) {
        local_90 = local_a8;
        local_88 = '\0';
        uVar5 = FUN_00d24090();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = (longlong *)((ulonglong)uVar5 ^ 1);
      }
      plVar17 = local_68;
      if ((char)plVar11 != '\0') {
        plVar11 = *(longlong **)(*(longlong *)(unaff_RDI[0x46] + 0x10) + (ulonglong)uVar14 * 8);
        local_58 = uVar19;
        if (local_68 == plVar11) {
          if ((char)local_4c == '\0') {
            if (local_68 != (longlong *)0x0) {
              local_a0 = (longlong *)CONCAT71(local_a0._1_7_,1);
              local_4c = 0;
              FUN_00d50b00();
              goto LAB_019afb2b;
            }
            local_a0 = (longlong *)((ulonglong)local_a0._1_7_ << 8);
            if (unaff_RDI[0x4b] == 0) goto LAB_019afb3c;
          }
          else {
            local_a0 = (longlong *)CONCAT71(local_a0._1_7_,(char)local_4c);
            if ((longlong *)unaff_RDI[0x4b] == local_68) goto LAB_019afb3c;
          }
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_a0 = (longlong *)CONCAT71(local_a0._1_7_,1);
          plVar17 = plVar11;
          if (((char)local_4c != '\0') && (local_68 != (longlong *)0x0)) {
            local_68 = plVar11;
            FUN_00d50b20();
          }
LAB_019afb2b:
          if ((longlong *)unaff_RDI[0x4b] == plVar17) {
LAB_019afb3c:
            (**(code **)(&DAT_00001440 + *unaff_RDI))();
          }
        }
        (**(code **)(*plVar17 + 0x928))();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar11;
        local_88 = '\0';
        FUN_00e383c0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01960580();
        (**(code **)(*plVar17 + 0x478))();
        FUN_00d23620();
        local_4c = (uint)(byte)local_a0;
        uVar19 = local_58;
        local_68 = plVar17;
      }
      if ((longlong)uVar19 < 2) goto LAB_019afd25;
      uVar19 = uVar19 - 1;
      lVar6 = unaff_RDI[0x46];
      uVar16 = local_c0 & 0xffffffff;
      plVar17 = local_a8;
    } while( true );
  }
  local_c0 = 0;
  local_a8 = (longlong *)0x0;
  local_4c = 0;
  local_68 = (longlong *)0x0;
LAB_019afd25:
  lVar6 = unaff_RDI[0x49];
  uVar14 = *(uint *)(lVar6 + 0xc);
  plVar17 = (longlong *)(ulonglong)uVar14;
  if (0 < (int)uVar14) {
    local_60 = (longlong *)0x0;
    uVar21 = 0;
    local_98 = 0;
    do {
      uVar14 = uVar14 - 1;
      uVar19 = (ulonglong)uVar14;
      (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + uVar19 * 8) + 0x928))();
      if (local_48 == (longlong *)0x0) {
        cVar2 = '\x01';
      }
      else {
        (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI[0x49] + 0x10) + uVar19 * 8) + 0x928))()
        ;
        plVar11 = local_f0;
        local_1e0 = 0;
        if (local_e8 == '\0') {
          if (local_f0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = '\0';
        }
        local_1e0 = '\x01';
        local_1e8 = plVar11;
        cVar3 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *unaff_RDI + 0x30))();
        cVar2 = '\x01';
        if ((cVar3 != '\0') && (local_b0 != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI[0x49] + 0x10) + uVar19 * 8) + 0x928))
                    ();
          plVar11 = local_e0;
          if (local_d8 == '\0') {
            if (local_e0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d8 = '\0';
          }
          local_90 = plVar11;
          local_88 = '\0';
          cVar3 = FUN_00d24090();
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          cVar2 = '\x01';
          if (cVar3 != '\0') {
            (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI[0x49] + 0x10) + uVar19 * 8) + 0x928
                        ))();
            pvVar7 = _pthread_getspecific((pthread_key_t)uVar21);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_01263cf0();
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          plVar11 = plVar17;
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar15 = local_60;
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(unaff_RDI[0x49] + 0x10) + uVar19 * 8);
        if (local_60 == plVar1) {
          if ((char)local_98 == '\0') {
            if (local_60 != (longlong *)0x0) {
              local_98 = 0;
              FUN_00d50b00();
              goto LAB_019b000b;
            }
            plVar11 = (longlong *)(local_98 & 0xffffffff);
            if (unaff_RDI[0x4b] == 0) goto LAB_019b001c;
          }
          else {
            plVar11 = (longlong *)(local_98 & 0xffffffff);
            if ((longlong *)unaff_RDI[0x4b] == local_60) goto LAB_019b001c;
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar15 = plVar1;
          if (((char)local_98 != '\0') && (local_60 != (longlong *)0x0)) {
            local_60 = plVar1;
            FUN_00d50b20();
          }
LAB_019b000b:
          plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
          if ((longlong *)unaff_RDI[0x4b] == plVar15) {
LAB_019b001c:
            (**(code **)(&DAT_00001440 + *unaff_RDI))();
          }
        }
        FUN_019781b0();
        (**(code **)(*plVar15 + 0x478))();
        FUN_00d23620();
        local_98 = (ulonglong)plVar11 & 0xffffffff;
        local_60 = plVar15;
      }
      if ((longlong)plVar17 < 2) goto LAB_019b0155;
      plVar17 = (longlong *)((longlong)plVar17 + -1);
      lVar6 = unaff_RDI[0x49];
    } while( true );
  }
  local_98 = 0;
  local_60 = (longlong *)0x0;
LAB_019b0155:
  lVar6 = unaff_RDI[0x4a];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (ulonglong)uVar14;
  local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(uint)(byte)local_c8);
  if (0 < (int)uVar14) {
    plVar17 = (longlong *)0x0;
    uVar16 = 0;
    do {
      uVar14 = uVar14 - 1;
      lVar6 = *(longlong *)(lVar6 + 0x10);
      plVar11 = *(longlong **)(lVar6 + (ulonglong)uVar14 * 8);
      if (plVar17 == plVar11) {
        if (((char)uVar16 == '\0') && (plVar17 != (longlong *)0x0)) {
          local_58 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          FUN_00d50b00();
          plVar11 = plVar17;
          goto LAB_019b0200;
        }
        local_a0 = plVar17;
        local_58 = uVar16;
        if (local_b0 != (longlong *)0x0) goto LAB_019b0215;
LAB_019b0551:
        plVar17 = local_a0;
        FUN_0197ef60();
        if ((longlong *)unaff_RDI[0x4b] == plVar17) {
          (**(code **)(&DAT_00001440 + *unaff_RDI))();
        }
        (**(code **)(*plVar17 + 0x478))();
        FUN_00d23620();
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          lVar6 = FUN_00d50b00();
        }
        local_58 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        if (((char)uVar16 != '\0') && (plVar17 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019b0200:
        plVar17 = plVar11;
        local_a0 = plVar11;
        if (local_b0 == (longlong *)0x0) goto LAB_019b0551;
LAB_019b0215:
        local_a0 = plVar17;
        (**(code **)(*plVar17 + 0x928))();
        plVar17 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar17;
        local_88 = '\0';
        cVar2 = FUN_00d24090();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = 1;
        if (cVar2 != '\0') {
          cVar2 = FUN_019801a0();
          local_b4 = CONCAT31(local_b4._1_3_,cVar2);
          if (cVar2 == '\0') {
LAB_019b035b:
            cVar2 = FUN_019801b0();
            local_100 = (code *)CONCAT71(local_100._1_7_,cVar2);
            if (cVar2 == '\0') {
LAB_019b03fd:
              (**(code **)(*local_a0 + 0x928))();
              plVar11 = local_90;
              local_1b0 = 0;
              if (local_88 == '\0') {
                if (local_90 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_88 = '\0';
              }
              local_1b0 = '\x01';
              local_1b8 = plVar11;
              bVar4 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version +
                                  *unaff_RDI))();
              if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              bVar4 = bVar4 ^ 1;
              if ((char)local_100 != '\0') goto LAB_019b04af;
            }
            else {
              (**(code **)(*local_a0 + 0x928))();
              local_1c8 = local_e0;
              local_1c0 = 0;
              if (local_d8 == '\0') {
                if (local_e0 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_d8 = '\0';
              }
              local_1c0 = '\x01';
              cVar2 = (**(code **)(
                                  "/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText"
                                  + *unaff_RDI + 8))();
              bVar4 = 1;
              if (cVar2 != '\0') goto LAB_019b03fd;
LAB_019b04af:
              if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((char)local_b4 == '\0') goto LAB_019b0520;
          }
          else {
            (**(code **)(*local_a0 + 0x928))();
            local_1d8 = local_f0;
            local_1d0 = 0;
            if (local_e8 == '\0') {
              if (local_f0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_e8 = '\0';
            }
            local_1d0 = '\x01';
            cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText"
                                + *unaff_RDI))();
            bVar4 = 1;
            if (cVar2 != '\0') goto LAB_019b035b;
          }
          if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b0520:
        if (plVar17 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar17 = local_a0;
        if (bVar4 != 0) goto LAB_019b0551;
      }
      if ((longlong)uVar19 < 2) goto LAB_019b0631;
      uVar19 = uVar19 - 1;
      lVar6 = unaff_RDI[0x4a];
      uVar16 = local_58 & 0xffffffff;
    } while( true );
  }
  local_58 = 0;
  plVar17 = (longlong *)0x0;
LAB_019b0631:
  local_100 = (code *)(**(code **)(*unaff_RDI + 0xa58))();
  (**(code **)(*unaff_RDI + 0x9b8))();
  plVar11 = local_90;
  if (local_90 != local_b0) {
    if (local_88 != '\0') {
      if (local_b0 == (longlong *)0x0) {
        local_b0 = local_90;
      }
      else {
        local_b0 = local_90;
        FUN_00d50b20();
      }
      goto LAB_019b06dd;
    }
    if (local_90 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar20 = local_b0 != (longlong *)0x0;
    local_b0 = plVar11;
    if (bVar20) {
      FUN_00d50b20();
    }
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_019b06dd:
  if (local_b0 == (longlong *)0x0) {
    local_b4 = 0;
  }
  else {
    local_88 = 0;
    local_90 = (longlong *)0x0;
    local_80 = local_b0;
    local_78._0_4_ = -1;
    local_78._4_4_ = 0;
    local_70 = 0;
    local_b4 = 0;
    local_a0 = plVar17;
    while( true ) {
      lVar6 = (longlong)(int)local_78;
      local_78._0_4_ = (int)local_78 + 1;
      if (*(int *)((longlong)local_80 + 0xc) <= (int)local_78) break;
      local_378 = *(longlong *)(local_80[2] + 8 + lVar6 * 8);
      local_370 = '\0';
      local_90 = (longlong *)local_378;
      (**(code **)(*unaff_RDI + 0xab0))(local_80[2],&local_378);
      plVar11 = local_48;
      plVar17 = local_68;
      uVar9 = (undefined7)(uVar19 >> 8);
      if (local_48 == local_68) {
        if (((char)local_4c == '\0') && (local_48 != (longlong *)0x0)) {
          plVar11 = local_68;
          if (local_40 != '\0') goto LAB_019b0805;
          uVar19 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
        else {
          uVar19 = (ulonglong)local_4c;
        }
      }
      else if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar19 = CONCAT71(uVar9,1);
        plVar17 = plVar11;
        if (((char)local_4c != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_4c != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019b0805:
        local_40 = '\0';
        uVar19 = CONCAT71(uVar9,1);
        plVar17 = plVar11;
      }
      if (plVar17 == (longlong *)0x0) {
        local_368 = (longlong)local_90;
        local_360 = '\0';
        cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI))
                          ();
        if ((local_360 != '\0') && (local_368 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar2 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_370 != '\0') && (local_378 != 0)) {
        FUN_00d50b20();
      }
      uVar14 = (uint)uVar19;
      if (cVar2 != '\0') {
        (**(code **)(&UNK_000014e8 + *unaff_RDI))();
        local_68 = local_48;
        cVar2 = (char)uVar19;
        uVar9 = (undefined7)((ulonglong)local_48 >> 8);
        plVar11 = local_48;
        if (local_48 == plVar17) {
          plVar15 = plVar17;
          local_4c = uVar14;
          if ((cVar2 == '\0') && (local_48 != (longlong *)0x0)) {
            local_4c = (uint)CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b09af;
            local_4c = (uint)CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
LAB_019b099b:
          local_68 = plVar15;
          plVar15 = local_68;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar15 = local_68;
          }
        }
        else {
          if (local_40 == '\0') {
            uVar21 = 0;
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_4c = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
            plVar15 = local_68;
            if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar15 = local_68;
            }
            goto LAB_019b099b;
          }
          local_4c = (uint)CONCAT71(uVar9,1);
          plVar15 = local_68;
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar15 = local_68;
          }
        }
LAB_019b09af:
        local_68 = plVar15;
        pVar10 = (pthread_key_t)plVar11;
        local_358 = (longlong)local_90;
        local_350 = '\0';
        FUN_01960580();
        if ((local_350 != '\0') && (local_358 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_1a0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_1a0 = '\x01';
        local_1a8 = plVar17;
        FUN_0198a7b0();
        if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_348 = local_68;
        local_340 = '\0';
        (**(code **)(*unaff_RDI + 0x450))();
        if ((local_340 != '\0') && (local_348 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = local_68;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_338 = local_68;
        local_330 = '\0';
        uVar21 = (**(code **)(*local_68 + 0x928))();
        plVar17 = local_48;
        local_190 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_190 = '\x01';
        local_198 = plVar17;
        uVar21 = FUN_019b43b0(uVar21,&local_198);
        if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        plVar17 = local_68;
        uVar14 = local_4c;
        if ((local_330 != '\0') && (local_338 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar17 = local_68;
          uVar14 = local_4c;
        }
      }
      local_4c = uVar14;
      local_68 = plVar17;
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          local_78._4_4_ = -local_78._4_4_;
        }
        else {
          local_78._0_4_ = (int)local_78 - local_78._4_4_;
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          local_78._4_4_ = 0;
        }
      }
    }
    FUN_001159b0();
    plVar17 = local_a0;
    local_88 = 0;
    local_90 = (longlong *)0x0;
    local_80 = local_b0;
    local_78._0_4_ = -1;
    local_78._4_4_ = 0;
    local_70 = 0;
    pplVar18 = &local_48;
    while( true ) {
      lVar6 = (longlong)(int)local_78;
      local_78._0_4_ = (int)local_78 + 1;
      if (*(int *)((longlong)local_80 + 0xc) <= (int)local_78) break;
      lVar12 = local_80[2];
      local_90 = *(longlong **)(lVar12 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar12);
      pVar10 = (pthread_key_t)lVar12;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar21 = FUN_0125e930();
      if (local_48 == (longlong *)0x0) {
LAB_019b0d61:
        cVar2 = '\0';
      }
      else {
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        uVar21 = extraout_XMM0_Qa_01;
        if (cVar2 != '\0') goto LAB_019b0d61;
        local_328 = (longlong)local_90;
        local_320 = '\0';
        cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *unaff_RDI + 0x30))();
        uVar21 = extraout_XMM0_Qa_02;
        if ((local_320 != '\0') && (local_328 != 0)) {
          uVar21 = FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_318 = (longlong)local_90;
        local_310 = '\0';
        (**(code **)(*unaff_RDI + 0xae8))(uVar21,&local_318);
        plVar11 = local_60;
        uVar9 = (undefined7)(uVar19 >> 8);
        if (local_48 == local_60) {
          if (((char)local_98 == '\0') && (local_48 != (longlong *)0x0)) {
            if (local_40 != '\0') goto LAB_019b0e68;
            uVar19 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            uVar19 = local_98 & 0xffffffff;
          }
LAB_019b0ec0:
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar11 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar19 = CONCAT71(uVar9,1);
            if (((char)local_98 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_019b0ec0;
          }
          if (((char)local_98 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_019b0e68:
          local_40 = '\0';
          uVar19 = CONCAT71(uVar9,1);
        }
        if ((local_310 != '\0') && (local_318 != 0)) {
          FUN_00d50b20();
        }
        if (plVar11 == (longlong *)0x0) {
          (**(code **)(&UNK_000014f0 + *unaff_RDI))();
          local_60 = local_48;
          plVar11 = local_48;
          if (local_48 == (longlong *)0x0) {
            local_60 = (longlong *)0x0;
            local_98 = uVar19 & 0xffffffff;
          }
          else {
            local_98 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
            if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pVar10 = (pthread_key_t)plVar11;
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar11 = local_48;
          local_180 = 0;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_180 = '\x01';
          local_188 = plVar11;
          FUN_0198a7b0();
          if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_308 = local_60;
          local_300 = '\0';
          (**(code **)(*unaff_RDI + 0x450))();
          if ((local_300 != '\0') && (local_308 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_48 = local_60;
          local_40 = '\0';
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          plVar11 = local_48;
          local_170 = 0;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_170 = '\x01';
          local_178 = plVar11;
          uVar21 = FUN_019781b0();
          if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        }
        else {
          local_98 = uVar19 & 0xffffffff;
          local_60 = plVar11;
        }
      }
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          local_78._4_4_ = -local_78._4_4_;
        }
        else {
          local_78._0_4_ = (int)local_78 - local_78._4_4_;
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          local_78._4_4_ = 0;
        }
      }
    }
    FUN_001159b0();
    local_88 = '\0';
    local_90 = (longlong *)0x0;
    local_80 = local_b0;
    local_78 = 0xffffffff;
    local_70 = 0;
    while( true ) {
      lVar6 = (longlong)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((longlong)local_80 + 0xc) <= iVar13) break;
      lVar12 = local_80[2];
      local_2f8 = *(longlong **)(lVar12 + 8 + lVar6 * 8);
      local_2f0 = '\0';
      local_90 = local_2f8;
      cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                          *unaff_RDI))(lVar12,(ulonglong)local_c8 & 0xffffffff);
      pVar10 = (pthread_key_t)lVar12;
      if (cVar2 == '\0') {
        bVar20 = false;
        uVar19 = local_58 & 0xffffffff;
        uVar21 = extraout_XMM0_Qa_03;
      }
      else {
        local_2e8 = local_90;
        local_2e0 = '\0';
        uVar21 = (**(code **)(*unaff_RDI + 0xaf0))(extraout_XMM0_Qa_03,&local_2e8);
        plVar11 = local_48;
        uVar9 = (undefined7)((ulonglong)pplVar18 >> 8);
        if (local_48 == plVar17) {
          if (((char)local_58 == '\0') && (local_48 != (longlong *)0x0)) {
            plVar11 = plVar17;
            if (local_40 != '\0') goto LAB_019b12e4;
            uVar19 = CONCAT71(uVar9,1);
            uVar21 = FUN_00d50b00();
          }
          else {
            uVar19 = local_58 & 0xffffffff;
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            uVar19 = CONCAT71(uVar9,1);
            if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
              uVar21 = FUN_00d50b20();
              plVar17 = plVar11;
              goto LAB_019b1330;
            }
          }
          else {
            if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
              uVar21 = FUN_00d50b20();
            }
LAB_019b12e4:
            local_40 = '\0';
          }
          uVar19 = CONCAT71(uVar9,1);
          plVar17 = plVar11;
        }
LAB_019b1330:
        bVar20 = plVar17 == (longlong *)0x0;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_2e0 != '\0') && (local_2e8 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
      }
      if ((local_2f0 != '\0') && (local_2f8 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (bVar20) {
        uVar21 = (**(code **)(&UNK_000014f8 + *unaff_RDI))();
        plVar11 = local_48;
        uVar9 = (undefined7)((ulonglong)uVar21 >> 8);
        cVar2 = (char)uVar19;
        if (local_48 == plVar17) {
          plVar11 = plVar17;
          if ((cVar2 == '\0') && (local_48 != (longlong *)0x0)) {
            local_58 = CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b146e;
            local_58 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            local_58 = uVar19 & 0xffffffff;
          }
joined_r0x019b1446:
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_58 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
            if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x019b1446;
          }
          local_58 = CONCAT71(uVar9,1);
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b146e:
        local_2d8 = local_90;
        local_2d0 = '\0';
        FUN_0197ef60();
        if ((local_2d0 != '\0') && (local_2d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01983ac0();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_160 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_160 = '\x01';
        local_168 = plVar17;
        FUN_0198a7b0();
        if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_2c0 = '\0';
        local_2c8 = plVar11;
        (**(code **)(*unaff_RDI + 0x450))();
        if ((local_2c0 != '\0') && (local_2c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = plVar11;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01981860();
        (**(code **)(*unaff_RDI + 0xed0))();
        plVar17 = local_48;
        local_150 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_150 = '\x01';
        local_158 = plVar17;
        uVar8 = FUN_01983f50();
        uVar21 = extraout_XMM0_Qa_04;
        if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
          uVar21 = extraout_XMM0_Qa_05;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
          uVar21 = extraout_XMM0_Qa_06;
        }
        local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        plVar17 = plVar11;
      }
      else {
        local_58 = uVar19 & 0xffffffff;
      }
      local_2b8 = local_90;
      local_2b0 = '\0';
      cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                          *unaff_RDI + 8))(uVar21,(ulonglong)local_c8 & 0xffffffff);
      if (cVar2 == '\0') {
        bVar20 = false;
        pplVar18 = (longlong **)(local_58 & 0xffffffff);
      }
      else {
        local_2a8 = local_90;
        local_2a0 = '\0';
        (**(code **)(*unaff_RDI + 0xaf8))(extraout_XMM0_Qa_07,&local_2a8);
        plVar11 = local_48;
        uVar9 = (undefined7)(uVar19 >> 8);
        if (local_48 == plVar17) {
          if (((char)local_58 == '\0') && (local_48 != (longlong *)0x0)) {
            plVar11 = plVar17;
            if (local_40 != '\0') goto LAB_019b1744;
            pplVar18 = (longlong **)CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            pplVar18 = (longlong **)(local_58 & 0xffffffff);
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            pplVar18 = (longlong **)CONCAT71(uVar9,1);
            if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar17 = plVar11;
              goto LAB_019b1790;
            }
          }
          else {
            if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_019b1744:
            local_40 = '\0';
          }
          pplVar18 = (longlong **)CONCAT71(uVar9,1);
          plVar17 = plVar11;
        }
LAB_019b1790:
        bVar20 = plVar17 == (longlong *)0x0;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2a0 != '\0') && (local_2a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_2b0 != '\0') && (local_2b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar20) {
        uVar21 = (**(code **)(&UNK_000014f8 + *unaff_RDI))();
        plVar11 = local_48;
        cVar2 = (char)pplVar18;
        uVar9 = (undefined7)((ulonglong)uVar21 >> 8);
        if (local_48 == plVar17) {
          plVar11 = plVar17;
          if ((cVar2 == '\0') && (local_48 != (longlong *)0x0)) {
            local_58 = CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b18be;
            local_58 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            local_58 = (ulonglong)pplVar18 & 0xffffffff;
          }
joined_r0x019b1896:
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_58 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
            if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x019b1896;
          }
          local_58 = CONCAT71(uVar9,1);
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b18be:
        local_298 = local_90;
        local_290 = '\0';
        FUN_0197ef60();
        if ((local_290 != '\0') && (local_298 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01983ad0();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_140 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_140 = '\x01';
        local_148 = plVar17;
        FUN_0198a7b0();
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_280 = '\0';
        local_288 = plVar11;
        (**(code **)(*unaff_RDI + 0x450))();
        if ((local_280 != '\0') && (local_288 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = plVar11;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01981860();
        (**(code **)(*unaff_RDI + 0xed0))();
        plVar17 = local_48;
        local_130 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_130 = '\x01';
        local_138 = plVar17;
        uVar21 = FUN_01983f50();
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        plVar17 = plVar11;
      }
      else {
        local_58 = (ulonglong)pplVar18 & 0xffffffff;
      }
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar13 = -local_78._4_4_;
        }
        else {
          iVar13 = (int)local_78 - local_78._4_4_;
          local_78._4_4_ = (int)(local_78 >> 0x20);
          local_78 = CONCAT44(local_78._4_4_,iVar13);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
    }
    FUN_001159b0();
  }
  local_a0 = plVar17;
  uVar21 = (**(code **)(*unaff_RDI + 0x9d8))(local_100,param_2);
  plVar11 = local_90;
  if ((((local_88 == '\0') && (local_90 != (longlong *)0x0)) &&
      (uVar21 = FUN_00d50b00(), local_88 != '\0')) && (local_90 != (longlong *)0x0)) {
    uVar21 = FUN_00d50b20();
  }
  lVar6 = unaff_RDI[0x48];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (ulonglong)uVar14;
  local_c8 = plVar11;
  if (0 < (int)uVar14) {
    do {
      plVar17 = local_a8;
      uVar14 = uVar14 - 1;
      uVar16 = local_c0 & 0xffffffff;
      (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar14 * 8) + 0x928))();
      local_a8 = local_90;
      uVar9 = (undefined7)((ulonglong)local_90 >> 8);
      cVar2 = (char)uVar16;
      if (plVar17 == local_90) {
        local_c0 = uVar16;
        plVar11 = plVar17;
        if ((cVar2 == '\0') && (plVar17 != (longlong *)0x0)) {
          local_c0 = CONCAT71(uVar9,1);
          if (local_88 != '\0') goto LAB_019b1cd7;
          local_c0 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
joined_r0x019b1c8f:
        local_a8 = plVar11;
        plVar11 = local_a8;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
      else {
        if (local_88 == '\0') {
          uVar21 = 0;
          if (local_90 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          local_c0 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
          plVar11 = local_a8;
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar11 = local_a8;
          }
          goto joined_r0x019b1c8f;
        }
        local_c0 = CONCAT71(uVar9,1);
        plVar11 = local_a8;
        if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
LAB_019b1cd7:
      local_a8 = plVar11;
      local_278 = local_a8;
      local_270 = '\0';
      cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI))();
      bVar4 = 1;
      uVar21 = extraout_XMM0_Qa_08;
      if ((cVar2 != '\0') && (local_c8 != (longlong *)0x0)) {
        local_90 = local_a8;
        local_88 = '\0';
        bVar4 = FUN_00d24090();
        uVar21 = extraout_XMM0_Qa_09;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        bVar4 = bVar4 ^ 1;
      }
      if ((local_270 != '\0') && (local_278 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (bVar4 != 0) {
        plVar17 = *(longlong **)(*(longlong *)(unaff_RDI[0x48] + 0x10) + (ulonglong)uVar14 * 8);
        if (plVar17 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar17 + 0x928))();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar11;
        local_88 = '\0';
        FUN_00e383c0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
        local_260 = '\0';
        local_268 = 0;
        FUN_01960580();
        if ((local_260 != '\0') && (local_268 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar17 + 0x478))();
        uVar21 = FUN_00d50b20();
      }
      plVar17 = local_a0;
      if ((longlong)uVar19 < 2) break;
      uVar19 = uVar19 - 1;
      lVar6 = unaff_RDI[0x48];
    } while( true );
  }
  if (local_c8 != (longlong *)0x0) {
    local_88 = '\0';
    local_90 = (longlong *)0x0;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_100 = DAT_02621e10;
    local_78._4_4_ = 0;
    local_80 = local_c8;
    while( true ) {
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar13 = -local_78._4_4_;
        }
        else {
          iVar13 = (int)local_78 - local_78._4_4_;
          local_78 = CONCAT44(local_78._4_4_,iVar13);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
      lVar6 = (longlong)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((longlong)local_80 + 0xc) <= iVar13) break;
      lVar12 = local_80[2];
      local_258 = *(longlong **)(lVar12 + 8 + lVar6 * 8);
      local_250 = '\0';
      local_90 = local_258;
      (**(code **)(*unaff_RDI + 0xac0))(lVar12,&local_258);
      plVar17 = local_48;
      pVar10 = (pthread_key_t)lVar12;
      if (local_40 == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_250 != '\0') && (local_258 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar17 == (longlong *)0x0) {
        local_248 = local_90;
        local_240 = '\0';
        cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI))
                          ();
        if ((local_240 != '\0') && (local_248 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          plVar17 = (longlong *)FUN_00e8fc40();
          FUN_0034cc20();
          *plVar17 = (longlong)&DAT_02621df8;
          plVar17[2] = (longlong)&DAT_026227f0;
          plVar17[0x27] = (longlong)&DAT_02622830;
          plVar17[0x2d] = (longlong)&DAT_02622860;
          plVar17[0x2e] = (longlong)&DAT_026228b0;
          (*local_100)();
          local_238 = local_90;
          local_230 = '\0';
          FUN_01960580();
          if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar11 = local_48;
          local_120 = 0;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_120 = '\x01';
          local_128 = plVar11;
          FUN_0198a7b0();
          if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_220 = '\0';
          local_228 = plVar17;
          (**(code **)(*unaff_RDI + 0x450))();
          if ((local_220 != '\0') && (local_228 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          local_48 = plVar17;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_210 = '\0';
          local_218 = plVar17;
          uVar21 = (**(code **)(*plVar17 + 0x928))();
          plVar17 = local_48;
          local_110 = 0;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_110 = '\x01';
          local_118 = plVar17;
          uVar21 = FUN_019b43b0(uVar21,&local_118);
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
          if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019b1f00;
        }
      }
      else {
LAB_019b1f00:
        FUN_00d50b20();
      }
    }
    uVar21 = FUN_001159b0();
    plVar17 = local_a0;
  }
  if ((local_108 & 1) != 0) {
    local_208 = local_d0;
    local_200 = '\0';
    (**(code **)(*unaff_RDI + 0xdc8))(uVar21,1);
    if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  for (iVar13 = *(int *)(unaff_RDI[0x48] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  for (iVar13 = *(int *)(unaff_RDI[0x46] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  for (iVar13 = *(int *)(unaff_RDI[0x49] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  uVar19 = (ulonglong)*(uint *)(unaff_RDI[0x4a] + 0xc);
  if (0 < (int)*(uint *)(unaff_RDI[0x4a] + 0xc)) {
    while( true ) {
      FUN_019801c0();
      plVar17 = local_90;
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar17 == (longlong *)0x0) {
        FUN_0198a800();
      }
      if ((longlong)uVar19 < 2) break;
      uVar19 = uVar19 - 1;
    }
    uVar19 = (ulonglong)*(uint *)(unaff_RDI[0x4a] + 0xc);
    plVar17 = local_a0;
    if (0 < (int)*(uint *)(unaff_RDI[0x4a] + 0xc)) {
      while( true ) {
        FUN_019801c0();
        plVar17 = local_90;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar17 != (longlong *)0x0) {
          FUN_0198a800();
        }
        plVar17 = local_a0;
        if ((longlong)uVar19 < 2) break;
        uVar19 = uVar19 - 1;
      }
    }
  }
  if ((longlong *)unaff_RDI[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x58] + 0x458))();
  }
  plVar11 = (longlong *)unaff_RDI[0x59];
  if ((plVar11 != (longlong *)0x0) && ((longlong *)unaff_RDI[0x58] != plVar11)) {
    (**(code **)(*plVar11 + 0x458))();
  }
  if ((local_b4 & 1) != 0) {
    (**(code **)(*unaff_RDI + 0xb48))();
  }
  (**(code **)(&DAT_000014b8 + *unaff_RDI))();
  *(undefined1 *)((longlong)unaff_RDI + 0x3c5) = 0;
  if (local_c8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_4c != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



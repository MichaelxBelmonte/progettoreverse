// Function: FUN_00704d30
// Address: 00704d30
// Size: 5485 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x00704dcb) */
/* WARNING: Removing unreachable block (ram,0x00704dd7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00704d30(undefined8 param_1,undefined4 param_2)

{
  longlong ****pppplVar1;
  longlong ****pppplVar2;
  longlong lVar3;
  longlong ****pppplVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  void *pvVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  longlong *****ppppplVar12;
  longlong **pplVar13;
  longlong *****unaff_RDI;
  longlong *****ppppplVar14;
  longlong *****unaff_R14;
  ulonglong uVar15;
  undefined7 uVar16;
  longlong *****ppppplVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  longlong local_240;
  char local_238;
  longlong ****local_230;
  char local_228;
  longlong ****local_220;
  char local_218;
  longlong ****local_210;
  char local_208;
  longlong ****local_200;
  char local_1f8;
  undefined8 *local_1f0;
  char local_1e8;
  longlong ***local_1e0;
  char local_1d8;
  longlong ****local_1d0;
  char local_1c8;
  undefined8 *local_1c0;
  char local_1b8;
  longlong ****local_1b0;
  char local_1a8;
  undefined8 *local_1a0;
  char local_198;
  longlong ****local_190;
  char local_188;
  undefined8 *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  undefined8 *local_140;
  char local_138;
  undefined8 *local_130;
  char local_128;
  longlong ***local_120;
  char local_118;
  longlong ****local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong ****local_f0;
  char local_e8;
  longlong ***local_e0;
  longlong local_d8;
  char local_d0;
  longlong ****local_c8;
  char local_c0;
  longlong ****local_b8;
  longlong local_b0;
  char local_a8;
  longlong ****local_a0;
  longlong ***local_98;
  longlong ****local_90;
  undefined8 *local_88;
  longlong local_80;
  char local_78;
  longlong ****local_68;
  char local_60;
  longlong ****local_58;
  longlong ****local_50;
  longlong ****local_48;
  char local_40 [8];
  ulonglong local_38;
  
  local_38 = CONCAT44(local_38._4_4_,param_2);
  FUN_006fc300();
  pppplVar1 = local_48;
  if ((((local_40[0] == '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) &&
      (FUN_00d50b00(), unaff_R14 = (longlong *****)pppplVar1, local_40[0] != '\0')) &&
     ((longlong *****)local_48 != (longlong *****)0x0)) {
    FUN_00d50b20();
  }
  local_90 = pppplVar1;
  FUN_00743080();
  local_a0 = local_48;
  if (local_40[0] == '\0') {
    if ((((longlong *****)local_48 != (longlong *****)0x0) && (FUN_00d50b00(), local_40[0] != '\0'))
       && ((longlong *****)local_48 != (longlong *****)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (*(int *)((longlong)local_a0 + 0xc) == 0) {
    if (((longlong *****)local_90 == (longlong *****)0x0) ||
       (*(int *)((longlong)local_90 + 0xc) == 0)) {
      iVar7 = FUN_01ca3250();
      uVar15 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),iVar7 != 0);
      if ((iVar7 == 0) || ((char)local_38 == '\0')) goto LAB_00706278;
      if (0 < iVar7) {
        do {
          uVar19 = FUN_006f3f00();
          lVar3 = CONCAT71(local_80._1_7_,(char)local_80);
          local_240 = 0;
          local_238 = '\0';
          FUN_0078a130(uVar19,&local_240);
          pppplVar1 = local_68;
          if (local_60 == '\0') {
            if ((longlong *****)local_68 != (longlong *****)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_48 = pppplVar1;
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if ((longlong *****)pppplVar1 != (longlong *****)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && ((longlong *****)local_68 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if ((local_238 != '\0') && (local_240 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (lVar3 != 0)) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_006f63e0();
      pppplVar1 = unaff_RDI[2];
      if (pppplVar1 != (longlong ****)0x0) {
        FUN_00d50b00();
      }
      local_230 = local_90;
      local_228 = '\0';
      FUN_002ea230();
      if ((local_228 != '\0') && ((longlong *****)local_230 != (longlong *****)0x0)) {
        FUN_00d50b20();
      }
      if (pppplVar1 != (longlong ****)0x0) {
        FUN_00d50b20();
      }
    }
    pppplVar1 = unaff_RDI[2];
    if (pppplVar1 != (longlong ****)0x0) {
      FUN_00d50b00();
    }
    FUN_01beead0();
    pppplVar2 = local_68;
    if (local_60 == '\0') {
      if ((longlong *****)local_68 != (longlong *****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_007035b0();
    pppplVar4 = local_48;
    if ((local_40[0] == '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
      FUN_00d50b00();
    }
    if ((longlong *****)pppplVar2 != (longlong *****)0x0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && ((longlong *****)local_68 != (longlong *****)0x0)) {
      FUN_00d50b20();
    }
    if (pppplVar1 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    pppplVar1 = unaff_RDI[2];
    local_b8 = pppplVar4;
    if (pppplVar1 != (longlong ****)0x0) {
      FUN_00d50b00();
    }
    ppppplVar14 = &local_48;
    FUN_01be8160();
    pppplVar2 = local_48;
    FUN_00083c20();
    if ((longlong *****)pppplVar2 == (longlong *****)0x0) {
LAB_007050c2:
      ppppplVar14 = (longlong *****)&DAT_02802688;
    }
    else {
      (*(code *)(*pppplVar2)[0x6c])();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_007050c2;
    }
    pppplVar2 = *ppppplVar14;
    if (*(char *)(ppppplVar14 + 1) == '\0') {
      if (pppplVar2 != (longlong ****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(ppppplVar14 + 1) = 0;
    }
    if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
      FUN_00d50b20();
    }
    if (pppplVar1 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    local_98 = (longlong ***)pppplVar2;
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*DAT_02572370)();
    pppplVar1 = unaff_RDI[0x11];
    local_e0 = (longlong ***)(pppplVar1 + 2);
    local_88 = puVar8;
    if (pppplVar1 == (longlong ****)0x0) {
      local_e0 = (longlong ***)0x0;
    }
    else {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_80._0_1_ = '\0';
    local_68 = (longlong ****)unaff_RDI;
    do {
      ppppplVar14 = (longlong *****)local_68;
      (*(code *)(*local_68)[0x6e])();
      ppppplVar12 = (longlong *****)local_48;
      if ((longlong *****)local_48 == ppppplVar14) {
        if ((((char)local_80 == '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) &&
           (ppppplVar12 = ppppplVar14, local_40[0] != '\0')) goto LAB_007051f7;
      }
      else {
        local_68 = local_48;
        if (local_40[0] == '\0') {
          if ((char)local_80 == '\0') {
            plVar10 = &local_80;
          }
          else {
            FUN_00d50b20();
            plVar10 = &local_80;
          }
        }
        else {
          if ((char)local_80 != '\0') {
            FUN_00d50b20();
          }
LAB_007051f7:
          local_80._0_1_ = '\x01';
          plVar10 = (longlong *)local_40;
        }
        *(char *)plVar10 = '\0';
        ppppplVar14 = ppppplVar12;
      }
      if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026fddb0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026e0ab8 = FUN_00015ff0();
        _DAT_026e0aa0 = "MDMetaWindowController";
        _DAT_026e0aa8 = 0x198;
        _DAT_026e0ab0 = FUN_0006dea0;
        _DAT_026e0ac0 = 0;
        uRam00000000026e0ac8 = 0;
        _DAT_026e0ad0 = 0;
        _DAT_026e0b48 = 0;
        uRam00000000026e0b50 = 0;
        _DAT_026e0b58 = 0;
        DAT_026e0b5a = 1;
        _DAT_026e0ad8 = 0;
        uRam00000000026e0ae0 = 0;
        _DAT_026e0ae8 = 0;
        uRam00000000026e0af0 = 0;
        _DAT_026e0af8 = 0;
        uRam00000000026e0b00 = 0;
        _DAT_026e0b08 = 0;
        uRam00000000026e0b10 = 0;
        _DAT_026e0b18 = 0;
        uRam00000000026e0b20 = 0;
        _DAT_026e0b28 = 0;
        uRam00000000026e0b30 = 0;
        _DAT_026e0b38 = 0;
        uRam00000000026e0b40 = 0;
        DAT_026e0b63 = 0;
        _DAT_026e0b5b = 0;
        ___cxa_guard_release();
      }
      ppppplVar12 = (longlong *****)&DAT_02802688;
      if (ppppplVar14 != (longlong *****)0x0) {
        (*(code *)(*ppppplVar14)[0x6c])();
        cVar5 = FUN_00e85ea0();
        ppppplVar12 = &local_68;
        if (cVar5 == '\0') {
          ppppplVar12 = (longlong *****)&DAT_02802688;
        }
      }
      ppppplVar17 = (longlong *****)local_68;
      ppppplVar14 = (longlong *****)local_b8;
      if (*ppppplVar12 != (longlong ****)0x0) {
        if (((char)local_80 == '\0') && ((longlong *****)local_68 != (longlong *****)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_00705375;
      }
    } while ((longlong *****)local_68 != (longlong *****)0x0);
    ppppplVar17 = (longlong *****)0x0;
LAB_00705375:
    pVar11 = (pthread_key_t)ppppplVar12;
    FUN_00d50b20();
    ppppplVar12 = (longlong *****)&DAT_026e0a01;
    if (ppppplVar17 != (longlong *****)0x0) {
      FUN_0062abf0();
      pppplVar2 = local_48;
      if (local_40[0] == '\0') {
        if ((longlong *****)local_48 == (longlong *****)0x0) goto LAB_007053de;
        FUN_00d50b00();
        if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
LAB_007053c8:
        bVar18 = (longlong ****)pppplVar2[0x61] != (longlong ****)0x0;
        FUN_00d50b20();
      }
      else {
        if ((longlong *****)local_48 != (longlong *****)0x0) goto LAB_007053c8;
LAB_007053de:
        bVar18 = false;
      }
      FUN_00d50b20();
      if (bVar18) {
        (*(code *)(*unaff_RDI)[0xbb])();
        if ((longlong *****)local_48 == (longlong *****)0x0) {
          bVar18 = false;
        }
        else {
          (*(code *)(*unaff_RDI)[0xbb])();
          FUN_0063f230();
          bVar18 = (longlong *****)local_68 != (longlong *****)0x0;
          if ((local_60 != '\0') && ((longlong *****)local_68 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        if (bVar18) {
          (*(code *)(*unaff_RDI)[0xbb])();
          FUN_0063f230();
          FUN_00228b30();
          ppppplVar12 = (longlong *****)&DAT_026e0a00;
          if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && ((longlong *****)local_68 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_01f27fe0();
    cVar5 = (*(code *)(*local_48)[0x8a])();
    if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_01c93080();
    }
    FUN_01c93070();
    if ((ppppplVar14 == (longlong *****)0x0) || (*(int *)((longlong)ppppplVar14 + 0xc) == 0)) {
      pppplVar2 = unaff_RDI[2];
      if (pppplVar2 != (longlong ****)0x0) {
        FUN_00d50b00();
      }
      local_50 = (longlong ****)FUN_01bf0360();
      if (pppplVar2 != (longlong ****)0x0) {
        FUN_00d50b20();
      }
      if ((longlong ****)local_98 == (longlong ****)0x0) {
        local_1b0 = local_90;
        local_1a8 = '\0';
        local_1a0 = local_88;
        local_198 = '\0';
        cVar5 = FUN_01c9db50((int)local_50,&local_1a0);
        if ((local_198 != '\0') && (local_1a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = (longlong ****)0x0;
        local_58 = (longlong ****)0x0;
        if ((local_1a8 != '\0') && ((longlong *****)local_1b0 != (longlong *****)0x0)) {
          FUN_00d50b20();
LAB_00705939:
          local_58 = (longlong ****)0x0;
          local_50 = (longlong ****)0x0;
        }
      }
      else {
        FUN_01a8c310();
        pppplVar2 = local_48;
        if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        if ((longlong *****)pppplVar2 == (longlong *****)0x0) {
          local_58 = (longlong ****)0x0;
          local_50 = (longlong ****)0x0;
          uVar15 = 0;
          goto LAB_0070620d;
        }
        local_1e0 = local_98;
        local_1d8 = '\0';
        ppppplVar12 = (longlong *****)FUN_01ca2ec0((int)local_50);
        if ((local_1d8 != '\0') && ((longlong ****)local_1e0 != (longlong ****)0x0)) {
          FUN_00d50b20();
        }
        local_1d0 = local_90;
        local_1c8 = '\0';
        FUN_006f3f00();
        pppplVar2 = local_48;
        uVar6 = FUN_0076f070();
        local_1c0 = local_88;
        local_1b8 = '\0';
        cVar5 = FUN_01ca1b40(uVar6,ppppplVar12,&local_1c0,local_38 & 0xff);
        if ((local_1b8 != '\0') && (local_1c0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && ((longlong *****)pppplVar2 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        local_50 = (longlong ****)0x0;
        local_58 = (longlong ****)0x0;
        if ((local_1c8 != '\0') && ((longlong *****)local_1d0 != (longlong *****)0x0)) {
          FUN_00d50b20();
          goto LAB_00705939;
        }
      }
LAB_00705aa5:
      puVar8 = local_140;
      if (((char)local_38 != '\0') && (cVar5 != '\0')) {
        plVar10 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        uVar19 = (**(code **)(*plVar10 + 0x18))();
        ppppplVar14 = DAT_026de560;
        if (((longlong *****)local_50 != (longlong *****)0x0) &&
           (*(int *)((longlong)local_50 + 0xc) != 0)) {
          local_190 = local_50;
          local_188 = '\0';
          if (DAT_026de560 != (longlong *****)0x0) {
            uVar19 = FUN_00d50b00();
          }
          local_48 = (longlong ****)ppppplVar14;
          local_40[0] = '\0';
          FUN_00ca0840(uVar19,&local_48);
          if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if (ppppplVar14 != (longlong *****)0x0) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && ((longlong *****)local_190 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != (undefined8 *)0x0) && (*(int *)((longlong)local_88 + 0xc) != 0)) {
          local_180 = local_88;
          local_178 = '\0';
          uVar19 = FUN_00243390();
          local_c8 = local_68;
          local_c0 = 0;
          if (local_60 == '\0') {
            if ((longlong *****)local_68 != (longlong *****)0x0) {
              uVar19 = FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          ppppplVar14 = DAT_0270b8f0;
          local_c0 = '\x01';
          if (DAT_0270b8f0 != (longlong *****)0x0) {
            uVar19 = FUN_00d50b00();
          }
          local_48 = (longlong ****)ppppplVar14;
          local_40[0] = '\0';
          FUN_00ca0840(uVar19,&local_48);
          if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if (ppppplVar14 != (longlong *****)0x0) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && ((longlong *****)local_c8 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && ((longlong *****)local_68 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d403d0();
        ppppplVar12 = (longlong *****)local_48;
        local_170 = DAT_026de568;
        if (DAT_026de568 != 0) {
          FUN_00d50b00();
        }
        local_168 = '\x01';
        local_e8 = 0;
        FUN_00d50b00();
        local_e8 = '\x01';
        local_158 = '\0';
        pplVar13 = &local_160;
        local_160 = plVar10;
        local_f0 = (longlong ****)unaff_RDI;
        FUN_00d40470(pplVar13,&local_f0,1,0);
        pVar11 = (pthread_key_t)pplVar13;
        if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && ((longlong *****)local_f0 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        if (local_88 != (undefined8 *)0x0) {
          FUN_00d23310();
          pppplVar2 = local_48;
          ppppplVar12 = (longlong *****)local_40;
          local_68 = (longlong ****)CONCAT71(local_68._1_7_,local_40[0]);
          ppppplVar14 = ppppplVar12;
          if (local_40[0] == '\0') {
            ppppplVar14 = &local_68;
          }
          *(undefined1 *)ppppplVar14 = 0;
          if ((local_40[0] != '\0') && ((longlong *****)pppplVar2 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_68 != '\0') && ((longlong *****)pppplVar2 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          if ((longlong *****)pppplVar2 != (longlong *****)0x0) {
            FUN_00d23310();
            pppplVar2 = local_48;
            if (local_40[0] == '\0') {
              ppppplVar12 = &local_68;
            }
            local_68 = (longlong ****)CONCAT71(local_68._1_7_,local_40[0]);
            *(undefined1 *)ppppplVar12 = 0;
            if ((local_40[0] != '\0') && ((longlong *****)pppplVar2 != (longlong *****)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e8b990();
            local_148 = '\0';
            local_150 = (longlong *)0x0;
            FUN_00cb1fa0();
            if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
              (**(code **)(*local_150 + 0x10))();
              FUN_00d50b20();
            }
            if (((char)local_68 != '\0') && ((longlong *****)pppplVar2 != (longlong *****)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
        iVar7 = *(int *)((longlong)local_88 + 0xc);
        puVar8 = local_140;
        local_140 = local_88;
joined_r0x00705e9d:
        cVar5 = '\x01';
        local_88 = local_140;
        if (iVar7 != 0) {
          cVar5 = '\x01';
          local_138 = '\0';
          local_38 = FUN_012664b0();
          if ((local_138 != '\0') && (local_140 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((longlong ****)local_98 == (longlong ****)0x0) {
            (*(code *)(*local_e0)[0xc])((int)local_38);
            puVar8 = local_140;
          }
          else {
            local_130 = local_88;
            local_128 = '\0';
            local_120 = local_98;
            local_118 = '\0';
            puVar8 = local_88;
            FUN_01ca29a0(local_88,&local_120);
            pVar11 = (pthread_key_t)puVar8;
            if ((local_118 != '\0') && ((longlong ****)local_120 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            FUN_006f3f00();
            (*(code *)(*local_110)[0xc5])();
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_004a1110();
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01313ad0();
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012caf10();
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016c98e0();
            (*(code *)(*local_e0)[0xc])();
            if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && ((longlong *****)local_68 != (longlong *****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            ppppplVar12 = (longlong *****)local_110;
            puVar8 = local_140;
            if (local_108 != '\0') {
              FUN_00d50b20();
              puVar8 = local_140;
            }
          }
        }
      }
      local_140 = puVar8;
      uVar15 = CONCAT71((int7)((ulonglong)ppppplVar12 >> 8),cVar5 != '\0');
      ppppplVar14 = (longlong *****)local_b8;
    }
    else {
      local_220 = (longlong ****)ppppplVar14;
      local_218 = '\0';
      cVar5 = FUN_01ca1fa0();
      uVar19 = extraout_XMM0_Da;
      if ((local_218 != '\0') && ((longlong *****)local_220 != (longlong *****)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      uVar16 = (undefined7)((ulonglong)ppppplVar12 >> 8);
      if (cVar5 == '\0') {
        local_210 = (longlong ****)ppppplVar14;
        local_208 = '\0';
        FUN_00243390();
        local_50 = local_48;
        if ((longlong *****)local_48 == (longlong *****)0x0) {
          local_50 = (longlong ****)0x0;
          ppppplVar12 = (longlong *****)0x0;
        }
        else if (local_40[0] == '\0') {
          FUN_00d50b00();
          ppppplVar12 = (longlong *****)CONCAT71(uVar16,1);
          if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
          ppppplVar12 = (longlong *****)CONCAT71(uVar16,1);
        }
        if ((local_208 != '\0') && ((longlong *****)local_210 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (longlong ****)ppppplVar12;
        if ((char)local_38 != '\0') {
          pppplVar2 = unaff_RDI[2];
          if (pppplVar2 != (longlong ****)0x0) {
            FUN_00d50b00();
          }
          FUN_002eab40();
          if (pppplVar2 != (longlong ****)0x0) {
            FUN_00d50b20();
          }
        }
        local_200 = local_50;
        local_1f8 = '\0';
        local_1f0 = local_88;
        local_1e8 = '\0';
        cVar5 = FUN_01c97b90(local_38 & 0xff,&local_1f0);
        if ((local_1e8 != '\0') && (local_1f0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1f8 != '\0') && ((longlong *****)local_200 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00705aa5;
      }
      if ((char)local_38 != '\0') {
        local_48 = (longlong ****)ppppplVar14;
        local_40[0] = '\0';
        FUN_00d214d0(uVar19,*(undefined4 *)((longlong)local_88 + 0xc));
        if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        pppplVar2 = unaff_RDI[2];
        if (pppplVar2 != (longlong ****)0x0) {
          FUN_00d50b00();
        }
        FUN_002eab40();
        if (pppplVar2 != (longlong ****)0x0) {
          FUN_00d50b20();
        }
        FUN_006f3f00();
        (*(code *)(*local_110)[0xc5])();
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        FUN_00cb1f10();
        ppppplVar12 = (longlong *****)local_48;
        FUN_00d3af20();
        local_d8 = local_100;
        local_d0 = 0;
        if (local_f8 == '\0') {
          if (local_100 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f8 = '\0';
        }
        local_d0 = '\x01';
        FUN_00db2790();
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && ((longlong *****)local_48 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && ((longlong *****)local_68 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (local_108 != '\0') {
          FUN_00d50b20();
        }
        local_58 = (longlong ****)0x0;
        local_50 = (longlong ****)0x0;
        iVar7 = *(int *)((longlong)local_88 + 0xc);
        puVar8 = local_140;
        local_140 = local_88;
        goto joined_r0x00705e9d;
      }
      uVar15 = CONCAT71(uVar16,1);
      local_58 = (longlong ****)0x0;
      local_50 = (longlong ****)0x0;
    }
LAB_0070620d:
    if (pppplVar1 != (longlong ****)0x0) {
      (*(code *)(*local_e0)[2])();
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && ((longlong *****)local_50 != (longlong *****)0x0)) {
      FUN_00d50b20();
    }
    if (local_88 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_98 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if (ppppplVar14 != (longlong *****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong *****)local_a0 == (longlong *****)0x0) goto LAB_00706284;
  }
  else {
    uVar15 = 0;
  }
LAB_00706278:
  FUN_00d50b20();
LAB_00706284:
  if ((longlong *****)local_90 != (longlong *****)0x0) {
    FUN_00d50b20();
  }
  return uVar15 & 0xffffffff;
}



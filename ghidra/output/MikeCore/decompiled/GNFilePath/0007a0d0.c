// Function: FUN_0007a0d0
// Address: 0007a0d0
// Size: 4875 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNSoundFile"
//   "MDDocumentViewController"
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007a0d0(double param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *pvVar10;
  ulonglong uVar11;
  pthread_key_t pVar12;
  longlong *in_RCX;
  longlong **pplVar13;
  longlong *plVar14;
  longlong *unaff_RSI;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  double local_1c0 [2];
  undefined1 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  undefined8 *local_180;
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
  longlong *local_100;
  char local_f8;
  undefined4 local_ec;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  local_38 = param_2;
  FUN_01d384d0();
  plVar15 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_0010f340();
  local_88 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  local_ec = param_3;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar15 = (longlong *)*unaff_RSI;
  cVar5 = (char)unaff_RSI[1];
  if ((cVar5 != '\0') && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_98 = plVar15;
  local_90 = cVar5;
  if (DAT_028032a0 != 0) {
    cVar5 = '\0';
    if (plVar15 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      do {
        if ((DAT_026d8470 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
        pplVar13 = (longlong **)&DAT_02802688;
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar13 = &local_98;
          if (cVar4 == '\0') {
            pplVar13 = (longlong **)&DAT_02802688;
          }
        }
        plVar14 = *pplVar13;
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          cVar5 = *(char *)(pplVar13 + 1);
          if (cVar5 != '\0') {
            FUN_00d50b00();
          }
        }
        plVar3 = local_98;
        (**(code **)(*local_98 + 0x370))();
        plVar15 = local_80;
        cVar4 = local_90;
        if (local_80 == plVar3) {
          plVar15 = plVar3;
          if (local_90 != '\0') goto LAB_0007a30c;
          if (local_78 == '\0') {
            FUN_00d50b00();
            goto LAB_0007a305;
          }
LAB_0007a2f9:
          local_90 = '\x01';
        }
        else {
          if (local_78 != '\0') {
            local_98 = local_80;
            if (local_90 != '\0') {
              FUN_00d50b20();
            }
            goto LAB_0007a2f9;
          }
          if (local_80 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_98 = plVar15;
          if (cVar4 != '\0') {
            FUN_00d50b20();
          }
LAB_0007a305:
          local_90 = '\x01';
LAB_0007a30c:
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      } while ((plVar15 != (longlong *)0x0) && (plVar14 == (longlong *)0x0));
    }
    FUN_0035c4c0(param_1);
    local_1a0 = *local_38;
    local_198 = '\0';
    FUN_0035c4f0();
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    lVar9 = DAT_028032a0;
    if (DAT_028032a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00700e90();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if (DAT_028032a0 != 0) {
      DAT_028032a0 = 0;
      FUN_00d50b20();
    }
    local_50 = (longlong *)0x0;
    local_58 = 0;
    if ((cVar5 == '\0') || (plVar14 == (longlong *)0x0)) {
      uVar7 = 1;
    }
    else {
      FUN_00d50b20();
      uVar7 = 1;
      local_58 = 0;
      local_50 = (longlong *)0x0;
    }
    goto LAB_0007b33c;
  }
  if (plVar15 == (longlong *)0x0) {
    local_58 = 0;
    local_50 = (longlong *)0x0;
  }
  else {
    uVar11 = 0;
    do {
      FUN_00082eb0();
      pplVar13 = (longlong **)&DAT_02802688;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar13 = &local_98;
        if (cVar4 == '\0') {
          pplVar13 = (longlong **)&DAT_02802688;
        }
      }
      local_50 = *pplVar13;
      if (*pplVar13 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        local_58 = uVar11;
      }
      else {
        local_58 = (ulonglong)*(byte *)(pplVar13 + 1);
        if (*(byte *)(pplVar13 + 1) != 0) {
          FUN_00d50b00();
        }
      }
      (**(code **)(*plVar15 + 0x370))();
      plVar14 = local_80;
      if (plVar15 == local_80) {
        if ((cVar5 != '\0') || (plVar15 == (longlong *)0x0)) goto LAB_0007a580;
        plVar14 = plVar15;
        if (local_78 == '\0') {
          FUN_00d50b00();
          goto LAB_0007a573;
        }
LAB_0007a523:
        local_90 = '\x01';
        cVar5 = '\x01';
        plVar15 = plVar14;
      }
      else {
        if (local_78 != '\0') {
          local_98 = local_80;
          if ((cVar5 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0007a523;
        }
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_98 = plVar14;
        if ((cVar5 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0007a573:
        local_90 = '\x01';
        cVar5 = '\x01';
        plVar15 = plVar14;
LAB_0007a580:
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    } while ((plVar15 != (longlong *)0x0) &&
            (uVar11 = local_58 & 0xffffffff, local_50 == (longlong *)0x0));
  }
  cVar5 = FUN_0010f8e0();
  if (cVar5 != '\0') {
    FUN_0010db00();
    plVar15 = local_80;
    if ((((local_78 == '\0') && (local_80 != (longlong *)0x0)) && (FUN_00d50b00(), local_78 != '\0')
        ) && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    uVar16 = (*DAT_02572370)();
    if (plVar15 != (longlong *)0x0) {
      local_78 = '\0';
      local_80 = (longlong *)0x0;
      local_70 = plVar15;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      while( true ) {
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar6 = -local_68._4_4_;
          }
          else {
            iVar6 = (int)local_68 - local_68._4_4_;
            local_68 = CONCAT44(local_68._4_4_,iVar6);
            uVar16 = FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar6 = 0;
          }
          local_68 = CONCAT44(iVar6,(int)local_68);
        }
        lVar9 = (longlong)(int)local_68;
        iVar6 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar6);
        if (*(int *)((longlong)local_70 + 0xc) <= iVar6) break;
        plVar14 = *(longlong **)(local_70[2] + 8 + lVar9 * 8);
        local_80 = plVar14;
        if ((DAT_026d8478 == '\0') &&
           (iVar6 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Qa_02, iVar6 != 0)) {
          _DAT_026f9358 = FUN_00d4fe50();
          _DAT_026f9340 = "GNSoundFile";
          _DAT_026f9348 = 0x98;
          _DAT_026f9350 = FUN_00083bc0;
          _DAT_026f9360 = 0;
          uRam00000000026f9368 = 0;
          _DAT_026f9370 = 0;
          _DAT_026f93e8 = 0;
          uRam00000000026f93f0 = 0;
          _DAT_026f93f8 = 0;
          DAT_026f93fa = 3;
          _DAT_026f9378 = 0;
          uRam00000000026f9380 = 0;
          _DAT_026f9388 = 0;
          uRam00000000026f9390 = 0;
          _DAT_026f9398 = 0;
          uRam00000000026f93a0 = 0;
          _DAT_026f93a8 = 0;
          uRam00000000026f93b0 = 0;
          _DAT_026f93b8 = 0;
          uRam00000000026f93c0 = 0;
          _DAT_026f93c8 = 0;
          uRam00000000026f93d0 = 0;
          _DAT_026f93d8 = 0;
          uRam00000000026f93e0 = 0;
          DAT_026f9403 = 0;
          _DAT_026f93fb = 0;
          uVar16 = ___cxa_guard_release();
        }
        pplVar13 = (longlong **)&DAT_02802688;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar13 = &local_80;
          uVar16 = extraout_XMM0_Qa;
          if (cVar5 == '\0') {
            pplVar13 = (longlong **)&DAT_02802688;
          }
        }
        plVar3 = local_80;
        plVar14 = *pplVar13;
        if (plVar14 == (longlong *)0x0) {
          if ((DAT_026fdd40 == '\0') &&
             (iVar6 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Qa_03, iVar6 != 0)) {
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
            uVar16 = ___cxa_guard_release();
          }
          pplVar13 = (longlong **)&DAT_02802688;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar13 = (longlong **)&DAT_02802688;
            uVar16 = extraout_XMM0_Qa_00;
            if (cVar5 != '\0') {
              if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
              cVar5 = FUN_00e8db60();
              pplVar13 = &local_80;
              uVar16 = extraout_XMM0_Qa_01;
              if (cVar5 == '\0') {
                pplVar13 = (longlong **)&DAT_02802688;
              }
            }
          }
          if (*(char *)(pplVar13 + 1) == '\0') {
            if (*pplVar13 != (longlong *)0x0) {
              uVar16 = FUN_00d50b00();
              goto LAB_0007a926;
            }
          }
          else {
            *(undefined1 *)(pplVar13 + 1) = 0;
            if (*pplVar13 != (longlong *)0x0) {
LAB_0007a926:
              lVar9 = DAT_026d8408;
              if (DAT_026d8408 != 0) {
                uVar16 = FUN_00d50b00();
              }
              local_190 = lVar9;
              local_188 = '\x01';
              FUN_000175c0(uVar16,&local_190);
              plVar14 = local_48;
              if ((DAT_026fde10 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
                _DAT_026d1818 = FUN_00d4fe50();
                DAT_026d1800 = "GNFilePath";
                _DAT_026d1808 = 0x40;
                _DAT_026d1810 = FUN_00041050;
                _DAT_026d1820 = 0;
                uRam00000000026d1828 = 0;
                _DAT_026d1830 = 0;
                uRam00000000026d1838 = 0;
                _DAT_026d1840 = 0;
                uRam00000000026d1848 = 0;
                _DAT_026d1850 = 0;
                uRam00000000026d1858 = 0;
                _DAT_026d1860 = 0;
                uRam00000000026d1868 = 0;
                _DAT_026d1870 = 0;
                uRam00000000026d1878 = 0;
                _DAT_026d1880 = 0;
                uRam00000000026d1888 = 0;
                _DAT_026d1890 = 0;
                uRam00000000026d1898 = 0;
                _DAT_026d18a0 = 0;
                uRam00000000026d18a8 = 0;
                _DAT_026d18b0 = 0;
                uRam00000000026d18b8 = 0;
                _DAT_026d18c0 = 0;
                ___cxa_guard_release();
              }
              pplVar13 = (longlong **)&DAT_02802688;
              if (plVar14 != (longlong *)0x0) {
                (**(code **)(*plVar14 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar13 = &local_48;
                if (cVar5 == '\0') {
                  pplVar13 = (longlong **)&DAT_02802688;
                }
              }
              plVar14 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (plVar14 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar13 + 1) = 0;
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if (plVar14 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              uVar16 = FUN_00d50b20();
            }
          }
        }
        else {
          if (*(char *)(pplVar13 + 1) == '\0') {
            FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar13 + 1) = 0;
          }
          FUN_00b875e0();
          local_40 = '\0';
          local_48 = plVar14;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar16 = FUN_00d50b20();
        }
      }
      FUN_00083b20();
    }
    local_178 = '\0';
    local_170 = *local_38;
    local_168 = '\0';
    local_180 = puVar8;
    uVar7 = FUN_0075edc0(param_1,&local_170);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_0007b33c;
  }
  local_78 = '\0';
  local_80 = (longlong *)0x0;
  puVar8 = &local_1a8;
  uVar7 = FUN_00110420(puVar8,local_1c0,&local_80);
  pVar12 = (pthread_key_t)puVar8;
  if ((char)uVar7 != '\0') {
    if (*local_38 == 0) {
      (**(code **)(*local_50 + 0x628))();
      pvVar10 = _pthread_getspecific(pVar12);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_148 = '\0';
      local_150 = 0;
      local_140 = 0;
      local_138 = '\0';
      FUN_004a41a0(&local_140,&local_150,0);
      plVar3 = local_38;
      plVar14 = local_48;
      plVar15 = (longlong *)*local_38;
      if (plVar15 == local_48) {
        if (((char)local_38[1] != '\0') || (local_48 == (longlong *)0x0)) goto LAB_0007b3b5;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_0007b3b1;
        }
LAB_0007b063:
        *(undefined1 *)(plVar3 + 1) = 1;
        local_40 = '\0';
      }
      else {
        lVar9 = local_38[1];
        if (local_40 != '\0') {
          *local_38 = (longlong)local_48;
          if (((char)lVar9 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0007b063;
        }
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *local_38 = (longlong)plVar14;
        if (((char)lVar9 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0007b3b1:
        *(undefined1 *)(plVar3 + 1) = 1;
LAB_0007b3b5:
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar9 = FUN_00dd6dc0();
    if (lVar9 == *in_RCX) {
      uVar11 = FUN_01d384b0();
      if ((uVar11 & 0x14) == 0) {
        uVar11 = FUN_01d384b0();
        if ((uVar11 & 1) != 0) goto LAB_0007ad82;
      }
      else {
        FUN_00110e00();
        plVar15 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_1b0 = 1;
        FUN_0007bcd0(local_1a8,param_1 - local_1c0[0]);
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
LAB_0007ad82:
      FUN_01be80e0();
      cVar5 = (**(code **)(*local_48 + 0x3c8))();
      uVar16 = extraout_XMM0_Qa_04;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        plVar15 = (longlong *)0x0;
        bVar2 = false;
      }
      else {
        pplVar13 = &local_48;
        FUN_01be8160();
        plVar15 = local_48;
        uVar16 = FUN_00083c20();
        if (plVar15 == (longlong *)0x0) {
LAB_0007ae02:
          pplVar13 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar15 + 0x360))();
          cVar5 = FUN_00e85ea0();
          uVar16 = extraout_XMM0_Qa_05;
          if (cVar5 == '\0') goto LAB_0007ae02;
        }
        plVar15 = *pplVar13;
        if (plVar15 == (longlong *)0x0) {
          bVar2 = false;
        }
        else if (*(char *)(pplVar13 + 1) == '\0') {
          bVar2 = true;
          uVar16 = FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar13 + 1) = 0;
          bVar2 = true;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
      }
      lVar9 = *local_38;
      if (lVar9 == 0) {
        cVar5 = (char)local_38[1];
LAB_0007b19d:
        plVar14 = local_38;
        if ((cVar5 == '\0') && (lVar9 != 0)) goto LAB_0007b1ae;
        if (lVar9 != 0) {
          uVar16 = FUN_00d50b20();
        }
      }
      else {
        uVar16 = FUN_00d50b00();
        lVar1 = *local_38;
        cVar5 = (char)local_38[1];
        if (lVar1 == lVar9) goto LAB_0007b19d;
        *local_38 = lVar9;
        if ((cVar5 != '\0') && (lVar1 != 0)) {
          uVar16 = FUN_00d50b20();
        }
LAB_0007b1ae:
        *(undefined1 *)(local_38 + 1) = 1;
        plVar14 = local_38;
      }
      local_130 = *plVar14;
      local_128 = '\0';
      local_120 = *in_RCX;
      local_118 = '\0';
      local_108 = '\0';
      local_110 = local_120;
      FUN_00111ab0(uVar16,&local_110);
      plVar14 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_f8 = '\0';
      local_100 = plVar15;
      FUN_00113760(local_1a8,param_1 - local_1c0[0]);
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (plVar15 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0007b33c:
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar7;
}



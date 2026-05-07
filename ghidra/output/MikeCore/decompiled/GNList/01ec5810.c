// Function: FUN_01ec5810
// Address: 01ec5810
// Size: 6506 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNMultipleValue"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ec5810(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  undefined7 uVar9;
  longlong **pplVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong *local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  char local_d0;
  undefined7 uStack_cf;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  uint local_54;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  if ((char)unaff_RDI[10] != '\0') {
    return;
  }
  *(undefined1 *)(unaff_RDI + 10) = 1;
  uVar15 = FUN_01ccad60();
  local_80 = local_40;
  if (local_40 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
joined_r0x01ec5872:
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
  }
  else if (local_38[0] == '\0') {
    uVar15 = FUN_00d50b00();
    goto joined_r0x01ec5872;
  }
  lVar13 = DAT_027edfe0;
  if (DAT_027edfe0 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_280 = lVar13;
  local_278 = '\x01';
  uVar15 = FUN_01ccaae0(uVar15,&local_280);
  local_50 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar14 = true;
    local_50 = (longlong *)0x0;
  }
  else {
    if (local_38[0] == '\0') {
      uVar15 = FUN_00d50b00();
      bVar14 = false;
      if ((local_38[0] == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01ec58fe;
      uVar15 = FUN_00d50b20();
    }
    else {
      local_38[0] = '\0';
    }
    bVar14 = false;
  }
LAB_01ec58fe:
  if ((local_278 != '\0') && (local_280 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar1 = DAT_027edfe0;
  lVar13 = DAT_027e7c20;
  if (bVar14) {
    if (DAT_027e7c20 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_260 = lVar13;
    local_258 = '\x01';
    uVar15 = FUN_01ccaae0(uVar15,&local_260);
    plVar8 = local_40;
    plVar11 = local_50;
    plVar6 = local_50;
    if (local_40 == local_50) {
LAB_01ec5a57:
      bVar14 = plVar6 == (longlong *)0x0;
      local_50 = plVar6;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
    }
    else {
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar15 = FUN_00d50b00();
        }
        plVar6 = plVar8;
        if (plVar11 != (longlong *)0x0) {
          uVar15 = FUN_00d50b20();
        }
        goto LAB_01ec5a57;
      }
      if (local_50 != (longlong *)0x0) {
        uVar15 = FUN_00d50b20();
      }
      local_38[0] = '\0';
      bVar14 = plVar8 == (longlong *)0x0;
      local_50 = plVar8;
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    lVar13 = DAT_027e7c20;
    if (bVar14) {
      local_78 = (longlong *)0x0;
    }
    else {
      if (DAT_027e7c20 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_250 = lVar13;
      local_248 = '\x01';
      FUN_01ccab60(uVar15,&local_250);
      local_78 = local_40;
      if (local_40 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
      }
      else if (local_38[0] == '\0') {
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (DAT_027edfe0 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_270 = lVar1;
    local_268 = '\x01';
    FUN_01ccab60(uVar15,&local_270);
    local_78 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_268 != '\0') && (local_270 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_50 == (longlong *)0x0) {
    local_a0 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    goto LAB_01ec61c9;
  }
  FUN_01d25f70();
  local_a0 = local_40;
  if (local_40 == (longlong *)0x0) {
    local_a0 = (longlong *)0x0;
  }
  else if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
          (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar15 = (**(code **)(*local_50 + 0x3f8))();
  uVar9 = (undefined7)((ulonglong)unaff_R12 >> 8);
  if (local_40 == (longlong *)0x0) {
    uVar4 = (uint)CONCAT71(uVar9,1);
  }
  else {
    uVar15 = (**(code **)(*local_50 + 0x3f8))();
    uVar4 = (uint)CONCAT71(uVar9,*(int *)((longlong)local_70 + 0xc) == 0);
    if (local_68 != '\0') {
      uVar15 = FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar13 = DAT_027e7c20;
  local_54 = uVar4 ^ 1;
  plVar11 = (longlong *)0x0;
  if ((local_a0 == (longlong *)0x0) || (local_78 == (longlong *)0x0)) {
LAB_01ec61bd:
    local_48 = (longlong *)0x0;
LAB_01ec61c3:
    plVar8 = (longlong *)0x0;
  }
  else {
    if (DAT_027e7c20 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_240 = lVar13;
    local_238 = '\x01';
    uVar15 = FUN_01ccaae0(uVar15,&local_240);
    lVar13 = DAT_027edfd0;
    if (local_40 == (longlong *)0x0) {
      bVar14 = false;
    }
    else {
      if (DAT_027edfd0 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_230 = lVar13;
      local_228 = '\x01';
      uVar15 = FUN_01ccaae0(uVar15,&local_230);
      bVar14 = local_70 == (longlong *)0x0;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((local_228 != '\0') && (local_230 != 0)) {
        uVar15 = FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    lVar13 = DAT_027edfe0;
    cVar3 = (char)uVar4;
    if (bVar14) {
      FUN_01d836c0();
      local_100 = local_70;
      local_f8 = 0;
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_f8 = '\x01';
      local_220 = local_78;
      local_218 = '\0';
      FUN_01d26fb0(&local_220);
      plVar11 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
LAB_01ec5ec7:
        bVar14 = plVar11 == (longlong *)0x0;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
          goto LAB_01ec5ec7;
        }
        local_38[0] = '\0';
        bVar14 = false;
      }
      if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar14) {
        local_48 = (longlong *)0x0;
        FUN_00d45870();
        local_48 = (longlong *)0x0;
        (**(code **)(*local_80 + 0x918))();
      }
      lVar13 = DAT_027e7c20;
      if (cVar3 == '\0') {
        if (DAT_027e7c20 != 0) {
          FUN_00d50b00();
        }
        local_210 = lVar13;
        local_208 = '\x01';
        cVar3 = FUN_01ccca20();
        if ((local_208 != '\0') && (local_210 != 0)) {
          FUN_00d50b20();
        }
        local_48 = (longlong *)0x0;
        plVar6 = (longlong *)(ulonglong)(local_54 & 0xff);
        if (cVar3 == '\0') {
          plVar6 = (longlong *)0x0;
        }
        plVar8 = (longlong *)0x0;
        goto LAB_01ec61c9;
      }
      goto LAB_01ec61bd;
    }
    if (DAT_027edfe0 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_200 = lVar13;
    local_1f8 = '\x01';
    uVar15 = FUN_01ccaae0(uVar15,&local_200);
    plVar11 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    lVar13 = DAT_027edfd0;
    if (plVar11 == (longlong *)0x0) {
      if (DAT_027edfd0 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_1c0 = lVar13;
      local_1b8 = '\x01';
      uVar15 = FUN_01ccaae0(uVar15,&local_1c0);
      plVar11 = local_40;
      if (local_40 == local_50) {
LAB_01ec6176:
        bVar14 = local_50 == (longlong *)0x0;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      else {
        if (local_38[0] == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_50 = plVar11;
          uVar15 = FUN_00d50b20();
          local_50 = plVar11;
          goto LAB_01ec6176;
        }
        local_50 = local_40;
        uVar15 = FUN_00d50b20();
        local_38[0] = '\0';
        bVar14 = plVar11 == (longlong *)0x0;
        local_50 = plVar11;
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if (bVar14) {
        plVar11 = (longlong *)0x0;
        goto LAB_01ec61bd;
      }
      local_60 = (longlong *)CONCAT71(local_60._1_7_,cVar3);
      if (unaff_RDI[0xc] == 0) {
        local_38[0] = '\0';
        local_40 = (longlong *)0x0;
        local_68 = '\0';
        local_70 = (longlong *)0x0;
        FUN_01ccd250(uVar15,&local_70);
        plVar8 = local_40;
        plVar11 = (longlong *)unaff_RDI[0xc];
        if (plVar11 != local_40) {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          unaff_RDI[0xc] = (longlong)plVar8;
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar8 = local_70;
        plVar11 = (longlong *)unaff_RDI[0xd];
        if (plVar11 != local_70) {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          unaff_RDI[0xd] = (longlong)plVar8;
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_48 = (longlong *)0x0;
      FUN_01d6f8d0();
      local_48 = (longlong *)0x0;
      cVar3 = (**(code **)(*unaff_RDI + 0x508))();
      if (cVar3 != '\0') {
        (**(code **)(*unaff_RDI + 0x510))();
        local_e0 = local_40;
        local_d8 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_d8 = '\x01';
        FUN_01d6f990();
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_48 = (longlong *)0x0;
      FUN_00d216c0();
      lVar13 = DAT_027e7c20;
      if ((char)local_60 == '\0') {
        if (DAT_027e7c20 != 0) {
          FUN_00d50b00();
        }
        local_1b0 = lVar13;
        local_1a8 = '\x01';
        cVar3 = FUN_01ccca20();
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        uVar4 = local_54 & 0xff;
        local_54 = 0;
        if (cVar3 != '\0') {
          local_54 = uVar4;
        }
      }
      local_70 = (longlong *)0x0;
      local_68 = '\x01';
      lVar13 = unaff_RDI[0xc];
      if (lVar13 == 0) {
        uVar15 = FUN_01d25cb0();
        local_60 = local_40;
        if (local_40 == (longlong *)0x0) {
          local_88 = 0;
          local_60 = (longlong *)0x0;
        }
        else {
          local_88 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
          if (((local_38[0] == '\0') && (uVar15 = FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
        }
      }
      else {
        local_128 = 0;
        uVar15 = FUN_00d50b00();
        local_128 = '\x01';
        pplVar10 = &local_40;
        local_130 = lVar13;
        uVar15 = FUN_01d26620(uVar15,&local_130);
        plVar11 = local_40;
        if ((DAT_027048b0 == '\0') &&
           (iVar5 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_01, iVar5 != 0)) {
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
          uVar15 = ___cxa_guard_release();
        }
        if (plVar11 == (longlong *)0x0) {
LAB_01ec64ca:
          pplVar10 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar3 = FUN_00e85ea0();
          uVar15 = extraout_XMM0_Da;
          if (cVar3 == '\0') goto LAB_01ec64ca;
        }
        plVar11 = *pplVar10;
        local_60 = plVar11;
        if (plVar11 == (longlong *)0x0) {
          local_60 = (longlong *)0x0;
          local_88 = 0;
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            plVar11 = (longlong *)FUN_00d50b00();
            uVar15 = extraout_XMM0_Da_00;
          }
          else {
            *(undefined1 *)(pplVar10 + 1) = 0;
          }
          local_88 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      lVar13 = DAT_027e7c20;
      if (local_60 == (longlong *)0x0) {
        local_60 = (longlong *)0x0;
LAB_01ec65fe:
        plVar8 = (longlong *)0x0;
      }
      else {
        if (unaff_RDI[0xd] == 0) goto LAB_01ec65fe;
        if (DAT_027e7c20 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_1a0 = lVar13;
        local_198 = '\x01';
        uVar15 = FUN_01ccaae0(uVar15,&local_1a0);
        plVar11 = local_50;
        plVar8 = local_50;
        if (local_40 != local_50) {
          plVar8 = local_40;
          if (local_38[0] == '\0') {
            if (local_40 != (longlong *)0x0) {
              uVar15 = FUN_00d50b00();
            }
            if (plVar11 != (longlong *)0x0) {
              uVar15 = FUN_00d50b20();
            }
          }
          else {
            if (local_50 != (longlong *)0x0) {
              uVar15 = FUN_00d50b20();
            }
            local_38[0] = '\0';
          }
        }
        lVar13 = DAT_027e7c20;
        local_50 = plVar8;
        if (plVar8 == (longlong *)0x0) {
          bVar14 = false;
        }
        else {
          if (DAT_027e7c20 != 0) {
            uVar15 = FUN_00d50b00();
          }
          local_190 = lVar13;
          local_188 = '\x01';
          uVar15 = FUN_01ccab60(uVar15,&local_190);
          plVar11 = (longlong *)CONCAT71(uStack_cf,local_d0);
          if (plVar11 == local_78) {
LAB_01ec66c7:
            bVar14 = local_78 != (longlong *)0x0;
            if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
              uVar15 = FUN_00d50b20();
            }
          }
          else {
            if (local_c8 == '\0') {
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_78 = plVar11;
              uVar15 = FUN_00d50b20();
              goto LAB_01ec66c7;
            }
            uVar15 = FUN_00d50b20();
            local_c8 = '\0';
            bVar14 = plVar11 != (longlong *)0x0;
            local_78 = plVar11;
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            uVar15 = FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          uVar15 = FUN_00d50b20();
        }
        if (bVar14) {
          local_180 = local_78;
          local_178 = '\0';
          FUN_01d26620(uVar15,&local_180);
          plVar8 = local_40;
          cVar3 = local_68;
          plVar11 = local_70;
          if (local_70 == local_40) {
            plVar8 = local_70;
            if ((local_68 != '\0') || (local_40 == (longlong *)0x0)) goto LAB_01ec67e5;
            if (local_38[0] == '\0') {
              FUN_00d50b00();
              plVar8 = plVar11;
              goto LAB_01ec67de;
            }
LAB_01ec67a2:
            local_68 = '\x01';
            local_38[0] = '\0';
          }
          else {
            if (local_38[0] != '\0') {
              local_70 = local_40;
              if ((local_68 != '\0') && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01ec67a2;
            }
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_70 = plVar8;
            if ((cVar3 != '\0') && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ec67de:
            local_68 = '\x01';
LAB_01ec67e5:
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((DAT_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_026d3c38 = FUN_00d4fe50();
            _DAT_026d3c20 = "GNMultipleValue";
            _DAT_026d3c28 = 0x18;
            _DAT_026d3c30 = FUN_00050c70;
            _DAT_026d3c40 = 0;
            uRam00000000026d3c48 = 0;
            _DAT_026d3c50 = 0;
            uRam00000000026d3c58 = 0;
            _DAT_026d3c60 = 0;
            uRam00000000026d3c68 = 0;
            _DAT_026d3c70 = 0;
            uRam00000000026d3c78 = 0;
            _DAT_026d3c80 = 0;
            uRam00000000026d3c88 = 0;
            _DAT_026d3c90 = 0;
            uRam00000000026d3c98 = 0;
            _DAT_026d3ca0 = 0;
            uRam00000000026d3ca8 = 0;
            _DAT_026d3cb0 = 0;
            uRam00000000026d3cb8 = 0;
            _DAT_026d3cc0 = 0;
            uRam00000000026d3cc8 = 0;
            _DAT_026d3cd0 = 0;
            uRam00000000026d3cd8 = 0;
            _DAT_026d3ce0 = 0;
            ___cxa_guard_release();
          }
          if (plVar8 == (longlong *)0x0) {
LAB_01ec6861:
            pplVar10 = (longlong **)&DAT_02802688;
          }
          else {
            local_98 = (longlong *)0x0;
            (**(code **)(*plVar8 + 0x360))();
            local_98 = (longlong *)0x0;
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_01ec6861;
            pplVar10 = &local_70;
          }
          plVar11 = *pplVar10;
          if (plVar11 == (longlong *)0x0) goto LAB_01ec68e8;
          local_90 = CONCAT71((int7)((ulonglong)pplVar10 >> 8),*(char *)(pplVar10 + 1));
          if (*(char *)(pplVar10 + 1) != '\0') {
            local_98 = (longlong *)0x0;
            FUN_00d50b00();
          }
          FUN_00e987e0();
          plVar6 = local_40;
          cVar3 = local_68;
          plVar8 = local_70;
          if (local_70 == local_40) {
            if ((local_68 != '\0') || (local_40 == (longlong *)0x0)) goto LAB_01ec6f37;
            if (local_38[0] == '\0') {
              FUN_00d50b00();
              goto LAB_01ec6f33;
            }
LAB_01ec69c3:
            local_68 = '\x01';
          }
          else {
            if (local_38[0] != '\0') {
              local_70 = local_40;
              if ((local_68 != '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01ec69c3;
            }
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_70 = plVar6;
            if ((cVar3 != '\0') && (plVar8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ec6f33:
            local_68 = '\x01';
LAB_01ec6f37:
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
LAB_01ec68e8:
          plVar11 = (longlong *)0x0;
          local_90 = 0;
        }
        plVar8 = local_60;
        local_98 = plVar11;
        if ((char)unaff_RDI[0xe] != '\0') {
          FUN_01ec8130(unaff_RDI[0xd],FUN_00e8b320);
          plVar6 = local_40;
          uVar9 = (undefined7)((ulonglong)plVar11 >> 8);
          if (local_40 == plVar8) {
            if (((char)local_88 == '\0') && (local_40 != (longlong *)0x0)) {
              uVar12 = CONCAT71(uVar9,1);
              if (local_38[0] != '\0') goto LAB_01ec6a1a;
              uVar12 = CONCAT71(uVar9,1);
              FUN_00d50b00();
            }
            else {
              uVar12 = local_88 & 0xffffffff;
            }
LAB_01ec6a06:
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              uVar12 = CONCAT71(uVar9,1);
              if ((char)local_88 == '\0') {
                local_60 = plVar6;
              }
              else {
                local_60 = plVar6;
                FUN_00d50b20();
              }
              goto LAB_01ec6a06;
            }
            uVar12 = CONCAT71(uVar9,1);
            if ((char)local_88 == '\0') {
              local_60 = local_40;
            }
            else {
              local_60 = local_40;
              FUN_00d50b20();
            }
          }
LAB_01ec6a1a:
          local_88 = uVar12 & 0xffffffff;
        }
        local_40 = local_60;
        local_38[0] = '\0';
        FUN_00d243f0();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = local_70;
        if (*(int *)((longlong)local_60 + 0xc) < 1) {
          plVar8 = (longlong *)0x0;
          local_48 = (longlong *)0x0;
        }
        else {
          lVar13 = 0;
          local_48 = (longlong *)0x0;
          plVar8 = (longlong *)0x0;
          do {
            plVar6 = *(longlong **)(local_60[2] + lVar13 * 8);
            if (plVar8 != plVar6) {
              if (plVar6 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar14 = plVar8 != (longlong *)0x0;
              plVar8 = plVar6;
              if (bVar14) {
                FUN_00d50b20();
              }
            }
            local_168 = '\0';
            local_118 = 0;
            lVar1 = unaff_RDI[0xd];
            local_170 = plVar8;
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            local_118 = '\x01';
            plVar6 = &local_120;
            local_120 = lVar1;
            FUN_01d26fb0(plVar6,&local_170);
            plVar2 = local_40;
            local_b8 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_b8 = '\x01';
            local_c0 = plVar2;
            FUN_01d6f990();
            if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((plVar8 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
              local_160 = plVar11;
              local_158 = '\0';
              cVar3 = (**(code **)(*plVar8 + 0x50))();
              if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar3 != '\0') {
                (**(code **)(*unaff_RDI + 0x508))();
                local_48 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
                (**(code **)(*local_80 + 0x918))();
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((longlong)local_60 + 0xc));
        }
        if (plVar11 == (longlong *)0x0) {
          if (local_98 != (longlong *)0x0) {
            local_148 = '\0';
            local_150 = 0;
            cVar3 = FUN_00e98920();
            if ((local_148 != '\0') && (local_150 != 0)) {
              FUN_00d50b20();
            }
            if (cVar3 != '\0') {
              (**(code **)(*local_80 + 0x918))();
              goto LAB_01ec6ed2;
            }
          }
          (**(code **)(*unaff_RDI + 0x508))();
          (**(code **)(*local_80 + 0x918))();
        }
        else if (((ulonglong)local_48 & 1) == 0) {
          local_140 = plVar11;
          local_138 = '\0';
          local_108 = 0;
          lVar13 = unaff_RDI[0xd];
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          pplVar10 = &local_40;
          local_110 = lVar13;
          FUN_01d26fb0(&local_110,&local_140);
          plVar11 = local_40;
          if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            local_48 = plVar8;
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
            plVar8 = local_48;
          }
          if (plVar11 == (longlong *)0x0) {
LAB_01ec6cdb:
            pplVar10 = (longlong **)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar11 + 0x360))();
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_01ec6cdb;
          }
          local_a8 = 0;
          plVar11 = *pplVar10;
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar10 + 1) = 0;
          }
          local_a8 = '\x01';
          local_b0 = plVar11;
          (**(code **)(*local_80 + 0x968))();
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar13 = FUN_00cafdf0();
          if ((lVar13 != 0) && (*(int *)((longlong)local_60 + 0xc) != 0)) {
            FUN_00cafdf0();
            FUN_00d23310();
            plVar11 = local_40;
            pcVar7 = &local_d0;
            if (local_38[0] != '\0') {
              pcVar7 = local_38;
            }
            local_d0 = local_38[0];
            *pcVar7 = '\0';
            if ((local_38[0] != '\0') && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00cafdf0();
            if ((local_d0 != '\0') && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_54 = 0;
        }
LAB_01ec6ed2:
        if (((char)local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar11 = (longlong *)0x0;
      local_48 = plVar8;
      if (((char)local_88 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar11 = (longlong *)0x0;
      }
      goto LAB_01ec61c3;
    }
    FUN_01d836c0();
    local_f0 = local_70;
    local_e8 = 0;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_e8 = '\x01';
    local_1f0 = local_78;
    local_1e8 = '\0';
    FUN_01d26fb0(&local_1f0,&local_f0);
    plVar8 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
LAB_01ec6036:
      bVar14 = plVar8 == (longlong *)0x0;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
        goto LAB_01ec6036;
      }
      local_38[0] = '\0';
      bVar14 = false;
    }
    if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar14) {
      local_1d8 = '\0';
      local_1e0 = plVar8;
      (**(code **)(*local_80 + 0x968))();
      if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar13 = DAT_027edfe0;
    if (cVar3 == '\0') {
      if (DAT_027edfe0 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar13;
      local_1c8 = '\x01';
      cVar3 = FUN_01ccca20();
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      plVar11 = (longlong *)0x0;
      plVar6 = (longlong *)(ulonglong)(local_54 & 0xff);
      if (cVar3 == '\0') {
        plVar6 = plVar11;
      }
      local_48 = (longlong *)0x0;
      goto LAB_01ec61c9;
    }
    plVar11 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
  }
  plVar6 = (longlong *)(ulonglong)local_54;
LAB_01ec61c9:
  (**(code **)(*local_80 + 0x998))(plVar6);
  *(undefined1 *)(unaff_RDI + 10) = 0;
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar2 = local_50;
  plVar6 = local_78;
  plVar11 = local_a0;
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// Function: FUN_00d31a90
// Address: 00d31a90
// Size: 3207 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
//   "%@.lproj"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00d31a90(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  ulonglong local_78;
  longlong *local_70;
  char local_68;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  local_38 = param_2;
  if (DAT_028a7728 == '\0') {
    if ((DAT_028a7718 == (longlong *)0x0) || (DAT_028a7721 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a7718 != (longlong *)0x0) {
        DAT_028a7721 = '\x01';
        param_1 = FUN_00e8cb70();
        goto LAB_00d31ee7;
      }
      DAT_028a7728 = '\x01';
      uVar13 = FUN_00ce6e90();
      plVar11 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          uVar13 = FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          goto LAB_00d31ca6;
        }
      }
      else if (local_58 != (longlong *)0x0) {
LAB_00d31ca6:
        lVar1 = DAT_0277d630;
        if (DAT_0277d630 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_108 = lVar1;
        local_100 = '\x01';
        (**(code **)(*plVar11 + 0x400))(uVar13,&local_108);
        plVar12 = plVar11;
        if (plVar11 == local_58) {
LAB_00d31d2e:
          if (((char)local_50 != '\0') && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar11 = local_58;
          if ((char)local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            plVar12 = local_58;
            goto LAB_00d31d2e;
          }
          FUN_00d50b20();
          local_50 = local_50 & 0xffffff00;
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*unaff_RSI + 0x30))();
        plVar12 = local_58;
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar12 != (longlong *)0x0) {
          uVar13 = (**(code **)(*(longlong *)*unaff_RSI + 0x30))();
          local_98 = local_70;
          local_90 = 0;
          if (local_68 == '\0') {
            if (local_70 != (longlong *)0x0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_90 = '\x01';
          (**(code **)(*plVar11 + 0x400))(uVar13,&local_98);
          if (local_58 == plVar11) {
LAB_00d31e39:
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar11 = local_58;
            if ((char)local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              goto LAB_00d31e39;
            }
            FUN_00d50b20();
            local_50 = local_50 & 0xffffff00;
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 == (longlong *)0x0) goto LAB_00d31edb;
        }
        cVar3 = (**(code **)(*plVar11 + 0x3a0))();
        plVar12 = DAT_028a7718;
        if (cVar3 != '\0') {
          if ((DAT_028a7718 != plVar11) &&
             (FUN_00d50b00(), DAT_028a7718 = plVar11, plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (DAT_028a7720 == '\0') {
            DAT_028a7720 = '\x01';
            FUN_00e8cb90();
          }
        }
        FUN_00d50b20();
      }
LAB_00d31edb:
      DAT_028a7721 = '\x01';
      param_1 = FUN_00e8cb70();
      goto LAB_00d31ee7;
    }
    if (DAT_028a7718 == (longlong *)0x0) goto LAB_00d31efa;
LAB_00d31ae1:
    plVar11 = DAT_028a7718;
    lVar1 = *local_38;
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (lVar1 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    uVar13 = FUN_00d8cb40(param_1,&local_58);
    local_88 = local_a8;
    local_80 = 0;
    if (local_a0 == '\0') {
      if (local_a8 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    local_80 = '\x01';
    param_1 = (**(code **)(*plVar11 + 0x400))(uVar13,&local_88);
    plVar12 = local_70;
    if (local_70 == (longlong *)0x0) {
      bVar2 = true;
      plVar12 = (longlong *)0x0;
      uVar9 = 0;
    }
    else {
      uVar10 = (undefined7)((ulonglong)plVar11 >> 8);
      if (local_68 == '\0') {
        param_1 = FUN_00d50b00();
        bVar2 = false;
        uVar9 = CONCAT71(uVar10,1);
        if ((local_68 == '\0') || (local_70 == (longlong *)0x0)) goto LAB_00d31be2;
        param_1 = FUN_00d50b20();
      }
      else {
        local_68 = '\0';
      }
      uVar9 = CONCAT71(uVar10,1);
      bVar2 = false;
    }
LAB_00d31be2:
    if ((local_80 != '\0') && (local_88 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      param_1 = FUN_00d50b20();
    }
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (plVar12 == (longlong *)0x0) {
      uVar9 = uVar9 & 0xffffffff;
      goto LAB_00d31efd;
    }
    cVar3 = (**(code **)(*plVar12 + 0x3a0))();
    uVar13 = extraout_XMM0_Da;
    if (cVar3 == '\0') {
      uVar9 = 0;
      param_1 = extraout_XMM0_Da;
      if (!bVar2) {
        param_1 = FUN_00d50b20();
      }
      goto LAB_00d31efd;
    }
  }
  else {
LAB_00d31ee7:
    if (DAT_028a7718 != (longlong *)0x0) goto LAB_00d31ae1;
LAB_00d31efa:
    uVar9 = 0;
LAB_00d31efd:
    uVar8 = (uint)uVar9;
    local_f8 = *local_38;
    local_f0 = '\0';
    uVar13 = (**(code **)(*(longlong *)*unaff_RSI + 0x20))(param_1,&local_f8);
    plVar12 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      uVar10 = (undefined7)(uVar9 >> 8);
      if ((char)local_50 == '\0') {
        uVar13 = FUN_00d50b00();
        uVar8 = (uint)CONCAT71(uVar10,1);
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        local_50 = local_50 & 0xffffff00;
        uVar8 = (uint)CONCAT71(uVar10,1);
      }
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar12 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      bVar2 = true;
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      cVar3 = (char)uVar8;
      goto joined_r0x00d32404;
    }
    uVar9 = (ulonglong)uVar8;
  }
  lVar1 = DAT_0277d638;
  local_78 = uVar9;
  if (DAT_0277d638 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_e8 = lVar1;
  local_e0 = '\x01';
  uVar13 = (**(code **)(*plVar12 + 0x400))(uVar13,&local_e8);
  plVar11 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
LAB_00d320e1:
    local_38 = (longlong *)0x0;
LAB_00d320e7:
    lVar1 = DAT_0277d640;
    if (DAT_0277d640 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_c8 = lVar1;
    local_c0 = '\x01';
    (**(code **)(*plVar12 + 0x400))(uVar13,&local_c8);
    plVar12 = local_58;
    if (plVar11 == local_58) {
LAB_00d321cc:
      plVar12 = plVar11;
      if ((char)local_50 != '\0') {
LAB_00d321d2:
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar11 = plVar12;
          goto LAB_00d321cc;
        }
        if ((char)local_50 == '\0') goto LAB_00d321e0;
        goto LAB_00d321d2;
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_50 = local_50 & 0xffffff00;
    }
LAB_00d321e0:
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar12 + 0x398))();
      if (cVar3 == '\0') {
        plVar5 = (longlong *)0x0;
      }
      else {
        local_b0 = '\0';
        local_b8 = plVar12;
        uVar6 = FUN_00de36c0();
        plVar11 = local_58;
        uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),DAT_026fdd40);
        if ((DAT_026fdd40 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
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
          uVar6 = ___cxa_guard_release();
        }
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x360))();
          uVar6 = FUN_00e85ea0();
          if ((char)uVar6 != '\0') {
            if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
            uVar6 = FUN_00e8db60();
            pplVar7 = &local_58;
            if ((char)uVar6 == '\0') {
              pplVar7 = (longlong **)&DAT_02802688;
            }
          }
        }
        plVar5 = *pplVar7;
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          if (*(char *)(pplVar7 + 1) == '\0') {
            uVar6 = FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar7 + 1) = 0;
          }
          local_38 = (longlong *)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        }
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_00d3239f;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    plVar5 = (longlong *)0x0;
    if ((char)local_38 == '\0') goto LAB_00d323ef;
  }
  else {
    local_38 = (longlong *)0x0;
    cVar3 = (**(code **)(*plVar11 + 0x398))();
    uVar13 = extraout_XMM0_Da_00;
    if (cVar3 == '\0') goto LAB_00d320e1;
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0002cb50();
    uVar13 = (**(code **)(*plVar5 + 0x18))();
    local_d8 = plVar11;
    local_d0 = '\0';
    uVar6 = FUN_00e53ff0(uVar13,&local_d8);
    plVar5 = local_58;
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),DAT_026fdd40);
    if (DAT_026fdd40 == '\0') {
      local_38 = (longlong *)&DAT_026fdd40;
      uVar6 = ___cxa_guard_acquire();
      if ((int)uVar6 != 0) {
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
        uVar6 = ___cxa_guard_release();
      }
    }
    pplVar7 = (longlong **)&DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      uVar6 = FUN_00e85ea0();
      if ((char)uVar6 != '\0') {
        if (DAT_026fd0c0 == '\0') {
          local_38 = (longlong *)&DAT_026fd0c0;
          iVar4 = ___cxa_guard_acquire();
          if (iVar4 != 0) {
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
        }
        uVar6 = FUN_00e8db60();
        pplVar7 = &local_58;
        if ((char)uVar6 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar5 = *pplVar7;
    if (plVar5 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plVar5 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar7 + 1) == '\0') {
        uVar6 = FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
      }
      local_38 = (longlong *)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    if (plVar5 == (longlong *)0x0) goto LAB_00d320e7;
LAB_00d3239f:
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_38 == '\0') {
      if (plVar5 == (longlong *)0x0) {
LAB_00d323ef:
        cVar3 = (char)local_78;
        plVar5 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        cVar3 = (char)local_78;
      }
      bVar2 = false;
      *unaff_RDI = plVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto joined_r0x00d32404;
    }
  }
  *unaff_RDI = plVar5;
  bVar2 = false;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  cVar3 = (char)local_78;
joined_r0x00d32404:
  if ((cVar3 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



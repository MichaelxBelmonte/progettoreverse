// Function: FUN_00cd29e0
// Address: 00cd29e0
// Size: 1960 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cd29e0(void)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar8;
  bool bVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if ((DAT_028a7350 == (undefined8 *)0x0) || (DAT_028a7359 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a7350 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        bVar9 = DAT_028a7350 == (undefined8 *)0x0;
        DAT_028a7350 = puVar4;
        if (((bVar9) || (FUN_00d50b20(), DAT_028a7350 != (undefined8 *)0x0)) &&
           (DAT_028a7358 == '\0')) {
          DAT_028a7358 = '\x01';
          FUN_00e8cb90();
        }
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar5 = (longlong)&DAT_025736a8;
        plVar5[3] = 0;
        *(undefined4 *)(plVar5 + 4) = 0;
        (*DAT_025736c0)();
        bVar9 = DAT_028a7360 == (longlong *)0x0;
        DAT_028a7360 = plVar5;
        if (((bVar9) || (FUN_00d50b20(), DAT_028a7360 != (longlong *)0x0)) && (DAT_028a7368 == '\0')
           ) {
          DAT_028a7368 = '\x01';
          FUN_00e8cb90();
        }
        DAT_028a7359 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a7359 = '\x01';
        FUN_00e8cb70();
      }
    }
    (**(code **)(*DAT_028a7360 + 0x368))();
    bVar9 = false;
    if (DAT_028a7350 != (undefined8 *)0x0) {
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_50 = DAT_028a7350;
      local_48 = 0xffffffff;
      local_40 = 0;
      while( true ) {
        lVar6 = (longlong)(int)local_48;
        iVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        if (*(int *)((longlong)local_50 + 0xc) <= iVar7) break;
        local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
        plVar5 = (longlong *)*unaff_RSI;
        lVar6 = local_60[6];
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar5 + 0x50))();
        uVar10 = extraout_XMM0_Da;
        if (lVar6 != 0) {
          uVar10 = FUN_00d50b20();
        }
        plVar5 = local_60;
        if (cVar3 != '\0') {
          if (local_60 != (longlong *)0x0) {
            if (local_58 == '\0') {
              FUN_00d50b00();
            }
            else {
              local_58 = '\0';
            }
            bVar1 = true;
            FUN_00cdd7d0();
            bVar9 = true;
            if (plVar5 != (longlong *)0x0) goto LAB_00cd2f20;
            goto LAB_00cd2c6b;
          }
          break;
        }
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar7 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690(uVar10,local_48._4_4_);
            local_40 = local_40 + local_48._4_4_;
            iVar7 = 0;
          }
          local_48 = CONCAT44(iVar7,(int)local_48);
        }
      }
      FUN_00cdd7d0();
      bVar9 = false;
    }
LAB_00cd2c6b:
    bVar1 = bVar9;
    FUN_00d6f370();
    local_b0 = DAT_02774d60;
    if (DAT_02774d60 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_a0 = 0;
    local_98 = '\0';
    uVar10 = FUN_00d704d0(&local_a0,&local_b0);
    plVar5 = local_60;
    if (DAT_026fdd40 == '\0') {
      local_38 = (longlong *)&DAT_026fdd40;
      iVar7 = ___cxa_guard_acquire();
      uVar10 = extraout_XMM0_Da_03;
      if (iVar7 != 0) {
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
        uVar10 = ___cxa_guard_release();
      }
    }
    pplVar8 = (longlong **)&DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Da_00;
      if (cVar3 != '\0') {
        if (DAT_026fd0c0 == '\0') {
          local_38 = (longlong *)&DAT_026fd0c0;
          iVar7 = ___cxa_guard_acquire();
          if (iVar7 != 0) {
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
        cVar3 = FUN_00e8db60();
        uVar10 = extraout_XMM0_Da_01;
        if (cVar3 != '\0') {
          if (DAT_026fd0c0 == '\0') {
            local_38 = (longlong *)&DAT_026fd0c0;
            iVar7 = ___cxa_guard_acquire();
            if (iVar7 != 0) {
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
          cVar3 = FUN_00e8dc10();
          pplVar8 = &local_60;
          uVar10 = extraout_XMM0_Da_02;
          if (cVar3 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
      }
    }
    plVar5 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar5 != (longlong *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    local_90 = *unaff_RSI;
    local_88 = '\0';
    local_38 = plVar5;
    FUN_01de4130(uVar10,&local_90);
    plVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (*unaff_RSI == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      local_80 = plVar2;
      local_78 = '\0';
      FUN_00cddf30();
      lVar6 = local_70;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00cd1020();
      plVar5 = local_60;
      if (local_60 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        bVar1 = true;
        if (local_58 == '\0') {
          FUN_00d50b00();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
LAB_00cd2f20:
    (**(code **)(*DAT_028a7360 + 0x378))();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar1) && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


